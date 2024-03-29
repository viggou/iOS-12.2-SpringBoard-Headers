//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperationQueue, SBBootDefaults;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject
{
    _Bool _needsSync;
    SBBootDefaults *_queue_bootDefaults;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_queue_operationGroup;
    unsigned long long _queue_operationCount;
    _Bool _queue_isComplete;
    double _queue_startTime;
    NSMutableArray *_testOperations;
}

- (void).cxx_destruct;
- (id)_queue_migrateSoundPreferencesOperation;
- (void)_fetchDomains:(id)arg1 fromIndex:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_queue_fetchCloudDefaultsOperation;
- (id)_queue_fetchMDMProfilesOperation;
- (id)_queue_fetchCloudAccountOperation;
- (void)_queue_startFetchingCloudCriticalData;
- (_Bool)_queue_isComplete;
- (void)_queue_addOperation:(id)arg1;
- (void)_addTestOperation:(id)arg1;
- (unsigned long long)_pendingOperationCount;
- (_Bool)waitForSynchronizeToCompleteWithTimeout:(double)arg1;
- (void)startSynchronize;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
- (id)initWithDefaults:(id)arg1 userManager:(id)arg2;
- (id)init;

@end

