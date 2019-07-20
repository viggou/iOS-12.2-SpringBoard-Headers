//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBViewMorphAnimator;

@protocol SBViewMorphAnimatorObserver <NSObject>

@optional
- (void)animatorWasInterrupted:(SBViewMorphAnimator *)arg1;
- (void)animatorWasCanceled:(SBViewMorphAnimator *)arg1;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(void (^)(void))arg3;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(void (^)(void))arg3;
- (void)willStartTargetAnimations:(unsigned long long)arg1;
- (void)willStartSourceAnimations:(unsigned long long)arg1;
@end

