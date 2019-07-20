//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBLockScreenViewControllerBase.h"

#import "SBLockScreenBatteryChargingViewControllerDelegate-Protocol.h"
#import "SBLockScreenPluginManagerDelegate-Protocol.h"
#import "SBLoginAppSceneHosterDelegate-Protocol.h"
#import "SBWallpaperObserver-Protocol.h"

@class NSHashTable, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBLockScreenBatteryChargingViewController, SBLockScreenPluginManager, SBLockScreenTemperatureWarningViewController, SBLoginAppContainerPluginWrapperViewController, SBWallpaperController;
@protocol SBLoginAppSceneHoster;

@interface SBLoginAppContainerViewController : SBLockScreenViewControllerBase <SBLockScreenBatteryChargingViewControllerDelegate, SBLoginAppSceneHosterDelegate, SBWallpaperObserver, SBLockScreenPluginManagerDelegate>
{
    id <SBLoginAppSceneHoster> _sceneHoster;
    SBLockScreenBatteryChargingViewController *_batteryChargingViewController;
    SBLockScreenTemperatureWarningViewController *_thermalWarningViewController;
    SBLoginAppContainerPluginWrapperViewController *_pluginWrapperViewController;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_showStatusBarReasons;
    long long _idleTimerMode;
    SBLockScreenPluginManager *_pluginManager;
    SBWallpaperController *_wallpaperController;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (_Bool)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
- (void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
- (void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
- (void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
- (void)_updateLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)_showOrHideThermalTrapUIAnimated:(_Bool)arg1;
- (void)chargingViewControllerFadedOutContent:(id)arg1;
- (void)_cleanupBatteryChargingViewWithAnimationDuration:(double)arg1;
- (void)_fadeViewsForChargingViewVisible:(_Bool)arg1;
- (void)_updateBatteryChargingViewAnimated:(_Bool)arg1;
- (void)_removeBatteryChargingView;
- (void)_addBatteryChargingView;
- (void)_handleBacklightFadeEnded;
- (void)sceneUpdatedRotationMode:(long long)arg1;
- (void)sceneUpdatedStatusBarUserName:(id)arg1;
- (void)sceneUpdatedIdleTimerMode:(long long)arg1;
- (void)sceneDeactivatedWithError:(id)arg1;
- (void)_setupLoginScene;
- (void)_reallyRelinquishStatusBarAssertion;
- (void)_reallyAcquireStatusBarAssertionIfNecessaryInitiallyVisible:(_Bool)arg1;
- (void)_hideStatusBarForReason:(id)arg1;
- (void)_showStatusBarForReason:(id)arg1;
- (id)_statusBarSettingsAssertion;
- (id)_hostedSceneIdentifier;
- (id)_hostedAppView;
- (id)_hostedAppBundleID;
- (void)_killLoginApp;
- (void)_setupLoginAppHosting;
- (_Bool)suppressesControlCenter;
- (void)prepareForUIUnlock;
- (void)prepareForUILock;
- (_Bool)suppressesScreenshots;
- (id)_displayLayoutElementIdentifier;
- (_Bool)shouldDisableALS;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleHomeButtonDoublePress;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (_Bool)wantsLockScreenIdleTimer;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)noteDeviceBlockedStatusUpdated;
- (void)noteExitingLostMode;
- (void)prepareToEnterLostMode;
- (_Bool)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (_Bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (_Bool)willUIUnlockFromSource:(int)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)loginContainerView;
- (void)removeLoginObserver:(id)arg1;
- (void)addLoginObserver:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 sceneHoster:(id)arg3 wallpaperController:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_initWithSceneHoster:(id)arg1 wallpaperController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
