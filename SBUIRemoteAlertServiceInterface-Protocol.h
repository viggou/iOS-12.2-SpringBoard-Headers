//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSSet, NSUUID, SBSRemoteAlertActivationContext, SBSRemoteAlertConfigurationContext;

@protocol SBUIRemoteAlertServiceInterface
- (void)configureWithContext:(SBSRemoteAlertConfigurationContext *)arg1 completion:(void (^)(void))arg2;

@optional
- (void)setUserInfo:(NSDictionary *)arg1;
- (void)prepareForActivationWithContext:(SBSRemoteAlertActivationContext *)arg1 completion:(void (^)(void))arg2;
- (void)noteActivatedForActivityContinuationWithIdentifier:(NSUUID *)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (void)handleButtonActions:(NSSet *)arg1;
- (void)handleHeadsetButtonPressed:(_Bool)arg1;
- (void)handleVolumeDownButtonPressed;
- (void)handleVolumeUpButtonPressed;
- (void)handleLockButtonPressed;
- (void)handleHomeButtonPressed;
@end
