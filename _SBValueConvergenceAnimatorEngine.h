//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface _SBValueConvergenceAnimatorEngine : NSObject
{
    NSMutableSet *_animators;
    CADisplayLink *_displayLink;
    NSMutableSet *_finishedAnimators;
}

+ (id)sharedEngine;
- (void).cxx_destruct;
- (void)_onDisplayLink:(id)arg1;
- (void)_tearDownDisplayLink;
- (void)_ensureDisplayLink;
- (void)_updateDisplayLink;
- (_Bool)isRunningAnimator:(id)arg1;
- (void)stopAnimator:(id)arg1;
- (void)updateAnimator:(id)arg1;
- (void)startAnimator:(id)arg1;
- (id)init;

@end

