//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProcessObserver-Protocol.h"
#import "SBLockScreenPluginAgent-Protocol.h"
#import "SBLockScreenPluginController-Protocol.h"

@class BSPluginBundle, FBProcess, NSMutableArray, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBLockOverlayContext, SBLockScreenPluginAction, SBLockScreenPluginAppearanceContext, UIViewController, _UILegibilitySettings;
@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginController, SBLockScreenPluginDelegate, SBLockScreenPluginViewController;

@interface SBLockScreenPlugin : NSObject <FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController>
{
    BSPluginBundle *_bundle;
    NSString *_bundleName;
    FBProcess *_process;
    id <SBLockScreenPluginController> _controller;
    id <SBLockScreenPluginAgent> _agent;
    SBLockScreenPluginAppearanceContext *_appearance;
    NSMutableArray *_lifecycleObservers;
    SBLockOverlayContext *_overlay;
    CDUnknownBlockType _auxiliaryActivationAnimationBlock;
    CDUnknownBlockType _auxiliaryDeactivationAnimationBlock;
    id <SBLockScreenPluginDelegate> _delegate;
}

+ (id)pluginWithName:(id)arg1 activationContext:(id)arg2;
+ (id)_pluginBundleForPluginWithName:(id)arg1;
@property(nonatomic) __weak id <SBLockScreenPluginAgent> pluginAgent; // @synthesize pluginAgent=_agent;
@property(copy, nonatomic) CDUnknownBlockType auxiliaryDeactivationAnimationBlock; // @synthesize auxiliaryDeactivationAnimationBlock=_auxiliaryDeactivationAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType auxiliaryActivationAnimationBlock; // @synthesize auxiliaryActivationAnimationBlock=_auxiliaryActivationAnimationBlock;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_bundleName;
@property(retain, nonatomic) SBLockOverlayContext *overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) id <SBLockScreenPluginController> controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <SBLockScreenPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)processDidExit:(id)arg1;
- (_Bool)pluginController:(id)arg1 sendAction:(id)arg2;
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;
- (void)deactivatePluginController:(id)arg1;
- (void)activatePluginController:(id)arg1;
- (void)enumerateLifecycleObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeLifecycleObserver:(id)arg1;
- (void)addLifecycleObserver:(id)arg1;
- (_Bool)pluginHandleEvent:(long long)arg1;
@property(readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
- (void)pluginDidDeactivateWithContext:(id)arg1;
- (void)pluginWillActivateWithContext:(id)arg1;
@property(readonly, nonatomic) id <SBLockScreenPluginAppearance> pluginAppearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property(readonly, nonatomic) long long pluginPriority;
- (void)_updateAppearance:(id)arg1;
- (_Bool)handleDashBoardEvent:(id)arg1;
@property(readonly, nonatomic) SBDashBoardBehavior *dashBoardBehavior;
@property(readonly, nonatomic) SBDashBoardAppearance *dashBoardAppearance;
- (_Bool)isCapabilityRestricted:(unsigned long long)arg1;
- (id)overrideForElement:(long long)arg1;
- (_Bool)isElementHidden:(long long)arg1;
@property(readonly, nonatomic) SBLockScreenPluginAction *unlockAction;
@property(readonly, nonatomic) SBLockScreenPluginAppearanceContext *appearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *viewController;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 activationContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly) Class superclass;

@end

