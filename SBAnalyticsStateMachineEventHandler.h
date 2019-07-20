//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBAnalyticsBackendEventHandling-Protocol.h"

@class NSMutableArray, NSString;

@interface SBAnalyticsStateMachineEventHandler : NSObject <SBAnalyticsBackendEventHandling>
{
    unsigned long long _currentState;
    NSMutableArray *_edges;
}

@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (void)addEdge:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
