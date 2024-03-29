//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBIconAnimator.h"

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator
{
    UIView *_crossfadeView;
    _Bool _addedToWindow;
    _Bool _fadesReferenceView;
}

@property(nonatomic) _Bool fadesReferenceView; // @synthesize fadesReferenceView=_fadesReferenceView;
- (void).cxx_destruct;
- (void)_applyAlphaForFraction:(double)arg1;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (id)initWithAnimationContainer:(id)arg1 crossfadeView:(id)arg2;

@end

