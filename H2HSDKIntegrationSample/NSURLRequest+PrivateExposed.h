//
//  NSURLRequest+PrivateExposed.h
//  H2HSDKIntegrationSample
//
//  Created by Aditya Deshmane on 16/02/17.
//  Copyright © 2016 Spring Computing Technologies. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLRequest (PrivateExposed)
+ (void) setAllowsAnyHTTPSCertificate:(BOOL)allowsAnyHTTPSCertificate forHost:(NSString *)host;
@end
