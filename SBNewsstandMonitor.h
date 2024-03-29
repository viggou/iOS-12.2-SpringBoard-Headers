//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProcessManagerObserver-Protocol.h"
#import "FBProcessObserver-Protocol.h"

@class NSArray, NSString;

@interface SBNewsstandMonitor : NSObject <FBProcessManagerObserver, FBProcessObserver>
{
    NSArray *_blacklistedBundleIdentifiers;
}

+ (id)_blacklistedBundleIdentifiers;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)_handleBackgroundUpdateBlacklistChange;
- (void)_addObserverForBackgroundUpdateBlacklistChange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

