

#H2H-iOS-SampleApp
 
### Please note

* Use Xcode 8 onwards
* Not compatible with simulater, use iPhone/iPad only
* Minimum compatible iOS 9.3
* Sample app is using Swift and module name is "H2HSDKIntegrationSample", import H2HSDKIntegrationSample-Swift.h in obj-c code if your code base is in obj-c.

---
### How to run sample app ?

1. Open workspace H2HSDKIntegrationSample.xcworkspace
2. On launch, Xcode asks for migration of code, select Later.
3. Set bundle ID and App signing 
4. Set server URL in "AppDelegate.swift"
5. Run Application
6. This should run application without any error

---
### How to use SDK in your project?

1. Copy (drag drop) following frameworks and bundle from sample app's FrameworksAndResources folder to your project

  H2HBundle.bundle
  TutorWebTC.framework
  H2HSDK.framework

2. Copy (drag drop) following third party framework from sample app to your project directory

  Charts.framework
  CocoaAsyncSocket.framework
  CocoaLumberjack.framework
  XMPPFramework.framework

3. For frameworks and bundle

  From Project File -> General -> Embedded Binaries -> + -> Add Other (select these files: H2HBundle.bundle, TutorWebTC.framework, H2HSDK.framework from the project directory.) -> Select: copy items if needed -> Finish.
  Make sure these files are added under:

  Embedded Binaries: (General tab)
  H2HBundle.bundle,
  TutorWebTC.framework,
  H2HSDK.framework.

  and Linked Frameworks and Libraries: (General tab)
  TutorWebTC.framework
  H2HSDK.framework.

Step 3.

  Project File -> Build Phases -> Copy Bundle Resources -> + (if not present) -> H2HBundle.bundle

Step 4.

  Project File -> Build Settings -> Build Options -> Enable Bitcode -> NO

Step 5.

  Create Podfile and add following statements:
  platform :ios, ‘7.1’

  target ‘<Target Name>’ do
  pod 'KissXML'
  pod 'CocoaAsyncSocket'
  pod 'CocoaLumberjack’, ‘2.2.0’
  end


  and perform pod install.
  (for more information on how to install pods, refer: https://cocoapods.org/)
  close project file and open workspace created by pods.

Step 6.

  Unzip and copy XMPPFramework (provided in FrameworksAndResources folder) in your project folder.
  Add it in frameworks folder in your project. ( select Frameworks -> Add files to <Project Name> -> select XMPPFramework we just copied )

Step 7.

  Add Project file -> Build Phases -> Link Binary with Libraries -> + -> libresolv.tbd

Step 8.

  In H2HSDK.framework -> Headers -> H2HSDK.h: add line #import “H2HSDKExt.h” (if not already present)

Step 9.

  Clean and Build your project.



Meeting Room Customization:

Please use parameter "customizationDictionary" from H2H SDK's joinMeetingWithToken method to customize the meeting room. Here is the example of customization dictionary:

NSDictionary *customizationDictionary = @{kCustomizationHideTranscript:@YES,
                                          kCustomizationHideTranslator:@YES,
                                                kCustomizationLanguage:kCustomLanguageChinese,
                                               kCustomizationLogoImage:[UIImage imageNamed:@"MyCompanyLogo"],
                                   kCustomizationUseFabricJSWhiteboard:@YES,
                                      kCustomizationUseAttendeeIdForWB:@YES,
                                  kCustomizationHideInviteUsersByEmail:@YES,
                                    kCustomizationHideParticipantsIcon:@YES};

Customization keys:
kCustomizationHideTranscript - BOOL - show/hide meeting transcript;
kCustomizationHideTranslator - BOOL - enable/disable meeting translator;
kCustomizationHideTranslator - NSString - default meeting room UI language (English / Chinese / etc);
kCustomizationLogoImage - UIImage - custom UIImage for logo inside the meeting room;
kCustomizationUseFabricJSWhiteboard - BOOL - use native or Farbic.js whiteboard;
kCustomizationUseAttendeeIdForWB - BOOL - whiteboard control flag;
kCustomizationHideInviteUsersByEmail - BOOL - enable/disable UI for inviting participants to the meeting;
kCustomizationHideParticipantsIcon - BOOL - enable/disable participants management.
