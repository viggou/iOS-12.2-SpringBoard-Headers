//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBUIProudLockContainerViewControllerDelegate-Protocol.h"
#import "SBUIProudLockContainerViewControllerLockStatusProvider-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSString, SBLockScreenPearlSettings, SBUIProudLockContainerViewController, UIView;
@protocol BSInvalidatable, SBUIBiometricResource;

@interface SBDashBoardProudLockViewController : SBDashBoardViewControllerBase <_UISettingsKeyObserver, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerDelegate>
{
    SBLockScreenPearlSettings *_pearlSettings;
    id <BSInvalidatable> _faceDetectWantedAssertion;
    _Bool _suspendLockUpdates;
    SBUIProudLockContainerViewController *_proudLockContainerViewController;
    id <SBUIBiometricResource> _biometricResource;
}

@property(nonatomic) _Bool suspendLockUpdates; // @synthesize suspendLockUpdates=_suspendLockUpdates;
@property(retain, nonatomic) id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(retain, nonatomic) SBUIProudLockContainerViewController *proudLockContainerViewController; // @synthesize proudLockContainerViewController=_proudLockContainerViewController;
- (void).cxx_destruct;
- (void)_updateProudLockViewControllerConfiguration;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_clearFaceDetectAssertion;
- (void)_createFaceDetectAssertion;
- (void)aggregateAppearance:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)proudLockContainerViewController:(id)arg1 guidanceTextVisibilityDidChangeAnimated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasPasscodeSet;
@property(readonly, nonatomic) _Bool isBiometricLockedOut;
@property(readonly, nonatomic) UIView *cameraCoveredView;
@property(readonly, nonatomic) UIView *proudLockView;
- (void)updateLockForBiometricMatchFailure;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
