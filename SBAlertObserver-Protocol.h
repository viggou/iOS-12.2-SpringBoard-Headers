//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBAlert;

@protocol SBAlertObserver <NSObject>

@optional
- (void)alertDidChangeReachabilitySupport:(SBAlert *)arg1;
- (void)alertBannerSuppressionChanged:(SBAlert *)arg1;
- (void)alertDidDeactivate:(SBAlert *)arg1;
- (void)alertDidActivate:(SBAlert *)arg1;
@end

