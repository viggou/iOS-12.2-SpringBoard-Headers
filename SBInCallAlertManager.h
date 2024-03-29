//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBRemoteAlertAdapterDelegate-Protocol.h"

@class NSMutableSet, NSString, SBFloatingDockBehaviorAssertion, SBFloatingDockWindowLevelAssertion, SBRemoteAlertAdapter;

@interface SBInCallAlertManager : NSObject <SBRemoteAlertAdapterDelegate>
{
    SBRemoteAlertAdapter *_currentInCallAlert;
    NSMutableSet *_outstandingLockButtonActionUUIDs;
    _Bool _floatingDockStateWasRestored;
    SBFloatingDockBehaviorAssertion *_inCallServiceFloatingDockAssertion;
    SBFloatingDockWindowLevelAssertion *_inCallServiceFloatingDockWindowLevelAssertion;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SBRemoteAlertAdapter *currentInCallAlert; // @synthesize currentInCallAlert=_currentInCallAlert;
- (void).cxx_destruct;
- (void)_noteAction:(id)arg1 completedWithUnHandledEvents:(unsigned long long)arg2;
- (id)_createActivationActionForEvent:(unsigned long long)arg1;
- (id)_createActivationContextForUILockActivation;
- (void)_activateWithOptions:(id)arg1 context:(id)arg2;
- (void)remoteAlertDidTerminate:(id)arg1;
- (_Bool)remoteAlertHandleLockButtonPress:(id)arg1;
- (void)switcherDidEndContainingInCallUI;
- (void)switcherWillEndContainingInCallUI;
- (void)switcherDidBeginContainingInCallUI;
- (void)switcherWillBeginContainingInCallUI;
- (void)maybeLockUIAfterCallEnded;
- (_Bool)handleLockButtonPressed:(_Bool)arg1;
- (void)reactivateAlertForActivityContinuationWithActivityIdentifier:(id)arg1;
- (void)reactivateAlertForLockButtonPress;
- (void)reactivateAlertFromLockScreenWithUIUnlock:(_Bool)arg1 disableAnimatedTransition:(_Bool)arg2;
- (void)reactivateAlertFromStatusBarTap;
- (void)reactivateAlert;
- (_Bool)isEndingCallForLockButtonPress;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

