//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBViewMorphAnimatorObserver-Protocol.h"

@class BSTimer, NSHashTable, NSString, NSUUID, SBHomeGestureSettings, SBViewMorphAnimatorContentClippingView, UIView;
@protocol SBViewMorphAnimatorDataSource;

@interface SBViewMorphAnimator : NSObject <SBViewMorphAnimatorObserver>
{
    _Bool _automaticallyStartSourceAnimations;
    _Bool _automaticallyStartTargetAnimations;
    _Bool _invalidated;
    _Bool _sourceScaleAndPositionEnded;
    NSUUID *_uuid;
    UIView *_sourceView;
    UIView *_sourceContentView;
    UIView *_targetView;
    UIView *_targetContentView;
    id <SBViewMorphAnimatorDataSource> _targetDataSource;
    double _sourceFinalScale;
    double _targetCornerRadius;
    NSHashTable *_observers;
    long long _startedSourceAnimations;
    long long _completedSourceAnimations;
    long long _startedTargetAnimations;
    long long _completedTargetAnimations;
    CDUnknownBlockType _sourceAllAnimationsCompletionBlock;
    BSTimer *_animationTimeoutTimer;
    BSTimer *_sourceAnimationsCompletionContinueBlockTimeoutTimer;
    SBHomeGestureSettings *_homeGestureSettings;
    SBViewMorphAnimatorContentClippingView *_sourceContentClippingView;
    SBViewMorphAnimatorContentClippingView *_targetContentClippingView;
    struct CGPoint _sourceFinalCenter;
    struct CGRect _sourceContentFrame;
    struct CGRect _targetSourcePinningFrame;
    struct CGRect _targetFinalFrame;
    struct CGRect _sourceContentClippingViewInitialFrame;
    struct CGRect _targetContentClippingViewInitialFrame;
}

@property(nonatomic) struct CGRect targetContentClippingViewInitialFrame; // @synthesize targetContentClippingViewInitialFrame=_targetContentClippingViewInitialFrame;
@property(retain, nonatomic) SBViewMorphAnimatorContentClippingView *targetContentClippingView; // @synthesize targetContentClippingView=_targetContentClippingView;
@property(nonatomic) struct CGRect sourceContentClippingViewInitialFrame; // @synthesize sourceContentClippingViewInitialFrame=_sourceContentClippingViewInitialFrame;
@property(retain, nonatomic) SBViewMorphAnimatorContentClippingView *sourceContentClippingView; // @synthesize sourceContentClippingView=_sourceContentClippingView;
@property(nonatomic) __weak SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(retain, nonatomic) BSTimer *sourceAnimationsCompletionContinueBlockTimeoutTimer; // @synthesize sourceAnimationsCompletionContinueBlockTimeoutTimer=_sourceAnimationsCompletionContinueBlockTimeoutTimer;
@property(retain, nonatomic) BSTimer *animationTimeoutTimer; // @synthesize animationTimeoutTimer=_animationTimeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType sourceAllAnimationsCompletionBlock; // @synthesize sourceAllAnimationsCompletionBlock=_sourceAllAnimationsCompletionBlock;
@property(nonatomic) _Bool sourceScaleAndPositionEnded; // @synthesize sourceScaleAndPositionEnded=_sourceScaleAndPositionEnded;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) long long completedTargetAnimations; // @synthesize completedTargetAnimations=_completedTargetAnimations;
@property(nonatomic) long long startedTargetAnimations; // @synthesize startedTargetAnimations=_startedTargetAnimations;
@property(nonatomic) long long completedSourceAnimations; // @synthesize completedSourceAnimations=_completedSourceAnimations;
@property(nonatomic) long long startedSourceAnimations; // @synthesize startedSourceAnimations=_startedSourceAnimations;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) struct CGRect targetFinalFrame; // @synthesize targetFinalFrame=_targetFinalFrame;
@property(readonly, nonatomic) struct CGRect targetSourcePinningFrame; // @synthesize targetSourcePinningFrame=_targetSourcePinningFrame;
@property(readonly, nonatomic) double targetCornerRadius; // @synthesize targetCornerRadius=_targetCornerRadius;
@property(readonly, nonatomic) struct CGRect sourceContentFrame; // @synthesize sourceContentFrame=_sourceContentFrame;
@property(readonly, nonatomic) double sourceFinalScale; // @synthesize sourceFinalScale=_sourceFinalScale;
@property(readonly, nonatomic) struct CGPoint sourceFinalCenter; // @synthesize sourceFinalCenter=_sourceFinalCenter;
@property(nonatomic) _Bool automaticallyStartTargetAnimations; // @synthesize automaticallyStartTargetAnimations=_automaticallyStartTargetAnimations;
@property(nonatomic) _Bool automaticallyStartSourceAnimations; // @synthesize automaticallyStartSourceAnimations=_automaticallyStartSourceAnimations;
@property(nonatomic) __weak id <SBViewMorphAnimatorDataSource> targetDataSource; // @synthesize targetDataSource=_targetDataSource;
@property(nonatomic) __weak UIView *targetContentView; // @synthesize targetContentView=_targetContentView;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) __weak UIView *sourceContentView; // @synthesize sourceContentView=_sourceContentView;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_handleHandoffTimeout;
- (void)_continueSourceAnimationsCompletionPendingBlock;
- (void)_checkAnimationsDependencies:(CDUnknownBlockType)arg1;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)willStartTargetAnimations:(unsigned long long)arg1;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)willStartSourceAnimations:(unsigned long long)arg1;
- (_Bool)startTargetAnimations:(unsigned long long)arg1;
- (_Bool)startSourceAnimations:(unsigned long long)arg1;
- (struct CGRect)_targetInitialClippingBoundsWithSourceContentFrame:(struct CGRect)arg1 sourceFinalScale:(double)arg2 targetViewBounds:(struct CGRect)arg3;
- (struct CGRect)_targetSourcePinningFrameWithSourceContentFrame:(struct CGRect)arg1 targetFinalFrame:(struct CGRect)arg2;
- (struct CGPoint)_source:(id)arg1 finalCenterWithFinalScale:(double)arg2 contentFrame:(struct CGRect)arg3 targetFinalFrame:(struct CGRect)arg4;
- (double)_sourceFinalScaleWithContentFrame:(struct CGRect)arg1 targetFinalFrame:(struct CGRect)arg2;
- (struct CGRect)_sourceContentFrameForSourceView:(id)arg1 withTargetDataSource:(id)arg2;
- (void)_noteAnimatorWasInterrupted;
- (void)_noteAnimatorWasCanceled;
- (void)noteTargetAnimationsDidEnd:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)noteTargetAnimationsWillStart:(unsigned long long)arg1;
- (void)noteSourceAnimationsDidEnd:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)noteSourceAnimationsWillStart:(unsigned long long)arg1;
- (void)addObserver:(id)arg1;
- (void)_updateParameters;
- (_Bool)preflightCheck;
- (void)_removeSourceClippingView;
- (void)_resetAllAnimations;
- (void)interrupt:(CDUnknownBlockType)arg1;
- (void)cancel:(CDUnknownBlockType)arg1;
- (void)_reset;
- (void)dealloc;
- (id)init;
- (id)initWithUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

