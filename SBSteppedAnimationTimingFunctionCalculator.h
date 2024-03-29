//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SBSteppedAnimationTimingFunctionCalculator : NSObject
{
    NSMutableDictionary *_functionsByName;
    double _percentComplete;
}

@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void).cxx_destruct;
- (double)valueForFunctionWithName:(id)arg1;
- (id)timingFunctionNames;
- (void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2;
- (void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4;
- (void)addTimingFunction:(id)arg1 withName:(id)arg2;
- (id)init;

@end

