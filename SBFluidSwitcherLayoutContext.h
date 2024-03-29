//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBMainDisplayWorkspaceAppInteractionEventSourceObserving-Protocol.h"

@class NSDate, NSString, SBAppLayout, SBFluidSwitcherGesture, SBHomeGestureSettings, SBMainDisplayLayoutState, SBWorkspaceApplicationSceneTransitionContext;

@interface SBFluidSwitcherLayoutContext : NSObject <BSDescriptionProviding, SBMainDisplayWorkspaceAppInteractionEventSourceObserving>
{
    _Bool _hasUserInteractedWithActiveApplication;
    long long _layoutPhase;
    SBMainDisplayLayoutState *_previousLayoutState;
    SBFluidSwitcherGesture *_activeGesture;
    long long _previousGestureType;
    SBWorkspaceApplicationSceneTransitionContext *_activeTransitionContext;
    unsigned long long _generationCount;
    SBAppLayout *_transitioningFromAppLayout;
    SBAppLayout *_transitioningToAppLayout;
    SBMainDisplayLayoutState *_currentLayoutState;
    long long _previousInterfaceOrientation;
    SBAppLayout *_currentAppLayout;
    NSDate *_lastTransitionCompletionDate;
    SBHomeGestureSettings *_homeGestureSettings;
}

@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(nonatomic) _Bool hasUserInteractedWithActiveApplication; // @synthesize hasUserInteractedWithActiveApplication=_hasUserInteractedWithActiveApplication;
@property(retain, nonatomic) NSDate *lastTransitionCompletionDate; // @synthesize lastTransitionCompletionDate=_lastTransitionCompletionDate;
@property(retain, nonatomic) SBAppLayout *currentAppLayout; // @synthesize currentAppLayout=_currentAppLayout;
@property(nonatomic) long long previousInterfaceOrientation; // @synthesize previousInterfaceOrientation=_previousInterfaceOrientation;
@property(retain, nonatomic) SBMainDisplayLayoutState *currentLayoutState; // @synthesize currentLayoutState=_currentLayoutState;
@property(retain, nonatomic) SBAppLayout *transitioningToAppLayout; // @synthesize transitioningToAppLayout=_transitioningToAppLayout;
@property(retain, nonatomic) SBAppLayout *transitioningFromAppLayout; // @synthesize transitioningFromAppLayout=_transitioningFromAppLayout;
@property(readonly, nonatomic) unsigned long long generationCount; // @synthesize generationCount=_generationCount;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *activeTransitionContext; // @synthesize activeTransitionContext=_activeTransitionContext;
@property(nonatomic) long long previousGestureType; // @synthesize previousGestureType=_previousGestureType;
@property(retain, nonatomic) SBFluidSwitcherGesture *activeGesture; // @synthesize activeGesture=_activeGesture;
@property(retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
@property(readonly, nonatomic) long long layoutPhase; // @synthesize layoutPhase=_layoutPhase;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (void)_cacheAppLayouts;
- (_Bool)_shouldUpdateSwitcherModelBasedOnTimeOrUserInteraction;
- (_Bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 currentAppLayouts:(id)arg3 transitionCompleted:(_Bool)arg4;
@property(readonly, nonatomic) unsigned long long supportedOrientationsForGesture;
@property(readonly, nonatomic) double secondsSinceLastTransitionCompletion;
- (void)updateLayoutStateWithContext:(id)arg1 prepareIfNeeded:(CDUnknownBlockType)arg2 transition:(CDUnknownBlockType)arg3;
- (void)updateLayoutStateWithContext:(id)arg1;
@property(readonly, nonatomic) SBAppLayout *appLayout;
- (void)incrementGenerationCount;
@property(readonly, nonatomic) SBMainDisplayLayoutState *transitioningToLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *transitioningFromLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *layoutState;
- (id)initWithLayoutState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

