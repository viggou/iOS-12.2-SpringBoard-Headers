//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, SBUIPluginController;
@protocol SBDeviceLockViewOwner;

@protocol SBUIPluginControllerHost <NSObject>
- (void)uiPluginWantsScreenOn:(SBUIPluginController *)arg1;
- (void)uiPlugin:(SBUIPluginController *)arg1 forceUpdateToInterfaceOrientation:(long long)arg2 animated:(_Bool)arg3;
- (void)uiPluginUserEventOccurred:(SBUIPluginController *)arg1;
- (_Bool)uiPlugin:(SBUIPluginController *)arg1 launchApplicationWithBundleID:(NSString *)arg2 openURL:(NSURL *)arg3 allowDismissal:(_Bool)arg4;
- (_Bool)uiPlugin:(SBUIPluginController *)arg1 launchApplicationWithBundleID:(NSString *)arg2 openURL:(NSURL *)arg3;
- (_Bool)uiPlugin:(SBUIPluginController *)arg1 openURL:(NSURL *)arg2;
- (_Bool)uiPluginAttemptDeviceUnlock:(SBUIPluginController *)arg1 withPassword:(NSString *)arg2 lockViewOwner:(id <SBDeviceLockViewOwner>)arg3;
- (void)uiPlugin:(SBUIPluginController *)arg1 setExpectsFaceContact:(_Bool)arg2;
- (_Bool)uiPluginExpectsFaceContact:(SBUIPluginController *)arg1;
- (void)uiPlugin:(SBUIPluginController *)arg1 isNowRunning:(_Bool)arg2;
- (void)uiPluginWantsDismissal:(SBUIPluginController *)arg1 withAnimation:(_Bool)arg2;
- (_Bool)uiPluginWantsActivation:(SBUIPluginController *)arg1 forEvent:(int)arg2 completion:(void (^)(_Bool))arg3;
@end
