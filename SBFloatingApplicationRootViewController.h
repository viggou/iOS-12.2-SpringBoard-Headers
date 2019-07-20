//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import "BSTransactionObserver-Protocol.h"
#import "SBDeviceApplicationSceneHandleObserver-Protocol.h"
#import "SBGrabberTongueDelegate-Protocol.h"
#import "SBPanSystemGestureRecognizerDelegate-Protocol.h"

@class FBDisplayLayoutElement, FBSSceneSettingsDiffInspector, NSLayoutConstraint, NSString, SBApplicationBlurContentView, SBDeviceApplicationSceneHandle, SBGrabberTongue, SBMedusaDecoratedDeviceApplicationSceneViewController, SBMoveFloatingApplicationPanSystemGestureRecognizerWorkspaceTransaction, SBPanSystemGestureRecognizer, SBPinFloatingApplicationPanSystemGestureRecognizerWorkspaceTransaction, UIView;
@protocol SBFloatingApplicationRootViewControllerDelegate;

@interface SBFloatingApplicationRootViewController : SBFTouchPassThroughViewController <BSTransactionObserver, SBDeviceApplicationSceneHandleObserver, SBGrabberTongueDelegate, SBPanSystemGestureRecognizerDelegate>
{
    struct {
        unsigned int floatingApplicationRootViewController_allowsPresentScreenEdgePanGestureRecognizerForDeviceApplicationSceneHandle:1;
        unsigned int floatingApplicationRootViewController_requiresGrabberTongueForDeviceApplicationSceneHandle:1;
        unsigned int floatingApplicationRootViewController_requiresGrabberTongueOutsideGrabberFreeRegionForDeviceApplicationSceneHandle:1;
        unsigned int floatingApplicationRootViewController_darkenViewTappedForDeviceApplicationSceneHandle:1;
        unsigned int floatingApplicationRootViewControllerDidCompleteDeviceApplicationSceneHandleSuspendAnimation:1;
    } _delegateRespondsTo;
    UIView *_darkenView;
    SBMedusaDecoratedDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintTopNormal;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintBottomNormal;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintWidthNormal;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintCenterYNormal;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintLeading;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintTrailing;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintStashed;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintCenterXInteractive;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintCenterYInteractive;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintWidthInteractive;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintHeightInteractive;
    NSLayoutConstraint *_deviceApplicationSceneViewLayoutConstraintFixedTop;
    SBGrabberTongue *_grabberTongue;
    SBPanSystemGestureRecognizer *_movePanSystemGestureRecognizer;
    SBPanSystemGestureRecognizer *_pinPanSystemGestureRecognizer;
    SBMoveFloatingApplicationPanSystemGestureRecognizerWorkspaceTransaction *_movePanSystemGestureRecognizerWorkspaceTransaction;
    SBPinFloatingApplicationPanSystemGestureRecognizerWorkspaceTransaction *_pinPanSystemGestureRecognizerWorkspaceTransaction;
    FBDisplayLayoutElement *_displayLayoutElement;
    FBSSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
    SBApplicationBlurContentView *_pendingApplicationBlurContentView;
    _Bool _deviceApplicationSceneViewControllerHidden;
    _Bool _modal;
    _Bool _userInteractionEnabled;
    _Bool _stashedWithoutFloatingConfigurationUpdate;
    id <SBFloatingApplicationRootViewControllerDelegate> _delegate;
    SBDeviceApplicationSceneHandle *_activeDeviceApplicationSceneHandle;
    long long _interfaceOrientation;
    long long _floatingConfiguration;
}

