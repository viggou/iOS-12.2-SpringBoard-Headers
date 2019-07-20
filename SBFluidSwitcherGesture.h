//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSString, SBFluidSwitcherGestureWorkspaceTransaction, UIGestureRecognizer;

@interface SBFluidSwitcherGesture : NSObject <BSDescriptionProviding>
{
    long long _type;
    long long _state;
    SBFluidSwitcherGestureWorkspaceTransaction *_gestureTransaction;
}

@property(readonly, nonatomic) SBFluidSwitcherGestureWorkspaceTransaction *gestureTransaction; // @synthesize gestureTransaction=_gestureTransaction;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_setState:(long long)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
- (id)initWithType:(long long)arg1 gestureTransaction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
