//
//  FrameworkARKitExp2.h
//  FrameworkARKitExp2
//
//  Created by Paolo Dobrowolny on 5/28/19.
//  Copyright © 2019 Paolo Dobrowolny. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for FrameworkARKitExp2.
FOUNDATION_EXPORT double FrameworkARKitExp2VersionNumber;

//! Project version string for FrameworkARKitExp2.
FOUNDATION_EXPORT const unsigned char FrameworkARKitExp2VersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FrameworkARKitExp2/PublicHeader.h>

#import "AppLibExp1.h"

#import <AFNetworking.h>
#import <AWSS3.h>
#import <ARCL-Swift.h>
#import <OpenTok/OpenTok.h>
#import <SVProgressHUD.h>
#import <Mixpanel.h>
#import <IGListKit.h>

/*
+(void) logStatusAFNetworking {
    
    [[AFNetworkReachabilityManager sharedManager] setReachabilityStatusChangeBlock:^(AFNetworkReachabilityStatus status)
     {
         NSLog(@"WORKS!!!!! Status: %ld", (long)status);
     }];
}


+(void) testAWS {
    AWSS3TransferManagerUploadRequest* uploadReq = [AWSS3TransferManagerUploadRequest new];
    NSLog(@"AWS works! %@", uploadReq.description);
}
*/


