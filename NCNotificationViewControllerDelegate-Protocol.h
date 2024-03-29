//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSAnimationSettings, NCNotificationAction, NCNotificationRequest, NCNotificationViewController, NSDictionary, UIView, UIWindow, _UILegibilitySettings;
@protocol PLKeyboardHomeAffordanceAssertion, UIViewSpringAnimationBehaviorDescribing;

@protocol NCNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(NCNotificationViewController *)arg1 executeAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;

@optional
- (void)notificationViewController:(NCNotificationViewController *)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(NCNotificationRequest *)arg2;
- (_UILegibilitySettings *)legibilitySettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (id <UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (id <PLKeyboardHomeAffordanceAssertion>)notificationViewController:(NCNotificationViewController *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (NSDictionary *)notificationUsageTrackingStateForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerIsReadyToBePresented:(NCNotificationViewController *)arg1;
- (_Bool)shouldLoadAudioAccessoryViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (_Bool)showAdditionalMessageLinesForNotificationViewController:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewController:(NCNotificationViewController *)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(void (^)(_Bool))arg2;
- (struct CGRect)notificationViewController:(NCNotificationViewController *)arg1 finalFrameForDismissingLongLookFromView:(UIView *)arg2;
- (struct CGRect)notificationViewController:(NCNotificationViewController *)arg1 initialFrameForPresentingLongLookFromView:(UIView *)arg2;
- (_Bool)notificationViewControllerShouldAllowInteractionGesture:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldBlurShortLook:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (long long)notificationViewControllerDateFormatStyle:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillDismissForCancelAction:(NCNotificationViewController *)arg1;
@end

