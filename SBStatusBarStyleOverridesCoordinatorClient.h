//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SBStatusBarStyleOverridesCoordinatorClient : NSObject
{
    int _registeredOverrides;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_registeredOverridesQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *registeredOverridesQueue; // @synthesize registeredOverridesQueue=_registeredOverridesQueue;
@property(nonatomic) int registeredOverrides; // @synthesize registeredOverrides=_registeredOverrides;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)acquireAssertionAndDeliverTapContextToClient:(id)arg1;
- (id)initWithConnection:(id)arg1 andStyleOverrides:(int)arg2;

@end

