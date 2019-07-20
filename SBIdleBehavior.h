//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBIdleTimerBehaviorProviding-Protocol.h"

@class NSString;

@interface SBIdleBehavior : NSObject <SBIdleTimerBehaviorProviding>
{
    long long _duration;
    long long _warnMode;
}

@property(readonly, nonatomic) long long warnMode; // @synthesize warnMode=_warnMode;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
- (id)initWithDuration:(long long)arg1 warnMode:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
