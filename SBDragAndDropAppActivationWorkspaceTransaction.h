//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "UIDropInteractionDelegate-Protocol.h"

@class NSSet, NSString, NSURL, SBDeviceApplicationSceneHandle, SBFloatingApplicationController, SBFloatingDockWindowLevelAssertion, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutViewController, SBMedusaPlatterDragPreview, SBToAppsWorkspaceTransaction, SBWindow;
@protocol UIDropSession;

@interface SBDragAndDropAppActivationWorkspaceTransaction : SBMainWorkspaceTransaction <UIDropInteractionDelegate>
{
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBFloatingApplicationController *_floatingApplicationController;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBMainDisplayLayoutState *_finalLayoutState;
    id <UIDropSession> _dropSession;
    unsigned long long _sessionState;
    SBDeviceApplicationSceneHandle *_draggingApplicationSceneHandle;
    NSSet *_draggingLaunchActions;
    NSURL *_draggingLaunchURL;
    long long _draggingStartLocation;
    SBToAppsWorkspaceTransaction *_currentWorkspaceTransaction;
    unsigned long long _currentDropAction;
    _Bool _performedDrop;
    _Bool _dropAnimationCompleted;
    unsigned long long _blurState;
    _Bool _resizingElementViewControllers;
    unsigned long long _blurringElementViewControllers;
    SBMedusaPlatterDragPreview *_activePreviewPlatter;
    SBWindow *_setDownCoordinateSpaceProvidingWindow;
    SBFloatingDockWindowLevelAssertion *_floatingDockWindowLevelAssertion;
}

+ (double)prototypeSettingsSideActivationGutterSize;
+ (double)prototypeSettingsMinifiedPlatterHeightScaleForOrientation:(long long)arg1;
+ (double)prototypeSettingsMinifiedPlatterWidthScaleForOrientation:(long long)arg1;
- (void).cxx_destruct;
- (id)resizeUIAnimationFactory;
- (id)_sideLayoutElementViewController;
- (id)_primaryLayoutElementViewController;
- (void)_dismissSpotlightAlertIfNeeded;
- (long long)_layoutRoleForDropAction:(unsigned long long)arg1;
- (void)_configurePlatterPreview:(id)arg1 forSceneHandle:(id)arg2;
- (void)_cleanUpAndCompleteTransactionIfNecessary;
- (void)_hideSetDownCoordinateSpaceProvidingWindow;
- (void)_showSetDownCoordinateSpaceProvidingWindow;
- (struct CGSize)_sizeForFloatingApplication;
- (void)_setFloatingApplicationHidden:(_Bool)arg1;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 separatorViewFrame:(struct CGRect *)arg3 forDropAction:(unsigned long long)arg4 state:(unsigned long long)arg5 spaceConfiguration:(long long)arg6;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 separatorViewFrame:(struct CGRect *)arg3 forDropAction:(unsigned long long)arg4 state:(unsigned long long)arg5;
- (id)_transitionRequestForDropAction:(unsigned long long)arg1;
- (_Bool)_areLayoutElementViewControllersCorrectlySizedForDropAction:(unsigned long long)arg1;
- (_Bool)_areLayoutElementViewControllersBlurred;
- (_Bool)_showResizeUI;
- (void)_updateCurrentDropActionForSession:(id)arg1;
- (void)_setFloatingApplicationStashed:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) id <UIDropSession> dropSession;
- (_Bool)_shouldComplete;
- (void)_didInterruptForTransitionRequest:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_updatePlatterSizeAndStateForSetDown:(_Bool)arg1;
- (void)_updateLayoutElementViewControllerFrames;
- (void)_updateLayoutElementViewControllerBlurringWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllerDarkeningWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllerForDropCompletion;
- (void)_handleDropSessionDidEnd:(id)arg1;
- (_Bool)_handleDropSessionDidUpdate:(id)arg1;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 sceneLayoutViewController:(id)arg2 dropSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

