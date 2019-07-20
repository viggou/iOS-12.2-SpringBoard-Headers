//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBLockScreenViewControllerBase;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    SBLockScreenViewControllerBase *_lockScreenController;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    CDUnknownBlockType _alertActivationCompletion;
}

- (void).cxx_destruct;
- (void)_callAndClearAlertActivationCompletionIfNecessary;
- (void)_endTransition;
- (void)_didComplete;
- (void)_lockScreenDidActivate;
- (void)_setupAndActivate;
- (void)_activateLockScreen;
- (void)_begin;
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 lockScreenController:(id)arg2;

@end

