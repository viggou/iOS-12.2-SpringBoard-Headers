//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSAnimationSettings, NSError, NSNumber, NSString, SBUIRemoteAlertIdleTimerSettings, SBUIRemoteAlertMaterialDescriptor;

@protocol _SBRemoteAlertHostViewControllerDelegate <NSObject>
- (void)remoteAlertWantsToSetSceneDeactivationReason:(NSNumber *)arg1;
- (void)remoteAlertWantsToSetWhitePointAdaptivityStyle:(long long)arg1;
- (void)remoteAlertWantsToSetOrientationChangedEventsEnabled:(_Bool)arg1;
- (void)remoteAlertWantsToSetLaunchingInterfaceOrientation:(long long)arg1;
- (void)remoteAlertWantsToDisableFadeInAnimation:(_Bool)arg1;
- (void)remoteAlertWantsToDismissOnUILock:(_Bool)arg1;
- (void)remoteAlertWantsToConfigureIdleTimerWithSettings:(SBUIRemoteAlertIdleTimerSettings *)arg1;
- (void)remoteAlertWantsToSetIdleTimerDisabled:(_Bool)arg1 forReason:(NSString *)arg2;
- (void)remoteAlertWantsToSetStatusBarStyleOverridesToCancel:(int)arg1;
- (void)remoteAlertWantsToSetBackgroundWeighting:(double)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)remoteAlertWantsToSetBackgroundMaterialDescriptor:(SBUIRemoteAlertMaterialDescriptor *)arg1;
- (void)remoteAlertWantsToSetSwipeDismissalStyle:(long long)arg1;
- (void)remoteAlertWantsToSetDismissalAnimationStyle:(long long)arg1;
- (void)remoteAlertWantsToAllowAlertStacking:(_Bool)arg1;
- (void)remoteAlertWantsMenuButtonDismissal:(_Bool)arg1;
- (void)remoteAlertWantsToSetWallpaperStyle:(long long)arg1 withDuration:(double)arg2;
- (void)remoteAlertWantsWallpaperTunnelActive:(_Bool)arg1;
- (void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(unsigned long long)arg1;
- (void)remoteAlertWantsToAllowSiri:(_Bool)arg1;
- (void)remoteAlertWantsToAllowAlertItems:(_Bool)arg1;
- (void)remoteAlertWantsToAllowBanners:(_Bool)arg1;
- (void)remoteAlertWantsReachabilityDisabled:(_Bool)arg1;
- (void)remoteAlertDidTerminateWithError:(NSError *)arg1;
- (void)remoteAlertDidRequestInvalidation;
- (void)remoteAlertDidRequestDeactivation;
@end

