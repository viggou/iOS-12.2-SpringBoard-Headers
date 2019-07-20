//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSTimer, SBDashBoardHomeAffordanceViewController, SBDashBoardTeachableMomentsContainerView;
@protocol SBDashBoardHomeAffordanceAnimationViewProviding, SBUIBiometricResource;

@interface SBDashBoardTeachableMomentsContainerViewController : SBDashBoardViewControllerBase <CAAnimationDelegate>
{
    _Bool _authenticated;
    _Bool _updateTextLabelOnNextAnimation;
    _Bool _controlCenterCoachingIsHidden;
    SBDashBoardHomeAffordanceViewController *_homeAffordanceViewController;
    unsigned long long _animationState;
    id <SBDashBoardHomeAffordanceAnimationViewProviding> _viewProvider;
    id <SBUIBiometricResource> _biometricResource;
    NSTimer *_fireOffAnimationTimer;
    NSMutableDictionary *_cachedLegibilityLabels;
}

+ (id)_animationKeyForKeyPath:(id)arg1 iteration:(unsigned long long)arg2 reset:(_Bool)arg3;
+ (void)_addRepeatedAnimationWithProvider:(CDUnknownBlockType)arg1 toLayer:(id)arg2;
@property(nonatomic) _Bool controlCenterCoachingIsHidden; // @synthesize controlCenterCoachingIsHidden=_controlCenterCoachingIsHidden;
@property(retain, nonatomic) NSMutableDictionary *cachedLegibilityLabels; // @synthesize cachedLegibilityLabels=_cachedLegibilityLabels;
@property(nonatomic) _Bool updateTextLabelOnNextAnimation; // @synthesize updateTextLabelOnNextAnimation=_updateTextLabelOnNextAnimation;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSTimer *fireOffAnimationTimer; // @synthesize fireOffAnimationTimer=_fireOffAnimationTimer;
@property(retain, nonatomic) id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(nonatomic) __weak id <SBDashBoardHomeAffordanceAnimationViewProviding> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) unsigned long long animationState; // @synthesize animationState=_animationState;
@property(readonly, nonatomic) SBDashBoardHomeAffordanceViewController *homeAffordanceViewController; // @synthesize homeAffordanceViewController=_homeAffordanceViewController;
- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged;
- (void)_updateText:(id)arg1;
- (void)_updateTextLabel;
- (void)_updateTextLabelIfNeeded;
- (unsigned long long)currentState;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_addControlCenterGlyphResetAnimation;
- (id)_controlCenterGlyphAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addControlCenterGlyphAnimation;
- (void)_addControlCenterGrabberResetAnimation;
- (id)_controlCenterGrabberAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_controlCenterGrabberPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addControlCenterGrabberAnimation;
- (void)_addTextResetAnimation;
- (id)_textAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_textPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addTextAnimation;
- (void)_addHomeAffordanceResetAnimation;
- (id)_homeAffordancePositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addHomeAffordanceAnimation;
- (void)_removeNormalAnimationsForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (_Bool)_shouldTeachAboutControlCenter;
- (void)_moveUpTimerForFiringAfterDelay:(double)arg1;
- (void)_cancelTimerAndResetAnimation;
- (void)_setupTimerWithDelay:(double)arg1;
- (void)_setupTimer;
- (void)_setControlCenterTutorsHidden:(_Bool)arg1;
@property(readonly, nonatomic) SBDashBoardTeachableMomentsContainerView *teachableMomentsContainerView;
- (void)_updateLegibilitySettings;
- (_Bool)handleEvent:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
