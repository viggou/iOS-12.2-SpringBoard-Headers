//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSystemServiceServerHardwareButtonDelegate-Protocol.h"

@class BKSApplicationStateMonitor, FBServiceClientAuthenticator, NSMutableOrderedSet, NSMutableSet, NSString;

@interface SBHardwareButtonService : NSObject <SBSystemServiceServerHardwareButtonDelegate>
{
    FBServiceClientAuthenticator *_serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientEventConsumerEntitlement;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableSet *_clientBundleIdentifiers;
    NSMutableSet *_foregroundBundleIdentifiers;
    NSMutableOrderedSet *_homeButtonClients;
    NSMutableOrderedSet *_lockButtonClients;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableOrderedSet *lockButtonClients; // @synthesize lockButtonClients=_lockButtonClients;
@property(retain, nonatomic) NSMutableOrderedSet *homeButtonClients; // @synthesize homeButtonClients=_homeButtonClients;
- (void).cxx_destruct;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 acquireAssertionOfType:(long long)arg3 forReason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5;
- (void)systemServiceServer:(id)arg1 clientDidDisconnect:(id)arg2;
- (void)_setSystemServiceClient:(id)arg1 buttonKind:(long long)arg2 eventMask:(unsigned long long)arg3 priority:(long long)arg4;
- (id)_applicationForClientInfo:(id)arg1;
- (_Bool)_isClientInfoPermittedToConsumeEvents:(id)arg1;
- (void)_removeClientInfo:(id)arg1 buttonKind:(long long)arg2;
- (void)_addClientInfo:(id)arg1 buttonKind:(long long)arg2;
- (_Bool)_sendEvent:(long long)arg1 buttonKind:(long long)arg2 withPriority:(long long)arg3;
- (void)_sendXPCMessageForEvent:(long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3 toClient:(id)arg4;
- (id)_clientsForButtonKind:(long long)arg1;
- (id)_mutableClientsForButtonKind:(long long)arg1;
- (void)_postConsumersChangedNotification;
- (id)_mutableClientsForButtonKind:(long long)arg1 createIfNecessary:(_Bool)arg2;
- (_Bool)_hasEligibleClientsInSet:(id)arg1;
- (_Bool)consumeLockButtonLongPressWithPriority:(long long)arg1;
- (_Bool)consumeLockButtonDoublePressUpWithPriority:(long long)arg1;
- (_Bool)consumeLockButtonSinglePressUpWithPriority:(long long)arg1;
- (_Bool)hasConsumersForLockButtonDoublePressUp;
- (_Bool)hasConsumersForLockButtonPresses;
- (_Bool)consumeHomeButtonLongPressWithPriority:(long long)arg1;
- (_Bool)consumeHomeButtonTriplePressUpWithPriority:(long long)arg1;
- (_Bool)consumeHomeButtonDoublePressDownWithPriority:(long long)arg1;
- (_Bool)consumeHomeButtonSinglePressUpWithPriority:(long long)arg1;
- (_Bool)hasConsumersForHomeButtonSinglePress;
- (_Bool)hasConsumersForHomeButtonPresses;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

