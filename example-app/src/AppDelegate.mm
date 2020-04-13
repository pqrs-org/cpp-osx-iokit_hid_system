#import "AppDelegate.h"
#include <pqrs/dispatcher.hpp>
#include <pqrs/osx/iokit_hid_system.hpp>

@interface AppDelegate ()

@property(weak) IBOutlet NSWindow *window;
@property std::shared_ptr<pqrs::osx::iokit_hid_system::client> client;

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
  pqrs::dispatcher::extra::initialize_shared_dispatcher();

  self.client = std::make_shared<pqrs::osx::iokit_hid_system::client>(
      pqrs::dispatcher::extra::get_shared_dispatcher());
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
  self.client = nullptr;

  pqrs::dispatcher::extra::terminate_shared_dispatcher();
}

- (IBAction)postExposeAll:(id)sender {
  self.client->async_post_key_code_event(
      pqrs::osx::iokit_hid_system::event_type::key_down,
      pqrs::osx::iokit_hid_system::key_code::apple_vendor_keyboard_expose_all,
      0,
      false);
}

- (IBAction)postLaunchpad:(id)sender {
  self.client->async_post_key_code_event(
      pqrs::osx::iokit_hid_system::event_type::key_down,
      pqrs::osx::iokit_hid_system::key_code::apple_vendor_keyboard_launchpad,
      0,
      false);
}

@end
