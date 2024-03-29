//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSMutableArray, NSString, SBHomeGestureParticipant;
@protocol BSInvalidatable;

@interface SBHomeGestureArbiter : NSObject <BSDescriptionProviding>
{
    id <BSInvalidatable> _stateCaptureHandle;
    NSMutableArray *_participants;
    SBHomeGestureParticipant *_owningParticipant;
    SBHomeGestureParticipant *_hardwareButtonServiceParticipant;
}

@property(retain, nonatomic) SBHomeGestureParticipant *hardwareButtonServiceParticipant; // @synthesize hardwareButtonServiceParticipant=_hardwareButtonServiceParticipant;
@property(retain, nonatomic) SBHomeGestureParticipant *owningParticipant; // @synthesize owningParticipant=_owningParticipant;
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_updateHardwareButtonServiceParticipant;
- (void)_updateOwningParticipant;
- (void)_unregisterParticipant:(id)arg1;
- (void)_registerParticipant:(id)arg1;
- (id)participantWithIdentifier:(long long)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

