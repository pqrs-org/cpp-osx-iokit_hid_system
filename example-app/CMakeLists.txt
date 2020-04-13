cmake_minimum_required (VERSION 3.9)
project (example-app)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall)
add_compile_options(-Werror)
add_compile_options(-O2)
add_compile_options(-fobjc-arc)
add_compile_options(-fmodules)
add_compile_options(-fcxx-modules)

include_directories(SYSTEM ${CMAKE_CURRENT_LIST_DIR}/vendor/include)
include_directories(SYSTEM ${CMAKE_CURRENT_LIST_DIR}/../include)

add_executable(
  example-app
  MACOSX_BUNDLE
  src/AppDelegate.mm
  src/AppDelegate.h
  src/main.m
  Resources/MainMenu.xib
  Resources/Assets.xcassets
)

set_source_files_properties(
  Resources/MainMenu.xib
  Resources/Assets.xcassets
  PROPERTIES
  MACOSX_PACKAGE_LOCATION
  Resources
)

set_target_properties(
  example-app
  PROPERTIES

  MACOSX_BUNDLE_INFO_PLIST
  ${CMAKE_CURRENT_LIST_DIR}/Resources/Info.plist

  XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER
  "org.pqrs.cpp-osx-iokit_hid_system.example-app"

  XCODE_ATTRIBUTE_ENABLE_HARDENED_RUNTIME
  YES
)
