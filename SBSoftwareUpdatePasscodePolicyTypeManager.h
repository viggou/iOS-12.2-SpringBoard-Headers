//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBDashBoardExternalLockProviding-Protocol.h"
#import "SBDashBoardViewControllerObserver-Protocol.h"

@class NSString, SBFMobileKeyBag, SBLockScreenManager;
@protocol BSInvalidatable;

@interface SBSoftwareUpdatePasscodePolicyTypeManager : NSObject <SBDashBoardExternalLockProviding, SBDashBoardViewControllerObserver>
{
    long long _softwareUpdatePasscodePolicyType;
    SBLockScreenManager *_lockScreenManager;
    SBFMobileKeyBag *_mobileKeyBag;
    id <BSInvalidatable> _passcodeRequiredAssertion;
    _Bool _passcodeAuthenticationSuccessPending;
}

- (void).cxx_destruct;
- (void)_authRequestCompleted:(id)arg1;
- (void)_clearPasscodeRequiredAssertion;
- (void)_createPasscodeRequiredAssertion;
- (long long)_effectiveSoftwareUpdatePasscodePolicyType;
- (void)dashBoardControllerDidDismissPasscodeLockView:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (_Bool)unlockFromSource:(int)arg1;
@property(readonly, nonatomic) _Bool showPasscode;
@property(readonly, nonatomic, getter=isLocked) _Bool locked;
- (void)noteAuthenticationSucceededWithPasscode:(id)arg1;
@property(nonatomic) long long softwareUpdatePasscodePolicyType;
- (void)dealloc;
- (id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

