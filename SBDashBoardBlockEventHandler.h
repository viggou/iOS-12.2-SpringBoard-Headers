//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBDashBoardEventHandling-Protocol.h"

@class NSString;

@interface SBDashBoardBlockEventHandler : NSObject <SBDashBoardEventHandling>
{
    CDUnknownBlockType _buttonPredicate;
    CDUnknownBlockType _eventBlock;
}

- (void).cxx_destruct;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (id)initWithButtonPredicate:(CDUnknownBlockType)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

