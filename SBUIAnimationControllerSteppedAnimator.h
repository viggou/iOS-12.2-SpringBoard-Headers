//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUIAnimationControllerAnimator.h"

#import "SBViewControllerInteractiveAnimatedTransitioning-Protocol.h"

@class NSString, SBAnimationStepper;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning>
{
    SBAnimationStepper *_stepper;
}

@property(readonly, nonatomic) SBAnimationStepper *stepper; // @synthesize stepper=_stepper;
- (void).cxx_destruct;
- (double)percentComplete;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (id)initWithAnimationController:(id)arg1 stepper:(id)arg2;
- (id)initWithAnimationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
