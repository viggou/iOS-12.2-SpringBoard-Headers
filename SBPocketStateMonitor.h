//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CMPocketStateDelegate-Protocol.h"

@class CMPocketStateManager, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface SBPocketStateMonitor : NSObject <CMPocketStateDelegate>
{
    CMPocketStateManager *_pocketStateManager;
    long long _pocketState;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) long long pocketState; // @synthesize pocketState=_pocketState;
- (void).cxx_destruct;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithCMPocketStateManager:(id)arg1 calloutQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

