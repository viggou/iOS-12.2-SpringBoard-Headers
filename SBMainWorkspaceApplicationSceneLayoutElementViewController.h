//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBAppContainerViewController.h"

#import "SBDeviceApplicationSceneHandleObserver-Protocol.h"
#import "SBMedusaDecoratedDeviceApplicationSceneViewControlling-Protocol.h"

@class BSCornerRadiusConfiguration, NSMutableArray, NSMutableSet, NSString, SBApplicationBlurContentView, SBHomeGrabberView, SBSceneHandle, UIDropInteraction, UIView;
@protocol SBScenePlaceholderContentContext;

@interface SBMainWorkspaceApplicationSceneLayoutElementViewController : SBAppContainerViewController <SBDeviceApplicationSceneHandleObserver, SBMedusaDecoratedDeviceApplicationSceneViewControlling>
{
    long long _statusBarAreaStyle;
    double _statusBarAreaAlpha;
    _Bool _nubViewHighlighted;
    NSMutableArray *_gestureRecognizers;
    NSMutableSet *_maskDisplayCornersReasons;
    _Bool _clipsToBounds;
    double _shadowOpacity;
    double _shadowOffset;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    double _darkenViewAlpha;
    UIDropInteraction *_dropInteraction;
}

@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(nonatomic) double darkenViewAlpha; // @synthesize darkenViewAlpha=_darkenViewAlpha;
@property(nonatomic) _Bool clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property(retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // @synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration;
@property(nonatomic) double shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
- (void).cxx_destruct;
- (id)_deviceApplicationSceneViewController:(id)arg1;
- (id)_deviceApplicationSceneViewController;
- (id)_medusaDecoratedVC:(id)arg1;
- (id)_medusaDecoratedVC;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
@property(readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property(nonatomic, getter=isNubViewHighlighted) _Bool nubViewHighlighted;
@property(nonatomic) double statusBarAreaAlpha;
- (void)cleanupAnimationContext:(id)arg1;
- (void)executeAnimationContext:(id)arg1;
- (id)prepareAnimationToStatusBarAreaStyle:(long long)arg1;
@property(nonatomic) long long statusBarAreaStyle;
- (void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(_Bool)arg2;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)_configureViewController:(id)arg1;
- (id)_newApplicationSceneViewControllerForSceneHandle:(id)arg1;
- (id)_applicationSceneViewController;
- (_Bool)_shouldDisplayLayoutElementBecomeActive;
- (unsigned long long)supportedContentInterfaceOrientations;
- (void)didEndTransitionToVisible:(_Bool)arg1;
- (void)willBeginTransitionToVisible:(_Bool)arg1;
- (void)prepareForReuse;
@property(nonatomic) _Bool suppressesHomeGrabberView;
- (_Bool)nubViewContainsPoint:(struct CGPoint)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)setMaskDisplayCorners:(_Bool)arg1 forReason:(id)arg2;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic, setter=_setBlurContentView:) SBApplicationBlurContentView *_blurContentView;
@property(readonly, nonatomic, getter=isBlurred) _Bool blurred;
- (void)blurApplicationContent:(_Bool)arg1 withAnimationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDisplayIdentity:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) long long displayMode;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle;
@property(readonly) Class superclass;

@end

