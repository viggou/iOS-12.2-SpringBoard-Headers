//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSystemServiceServerTestAutomationDelegate-Protocol.h"

@class FBServiceClientAuthenticator, NSHashTable, NSString;
@protocol BSInvalidatable;

@interface SBTestAutomationService : NSObject <SBSystemServiceServerTestAutomationDelegate>
{
    FBServiceClientAuthenticator *_clientAuthenticator;
    id <BSInvalidatable> _idleTimerAssertion;
    NSHashTable *_inFlightAnimationTransactions;
}

- (void).cxx_destruct;
- (_Bool)_authenticateClient:(id)arg1;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setApplicationBundleIdentifier:(id)arg3 blockedForScreenTime:(_Bool)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 resetToHomeScreenAnimated:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setOrientationLockEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setIdleTimerEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setAlertsEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 suspendAllDisplaysForClient:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

