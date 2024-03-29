//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBFloatingApplicationRootViewControllerDelegate-Protocol.h"
#import "SBLayoutStateTransitionObserver-Protocol.h"
#import "SBLayoutStateTransitionSceneEntityFrameProvider-Protocol.h"

@class NSString, SBDeviceApplicationSceneHandle, SBFloatingApplicationRootViewController, SBLayoutStateTransitionContext, UIViewController;
@protocol SBFloatingApplicationControllerInternalDelegate;

@interface SBFloatingApplicationController : NSObject <SBFloatingApplicationRootViewControllerDelegate, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider>
{
    struct {
        unsigned int floatingApplicationController_needsVisibleWindow:1;
        unsigned int floatingApplicationControllerAcquireInterfaceOrientationLock:1;
        unsigned int floatingApplicationControllerRelinquishInterfaceOrientationLock:1;
    } _internalDelegateRespondsTo;
    SBFloatingApplicationRootViewController *_viewController;
    _Bool _ignoreLayoutStateTransitions;
    SBLayoutStateTransitionContext *_layoutStateTransitionContext;
    id <SBFloatingApplicationControllerInternalDelegate> _internalDelegate;
}

+ (_Bool)isFloatingApplicationSupported;
@property(nonatomic, setter=_setInternalDelegate:) __weak id <SBFloatingApplicationControllerInternalDelegate> _internalDelegate; // @synthesize _internalDelegate;
- (void).cxx_destruct;
- (void)_relinquishInterfaceOrientationLock;
- (void)_acquireInterfaceOrientationLock;
- (void)_updateWindowVisibility:(_Bool)arg1;
- (void)_updateModal:(_Bool)arg1;
- (void)_setIgnoreLayoutStateTransitions:(_Bool)arg1;
- (_Bool)_isIgnoringLayoutStateTransitions;
- (void)_setDarkenViewAlpha:(double)arg1;
- (double)_darkenViewAlpha;
- (id)_floatingApplicationRootViewController;
- (id)_deviceApplicationSceneViewController;
- (void)unstashActiveDeviceApplicationSceneHandleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stashActiveDeviceApplicationSceneHandleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)applicationSceneSettingsFrameForInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
@property(nonatomic, getter=_isDeviceApplicationSceneViewControllerHidden, setter=_setDeviceApplicationSceneViewControllerHidden:) _Bool _deviceApplicationSceneViewControllerHidden;
@property(readonly, nonatomic) UIViewController *_viewController;
@property(readonly, nonatomic, getter=isStashedWithoutFloatingConfigurationUpdate) _Bool stashedWithoutFloatingConfigurationUpdate;
@property(readonly, nonatomic, getter=isModal) _Bool modal;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *activeDeviceApplicationSceneHandle;
- (id)_deviceApplicationSceneEntityForFloatingApplicationGrabberTongue;
- (void)floatingApplicationRootViewControllerDidCompleteDeviceApplicationSceneHandleSuspendAnimation:(id)arg1;
- (void)floatingApplicationRootViewController:(id)arg1 darkenViewTappedForDeviceApplicationSceneHandle:(id)arg2;
- (_Bool)floatingApplicationRootViewController:(id)arg1 requiresGrabberTongueOutsideGrabberFreeRegionForDeviceApplicationSceneHandle:(id)arg2;
- (_Bool)floatingApplicationRootViewController:(id)arg1 requiresGrabberTongueForDeviceApplicationSceneHandle:(id)arg2;
- (_Bool)floatingApplicationRootViewController:(id)arg1 allowsPresentScreenEdgePanGestureRecognizerForDeviceApplicationSceneHandle:(id)arg2;
- (struct CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

