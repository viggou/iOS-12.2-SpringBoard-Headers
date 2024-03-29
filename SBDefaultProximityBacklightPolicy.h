//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBProximityBacklightPolicy-Protocol.h"

@class NSString, SBBacklightController;

@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy>
{
    SBBacklightController *_backlightController;
    _Bool _scheduled;
}

- (void).cxx_destruct;
- (void)_doBacklightFactorChange;
- (void)_backlightWillUndim:(id)arg1;
- (void)_restoreBacklightFactor;
- (void)_cancelScheduledBacklightFactorToZero;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(_Bool)arg2;
- (void)dealloc;
- (id)initWithBacklightController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

