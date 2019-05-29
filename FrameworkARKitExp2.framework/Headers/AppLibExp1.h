//
//  AppLibExp1.h
//  AppLibExp1
//
//  Created by Paolo Dobrowolny on 5/23/19.
//  Copyright © 2019 Paolo Dobrowolny. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <AFNetworking/AFNetworking.h>
#import <AWSS3/AWSS3.h>
#import <ARCL/ARCL-Swift.h>
#import <OpenTok/OpenTok.h>
#import <SVProgressHUD/SVProgressHUD.h>
#import <Mixpanel/Mixpanel.h>
#import <IGListKit/IGListKit.h>

@class myViewController;


@interface AppLibExp1 : NSObject

@property (assign,nonatomic) AFNetworkReachabilityStatus prevStatus;
-(void) logStatusAFNetworking;

@property (strong, nonatomic) AWSS3TransferManagerUploadRequest *awss3uploadReq;
-(void) testAWS;

@property (nonatomic) SceneLocationView *sceneLocationView;
- (void) testARCL;
    
- (void) testNastySwift;


@end

