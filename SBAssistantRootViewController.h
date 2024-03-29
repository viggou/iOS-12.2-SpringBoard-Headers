//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SBFluidGestureDismissable-Protocol.h"

@class NSString, SBFluidDismissalState, SBHomeGrabberSettings, SBHomeGrabberView, SBUIKeyboardHomeAffordanceAssertion, UIScreen, UIView;
@protocol SBUIPluginViewControllerInterface;

@interface SBAssistantRootViewController : UIViewController <SBFluidGestureDismissable>
{
    UIViewController<SBUIPluginViewControllerInterface> *_assistantViewController;
    UIView *_contentView;
    UIView *_clippingView;
    SBFluidDismissalState *_fluidDismissalState;
    UIScreen *_screen;
    SBUIKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBHomeGrabberSettings *_grabberSettings;
    _Bool _keyboardPresented;
    _Bool _keyboardStashed;
    _Bool _ownsHomeGesture;
    SBHomeGrabberView *_homeAffordanceView;
}

@property(retain, nonatomic) SBHomeGrabberView *homeAffordanceView; // @synthesize homeAffordanceView=_homeAffordanceView;
@property(nonatomic) _Bool ownsHomeGesture; // @synthesize ownsHomeGesture=_ownsHomeGesture;
@property(retain, nonatomic) UIViewController<SBUIPluginViewControllerInterface> *assistantController; // @synthesize assistantController=_assistantViewController;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_updateKeyboardForHomeGesture;
- (void)_updateHomeAffordance;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)viewWillLayoutSubviews;
- (void)loadView;
@property(readonly, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
- (id)initWithScreen:(id)arg1;
@property(retain, nonatomic) SBFluidDismissalState *fluidDismissalState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

