//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBHomeButtonShowPasscodeRecognizer-Protocol.h"

@class BSTimer, NSString;
@protocol SBHomeButtonShowPasscodeRecognizerDelegate;

@interface SBDashBoardHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer>
{
    NSString *_simplePublicDescription;
    id <SBHomeButtonShowPasscodeRecognizerDelegate> _delegate;
    unsigned long long _state;
    _Bool _fingerWasOnInitially;
    _Bool _fingerHasLifted;
    BSTimer *_minimumTimer;
    NSString *_terminalStateReasoning;
}

@property(nonatomic) __weak id <SBHomeButtonShowPasscodeRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_minimumTimerFired;
- (void)_invalidateMinimumTimer;
- (void)_simulateTimerFiring;
- (unsigned long long)_state;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_switchedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)_reallySetState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)noteAuthenticated:(_Bool)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFingerOn:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

