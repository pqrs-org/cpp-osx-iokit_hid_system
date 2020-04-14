#import "AppDelegate.h"
#include <pqrs/dispatcher.hpp>
#include <pqrs/osx/iokit_hid_system.hpp>
#import <pqrs/weakify.h>
#include <sstream>

@interface AppDelegate ()

@property(weak) IBOutlet NSWindow* window;
@property(weak) IBOutlet NSTextView* textView;
@property std::shared_ptr<pqrs::osx::iokit_hid_system::client> client;

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification*)aNotification {
  self.textView.string = @"";

  pqrs::dispatcher::extra::initialize_shared_dispatcher();

  self.client = std::make_shared<pqrs::osx::iokit_hid_system::client>(
      pqrs::dispatcher::extra::get_shared_dispatcher());

  self.client->opened.connect([self] {
    [self appendLogMessage:@"opened"];
  });

  self.client->closed.connect([self] {
    [self appendLogMessage:@"closed"];
  });

  self.client->error_occurred.connect([self](auto&& message, auto&& r) {
    std::stringstream ss;
    ss << message << " " << r;
    [self appendLogMessage:[NSString stringWithUTF8String:ss.str().c_str()]];
  });

  self.client->post_event_error_occurred.connect([self](auto&& r) {
    std::stringstream ss;
    ss << "post_event_error_occurred " << r;
    [self appendLogMessage:[NSString stringWithUTF8String:ss.str().c_str()]];
  });

  self.client->async_start();
}

- (void)applicationWillTerminate:(NSNotification*)aNotification {
  self.client = nullptr;

  pqrs::dispatcher::extra::terminate_shared_dispatcher();
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication*)theApplication {
  return YES;
}

- (IBAction)postExposeAll:(id)sender {
  for (auto event_type : {
           pqrs::osx::iokit_hid_system::event_type::key_down,
           pqrs::osx::iokit_hid_system::event_type::key_up,
       }) {
    self.client->async_post_key_code_event(
        event_type,
        pqrs::osx::iokit_hid_system::key_code::apple_vendor_keyboard_expose_all,
        0,
        false);
  }
}

- (IBAction)postLaunchpad:(id)sender {
  for (auto event_type : {
           pqrs::osx::iokit_hid_system::event_type::key_down,
           pqrs::osx::iokit_hid_system::event_type::key_up,
       }) {
    self.client->async_post_key_code_event(
        event_type,
        pqrs::osx::iokit_hid_system::key_code::apple_vendor_keyboard_launchpad,
        0,
        false);
  }
}

- (void)appendLogMessage:(NSString*)string {
  @weakify(self);
  dispatch_async(dispatch_get_main_queue(), ^{
    @strongify(self);
    if (!self) {
      return;
    }

    self.textView.string = [self.textView.string stringByAppendingFormat:@"%@\n", string];
  });
}

@end