+ (id)prototypeSettingsAnimationSettings;
+ (double)prototypeSettingsEdgeSwipeHitTestWidth;
+ (double)prototypeSettingsCornerRadius;
@property(readonly, nonatomic, getter=isStashedWithoutFloatingConfigurationUpdate) _Bool stashedWithoutFloatingConfigurationUpdate; // @synthesize stashedWithoutFloatingConfigurationUpdate=_stashedWithoutFloatingConfigurationUpdate;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(readonly, nonatomic, getter=isModal) _Bool modal; // @synthesize modal=_modal;
@property(readonly, nonatomic) long long floatingConfiguration; // @synthesize floatingConfiguration=_floatingConfiguration;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *activeDeviceApplicationSceneHandle; // @synthesize activeDeviceApplicationSceneHandle=_activeDeviceApplicationSceneHandle;
@property(nonatomic) __weak id <SBFloatingApplicationRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_isDeviceApplicationSceneViewControllerHidden, setter=_setDeviceApplicationSceneViewControllerHidden:) _Bool _deviceApplicationSceneViewControllerHidden; // @synthesize _deviceApplicationSceneViewControllerHidden;
- (void).cxx_destruct;
- (_Bool)_edgeLocationIsOutsideGrabberFreeRegion:(double)arg1;
- (_Bool)_shouldDisplayLayoutElementBecomeActive;
- (void)_updateDisplayLayoutElement;
- (void)_updateDeviceApplicationSceneViewWidthConstraintForInterfaceOrientation:(long long)arg1;
- (void)_updateLayoutConstraintsForFloatingConfiguration:(long long)arg1;
- (void)_updateDeviceApplicationSceneViewController:(id)arg1 shadowForFloatingConfiguration:(long long)arg2;
- (void)_updateDeviceApplicationSceneViewControllerShadowForFloatingConfiguration:(long long)arg1;
- (void)_updateDeviceApplicationSceneViewController:(id)arg1 alpha:(double)arg2;
- (void)_updateDeviceApplicationSceneViewControllerAlpha:(double)arg1;
- (void)_updateDarkenViewAlphaForFloatingConfiguration:(long long)arg1 modal:(_Bool)arg2;
- (void)_unhighlightDeviceApplicationSceneViewControllerNubView;
- (void)_highlightDeviceApplicationSceneViewControllerNubView;
- (void)_managePinPanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (void)_manageMovePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (void)_handlePinPanSystemGestureRecognizer:(id)arg1;
- (void)_handleDismissPanSystemGestureRecognizer:(id)arg1;
- (void)_handleMovePanSystemGestureRecognizer:(id)arg1;
- (void)_handlePresentScreenEdgePanGestureRecognizer:(id)arg1;
- (void)_handleDarkenViewTapGestureRecognizer:(id)arg1;
- (_Bool)_hasActiveSystemGestureRecognizerWorkspaceTransaction;
- (void)_removeDeviceApplicationSceneViewControllerAnimated:(_Bool)arg1;
- (void)_addDeviceApplicationSceneViewControllerWithDeviceApplicationSceneHandle:(id)arg1 withActivationSettings:(id)arg2 interfaceOrientation:(long long)arg3 floatingConfiguration:(long long)arg4 modal:(_Bool)arg5 animated:(_Bool)arg6;
- (id)_displayIdentity;
- (id)_displayConfiguration;
- (void)_animateFloatingApplicationViewLayoutConstraintChanges;
- (void)_deactivateFixedTopLayoutConstraint;
- (void)_deactivateInteractiveLayoutConstraintsWithFloatingConfiguration:(long long)arg1;
- (void)_setFloatingApplicationViewHeight:(double)arg1;
- (double)_floatingApplicationViewHeight;
- (void)_activateInteractiveHeightLayoutConstraint;
- (void)_setFloatingApplicationViewWidth:(double)arg1;
- (double)_floatingApplicationViewWidth;
- (void)_activateInteractiveWidthLayoutConstraint;
- (void)_setFloatingApplicationViewCenterY:(double)arg1;
- (double)_floatingApplicationViewCenterY;
- (void)_setFloatingApplicationViewCenterX:(double)arg1;
- (double)_floatingApplicationViewCenterX;
- (void)_activateFixedTopLayoutConstraint;
- (void)_activateInteractiveCenterYLayoutConstraint;
- (void)_activateInteractiveCenterXLayoutConstraint;
- (void)_setFloatingApplicationViewTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_floatingApplicationViewTransform;
- (void)_dismissDeviceApplicationSceneViewController;
- (void)_updateModal:(_Bool)arg1;
- (void)_updateFloatingConfiguration:(long long)arg1;
- (struct CGRect)_convertRectFromFixedCoordinateSpaceToViewCoordinateSpace:(struct CGRect)arg1;
- (void)_updateDarkenViewAlphaAndFloatingApplicationViewShadowForFloatingConfiguration:(long long)arg1;
- (void)_updateDarkenViewAlphaForFloatingConfiguration:(long long)arg1;
- (id)_deviceApplicationSceneViewController;
- (void)_setDarkenViewAlpha:(double)arg1;
- (double)_darkenViewAlpha;
- (struct CGRect)_viewBounds;
- (void)unstashActiveDeviceApplicationSceneHandleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stashActiveDeviceApplicationSceneHandleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)applicationSceneSettingsFrameForInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (void)updateActivationSettings:(id)arg1 interfaceOrientation:(long long)arg2 floatingConfiguration:(long long)arg3 modal:(_Bool)arg4 animated:(_Bool)arg5;
- (void)suspendDeviceApplicationSceneHandle:(id)arg1 animated:(_Bool)arg2;
- (void)activateDeviceApplicationSceneHandle:(id)arg1 withActivationSettings:(id)arg2 interfaceOrientation:(long long)arg3 floatingConfiguration:(long long)arg4 modal:(_Bool)arg5 animated:(_Bool)arg6;
@property(readonly, nonatomic) double viewMargin;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)panSystemGestureRecognizer:(id)arg1 didReceiveInitialTouch:(id)arg2;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (_Bool)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(_Bool)arg2;
- (void)transactionDidComplete:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

