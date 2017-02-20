

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
4. Set server URL in "AppDelegate.swift" ```let H2HServerURL = "https://sandbox.liveh2h.com/tutormeetweb/" ```
5. Run Application
6. This should run application without any error

---
### How to use SDK in your project?

1. Copy (drag drop) following frameworks and bundle from sample app's FrameworksAndResources folder to your project

 * H2HBundle.bundle
 * TutorWebTC.framework
 * H2HSDK.framework

2. Copy (drag drop) following third party framework from sample app to your project directory

 * Charts.framework
 * CocoaAsyncSocket.framework
 * CocoaLumberjack.framework
 * XMPPFramework.framework

3. For frameworks and bundle make sure entries are present at two places 

  Make sure files from 1 and 2 are present here (Refer sample project for entries)

  * From Project File -> General -> Embedded Binaries 
  * From Project File -> General -> Linked Frameworks and Libraries
  
4. Refer existing code from sample app to join meeting

* JoinMeetingTableViewController.swift - To Join meeting
* ScheduleMeetingTableViewController.swift - To schedule meeting
* StartMeetingTableViewController.swift - To start instant meeting

Check all available API's for meeting joining in framework header file H2HSDK.h at following path

H2HSDK.framework -> Headers -> H2HSDK.h

Meeting Room Customization:

Use parameter "customizationDictionary" from H2H SDK's joinMeetingWithToken method to customize the meeting room. Here is the example of customization dictionary:
```
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
```
