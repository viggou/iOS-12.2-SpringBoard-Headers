//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBAuthenticationFeedback, SBLockScreenUnlockRequest;
@protocol SBBiometricUnlockBehavior;

@protocol SBBiometricUnlockBehaviorDelegate <NSObject>
- (_Bool)biometricUnlockBehavior:(id <SBBiometricUnlockBehavior>)arg1 requestsUnlock:(SBLockScreenUnlockRequest *)arg2 withFeedback:(SBAuthenticationFeedback *)arg3;
- (_Bool)biometricUnlockBehavior:(id <SBBiometricUnlockBehavior>)arg1 requestsFeedback:(SBAuthenticationFeedback *)arg2;
@end

