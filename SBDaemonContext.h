//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_source;

@interface SBDaemonContext : NSObject
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (void).cxx_destruct;
- (id)description;
- (void)removeRequestForKey:(id)arg1;
- (void)addRequest:(id)arg1 forKey:(id)arg2;
- (void)_handleCancelation;
- (id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2;
- (int)pid;
- (id)initWithPid:(int)arg1 queue:(id)arg2;

@end
