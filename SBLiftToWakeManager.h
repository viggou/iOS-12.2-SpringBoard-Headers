//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"
#import "SBDashBoardExternalEventHandling-Protocol.h"
#import "SBLiftToWakeObserver-Protocol.h"

@class NSString, SBBacklightController, SBIdleTimerGlobalCoordinator, SBLiftToWakeController, SBLockScreenManager, SBMainDisplayPolicyAggregator;

@interface SBLiftToWakeManager : NSObject <SBDashBoardExternalEventHandling, SBLiftToWakeObserver, BSInvalidatable>
{
    SBLiftToWakeController *_liftToWakeController;
    SBLockScreenManager *_accessor_lockScreenManager;
    SBBacklightController *_accessor_backlightController;
    SBMainDisplayPolicyAggregator *_accessor_policyAggregator;
    SBIdleTimerGlobalCoordinator *_accessor_idleTimerCoordinator;
    _Bool _gestureWokeScreen;
    _Bool _observing;
    _Bool _significantUserInteractionOccuredSinceWake;
    _Bool _invalidated;
}

@property(retain, nonatomic, getter=_liftToWakeController, setter=_setLiftToWakeController:) SBLiftToWakeController *liftToWakeController; // @synthesize liftToWakeController=_liftToWakeController;
@property(nonatomic, getter=_gestureWokeScreen, setter=_setGestureWokeScreen:) _Bool gestureWokeScreen; // @synthesize gestureWokeScreen=_gestureWokeScreen;
@property(retain, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) SBIdleTimerGlobalCoordinator *idleTimerCoordinator; // @synthesize idleTimerCoordinator=_accessor_idleTimerCoordinator;
@property(retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController; // @synthesize backlightController=_accessor_backlightController;
@property(retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_accessor_lockScreenManager;
@property(retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator; // @synthesize policyAggregator=_accessor_policyAggregator;
- (void).cxx_destruct;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;
- (void)invalidate;
- (_Bool)_isLockScreenMainPageVisible;
- (void)_ignoredTransition:(long long)arg1;
- (void)_backlightWillTurnOn:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithLiftToWakeController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

