//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBApplicationServerShortcutDelegate-Protocol.h"

@class FBServiceClientAuthenticator, NSString;

@interface SBApplicationShortcutService : NSObject <SBApplicationServerShortcutDelegate>
{
    FBServiceClientAuthenticator *_serviceClientFullAccessEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientCustomImageEntitlementAuthenticator;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applicationServer:(id)arg1 client:(id)arg2 setDynamicApplicationShortcutItems:(id)arg3 forBundleIdentifier:(id)arg4;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)_sanitizeApplicationShortcutItems:(id)arg1 withEntitlements:(unsigned long long)arg2;
- (void)_authenticateClient:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_checkEntitlementsForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

