//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    struct SBNormalizedTransitionInterval _constrainedRange;
}

+ (id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;
@property(readonly, nonatomic) struct SBNormalizedTransitionInterval constrainedRange; // @synthesize constrainedRange=_constrainedRange;
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;
- (double)valueAtPercentage:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;

@end
