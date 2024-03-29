//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSystemApp.h>

#import "MCProfileConnectionObserver-Protocol.h"
#import "RSPeerToPeerConnectionControllerDataSource-Protocol.h"
#import "SBBacklightControllerObserver-Protocol.h"
#import "SBIdleTimerProviding-Protocol.h"
#import "SBModalAlertPresentationCoordinatorDelegate-Protocol.h"
#import "SBPowerDownControllerDelegate-Protocol.h"
#import "SBRestartManagerDelegate-Protocol.h"
#import "SSScreenCapturerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UISApplicationSupportServiceDelegate-Protocol.h"
#import "UIStatusBarStyleDelegate_SpringBoardOnly-Protocol.h"

@class DNDAWDMetricsService, DNDNotificationsService, NSArray, NSCountedSet, NSDate, NSHashTable, NSMutableArray, NSMutableSet, NSNumberFormatter, NSObject, NSSet, NSString, NSTimer, RSPeerToPeerServerController, SBAccountStoreManager, SBAppStatusBarSettingsAssertion, SBApplication, SBApplicationAutoLaunchService, SBApplicationLaunchAlertService, SBBluetoothAccessoryBatteryMonitor, SBCarDoNotDisturbController, SBCardItemsController, SBCombinationHardwareButton, SBDeveloperBuildExpirationTrigger, SBExternalDisplayManager, SBFUserAuthenticationController, SBHomeHardwareButton, SBIdleTimerPolicyAggregator, SBLockHardwareButton, SBLockScreenService, SBMainDisplayInterfaceOrientationAggregator, SBMainWorkspace, SBModalAlertPresentationCoordinator, SBModalAlertPresenter, SBModalUIFluidDismissGestureManager, SBNCNotificationDispatcher, SBPowerDownController, SBPressPrecedenceArbiter, SBProximitySensorManager, SBRestartManager, SBSStatusBarStyleOverridesAssertion, SBScreenTimeTrackingController, SBScreenshotManager, SBSoftwareUpdatePasscodePolicyTypeManager, SBSpuriousScreenUndimmingAssertion, SBStateDumpService, SBSynchronizeCloudCriticalDataOperation, SBTestAutomationService, SBUIController, SBUserAgent, SBUserSessionController, SBVolumeHardwareButton, SBWidgetController, SSScreenCapturer, UISApplicationSupportService, UIWindow;
@protocol OS_dispatch_source, SBFLockOutStatusProvider, SBIdleTimer, SBProximityBacklightPolicy, SBUIUserAgent;

@interface SpringBoard : FBSystemApp <MCProfileConnectionObserver, SBPowerDownControllerDelegate, SBRestartManagerDelegate, SBModalAlertPresentationCoordinatorDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SSScreenCapturerDelegate, UISApplicationSupportServiceDelegate, SBBacklightControllerObserver, RSPeerToPeerConnectionControllerDataSource, UIApplicationDelegate, SBIdleTimerProviding>
{
    SBUIController *_uiController;
    double _headsetButtonDownTime;
    struct __IOHIDEvent *_headsetDownEvent;
    int _headsetClickCount;
    int _ringerSwitchState;
    unsigned int _headsetButtonClickCount:8;
    unsigned int _menuButtonClickCount:8;
    unsigned int _screenWasDimOnMenuDown:1;
    unsigned int _screenshotWasTaken:1;
    unsigned int _headsetDownDelayedActionPerformed:1;
    unsigned int _isSeekingInMedia:1;
    unsigned int _ignoringCurrentLockButtonPress:1;
    int _mediaSeekDirection;
    unsigned int _springBoardRequestsAccelerometerEvents;
    long long _activeInterfaceOrientation;
    NSMutableSet *_activeInterfaceOrientationObservers;
    NSMutableArray *_activeInterfaceOrientationOverrideStack;
    _Bool _wantsOrientationEvents;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    _Bool _expectsFaceContact;
    _Bool _expectsFaceContactInLandscape;
    _Bool _proximityEventsEnabled;
    _Bool _smartCoverClosed;
    _Bool _keybagRefetchTransactionIsActive;
    _Bool _menuButtonDown;
    NSSet *_restrictionDisabledApplications;
    SBApplication *_nowRecordingApp;
    SBApplication *_inCallApp;
    SBApplication *_menuButtonInterceptApp;
    _Bool _menuButtonInterceptAppEnabledForever;
    NSMutableArray *_appsRegisteredForVolumeEvents;
    NSMutableArray *_appsRegisteredForLockButtonEvents;
    SBApplication *_lastLockButtonEventRecipient;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    NSMutableArray *_blocksAwaitingAvailableMemory;
    SBCardItemsController *_cardItemsController;
    SBNCNotificationDispatcher *_notificationDispatcher;
    struct __CFBoolean *_shouldDelaySleepForHeadsetClick;
    _Bool _didPlayLockSound;
    SBUserSessionController *_userSessionController;
    id <SBFLockOutStatusProvider> _lockOutController;
    SBFUserAuthenticationController *_authenticationController;
    NSHashTable *_disableActiveOrientationChangeAssertions;
    NSCountedSet *_ignoringInteractionEventsReasons;
    _Bool _hasFinishedLaunching;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_showStatusBarAssertion;
    SBSStatusBarStyleOverridesAssertion *_recordingStatusBarStyleOverrideAssertion;
    _Bool _atHomescreen;
    NSString *_logFile;
    SBBluetoothAccessoryBatteryMonitor *_bluetoothBatteryMonitor;
    SBDeveloperBuildExpirationTrigger *_developerBuildExpirationTrigger;
    SBScreenshotManager *_screenshotManager;
    SSScreenCapturer *_screenCapturer;
    SBSynchronizeCloudCriticalDataOperation *_synchronizeCloudCriticalDataOperation;
    SBRestartManager *_restartManager;
    struct __GSEvent *_pendingDeviceOrientationChangeEventDuringStartupTransition;
    SBModalAlertPresenter *_systemModalAlertPresenter;
    SBModalAlertPresentationCoordinator *_modalAlertPresentationCoordinator;
    SBMainDisplayInterfaceOrientationAggregator *_orientationAggregator;
    _Bool _inUserTransition;
    _Bool _determiningBootTransition;
    _Bool _dontLockEver;
    SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
    id <SBIdleTimer> _idleTimer;
    SBPressPrecedenceArbiter *_pressPrecedenceArbiter;
    SBApplicationAutoLaunchService *_applicationAutoLaunchService;
    SBApplicationLaunchAlertService *_applicationLaunchAlertService;
    SBMainWorkspace *_mainWorkspace;
    SBModalUIFluidDismissGestureManager *_modalUIFluidDismissGestureManager;
    long long _lastUpdatedMirroredDisplayOrientation;
    SBCarDoNotDisturbController *_carDoNotDisturbController;
    SBScreenTimeTrackingController *_screenTimeTrackingController;
    SBProximitySensorManager *_proximitySensorManager;
    id <SBProximityBacklightPolicy> _proximityBacklightPolicy;
    SBExternalDisplayManager *_externalDisplayManager;
    SBUserAgent *_pluginUserAgent;
    SBSpuriousScreenUndimmingAssertion *_preventPowerSourceAlertsDarkBootAssertion;
    SBLockScreenService *_lockScreenService;
    UISApplicationSupportService *_uiAppSupportService;
    long long _lastSeekRequestSource;
    DNDAWDMetricsService *_dndAWDMetricsService;
    DNDNotificationsService *_dndNotificationsService;
    SBTestAutomationService *_testAutomationService;
    SBStateDumpService *_stateDumpService;
    unsigned long long _stateDumpServiceRevision;
    int _currentOverrides;
    _Bool _requestingStatusBarStyleWithoutConsideringAlerts;
    _Bool _typingActive;
    _Bool _batterySaverModeActive;
    int _nowPlayingProcessPID;
    NSMutableArray *_nowLocatingApps;
    SBWidgetController *_widgetController;
    double _bottomEdgeAmbiguousActivationMargin;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    SBAccountStoreManager *_accountStoreController;
    SBSoftwareUpdatePasscodePolicyTypeManager *_softwareUpdatePasscodePolicyTypeManager;
    SBPowerDownController *_powerDownController;
    NSTimer *_daylightSavingsTimer;
    SBCombinationHardwareButton *_combinationHardwareButton;
    RSPeerToPeerServerController *_stateDumpServerController;
}

+ (void)initializeSystemServices;
+ (void)preFrontBoardInitializationHook;
+ (long long)startupInterfaceOrientation;
+ (id)_newApplicationLibrary;
+ (id)sharedApplicationLibrary;
+ (double)systemIdleSleepInterval;
+ (_Bool)shouldFixMainThreadPriority;
@property(retain, nonatomic) RSPeerToPeerServerController *stateDumpServerController; // @synthesize stateDumpServerController=_stateDumpServerController;
@property(readonly, nonatomic) SBCombinationHardwareButton *combinationHardwareButton; // @synthesize combinationHardwareButton=_combinationHardwareButton;
@property(retain, nonatomic) NSTimer *daylightSavingsTimer; // @synthesize daylightSavingsTimer=_daylightSavingsTimer;
@property(retain, nonatomic) SBPowerDownController *powerDownController; // @synthesize powerDownController=_powerDownController;
@property(nonatomic, getter=isBatterySaverModeActive) _Bool batterySaverModeActive; // @synthesize batterySaverModeActive=_batterySaverModeActive;
@property(nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
@property(readonly, nonatomic) SBSoftwareUpdatePasscodePolicyTypeManager *softwareUpdatePasscodePolicyTypeManager; // @synthesize softwareUpdatePasscodePolicyTypeManager=_softwareUpdatePasscodePolicyTypeManager;
@property(readonly, nonatomic) SBAccountStoreManager *accountStoreController; // @synthesize accountStoreController=_accountStoreController;
@property(readonly, nonatomic) SBNCNotificationDispatcher *notificationDispatcher; // @synthesize notificationDispatcher=_notificationDispatcher;
@property(readonly, nonatomic) SBFUserAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(readonly, nonatomic) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(readonly, nonatomic) SBVolumeHardwareButton *volumeHardwareButton; // @synthesize volumeHardwareButton=_volumeHardwareButton;
@property(readonly, nonatomic) SBLockHardwareButton *lockHardwareButton; // @synthesize lockHardwareButton=_lockHardwareButton;
@property(readonly, nonatomic) SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property(nonatomic) double bottomEdgeAmbiguousActivationMargin; // @synthesize bottomEdgeAmbiguousActivationMargin=_bottomEdgeAmbiguousActivationMargin;
@property(nonatomic, getter=isTypingActive) _Bool typingActive; // @synthesize typingActive=_typingActive;
@property(readonly, nonatomic) id <SBUIUserAgent> pluginUserAgent; // @synthesize pluginUserAgent=_pluginUserAgent;
@property(readonly, nonatomic) SBProximitySensorManager *proximitySensorManager; // @synthesize proximitySensorManager=_proximitySensorManager;
@property(readonly, nonatomic) SBApplicationLaunchAlertService *applicationLaunchAlertService; // @synthesize applicationLaunchAlertService=_applicationLaunchAlertService;
@property(readonly, nonatomic) SBApplicationAutoLaunchService *applicationAutoLaunchService; // @synthesize applicationAutoLaunchService=_applicationAutoLaunchService;
@property(readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator; // @synthesize modalAlertPresentationCoordinator=_modalAlertPresentationCoordinator;
@property(readonly, nonatomic) SBRestartManager *restartManager; // @synthesize restartManager=_restartManager;
@property(readonly, nonatomic) SBUserSessionController *userSessionController; // @synthesize userSessionController=_userSessionController;
@property(readonly, nonatomic) SBScreenshotManager *screenshotManager; // @synthesize screenshotManager=_screenshotManager;
@property(retain, nonatomic) NSMutableArray *nowLocatingApps; // @synthesize nowLocatingApps=_nowLocatingApps;
@property(readonly, nonatomic) SBIdleTimerPolicyAggregator *idleTimerPolicyAggregator; // @synthesize idleTimerPolicyAggregator=_idleTimerPolicyAggregator;
@property(retain, nonatomic, setter=_setIdleTimer:) id <SBIdleTimer> idleTimer; // @synthesize idleTimer=_idleTimer;
- (void).cxx_destruct;
- (void)backlightController:(id)arg1 willAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (long long)_classicMode;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)_dumpStateCaptureData;
- (void)stateForStateType:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)allowedRemotePeerDisplayNames;
- (id)localPeerDisplayName;
- (id)supportedStateTypes;
- (void)_broadcastStateCaptureToConnectedRemotePeers:(id)arg1;
- (_Bool)_isRemoteStateDumpEnabled;
- (void)_disableRemoteStateDumpWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableRemoteStateDumpWithTimeout:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_dumpLoggingStateCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (void)takeScreenshotAndEdit:(_Bool)arg1;
- (void)takeScreenshot;
- (void)screenCapturer:(id)arg1 didCaptureScreenshotsOfScreens:(id)arg2;
- (void)_batterySaverModeChanged:(int)arg1;
- (_Bool)hasDisableActiveInterfaceOrientationChangeAssertions;
- (void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)noteKeybagRefetchTransactionIsActive:(_Bool)arg1;
- (_Bool)isKeybagRefetchTransactionActive;
- (_Bool)underMemoryPressure;
- (void)_setStatusBarShowsProgress:(_Bool)arg1;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityActivationAnimationStartDelay;
- (_Bool)_accessibilityObjectWithinProximity;
- (_Bool)_accessibilityIsSystemGestureActive;
- (void)_accessibilitySetSystemGesturesDisabledByAccessibility:(_Bool)arg1;
- (_Bool)_accessibilitySystemGesturesDisabledByAccessibility;
- (_Bool)_accessibilityShouldAllowIconLaunch;
- (_Bool)_accessibilityShouldAllowAppLaunch;
- (id)_accessibilityRunningApplications;
- (id)_accessibilityTopDisplay;
- (id)_accessibilityFrontMostApplication;
- (id)formattedPercentStringForNumber:(id)arg1;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (void)_deactivateReachability;
- (void)_setReachabilitySupported:(_Bool)arg1;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (_Bool)_hasForegroundAppWithPID:(int)arg1;
- (void)setNowPlayingInfo:(id)arg1 forProcessWithPID:(int)arg2;
- (_Bool)isNowPlayingAppPlaying;
@property(readonly, nonatomic) SBApplication *leastRecentlyForegroundLocatingApp;
- (void)nowLocatingAppDidEnterForeground:(id)arg1;
- (void)removeNowLocatingApp:(id)arg1;
- (void)addNowLocatingApp:(id)arg1;
- (void)removeInCallApp;
- (void)addInCallApp:(id)arg1;
- (id)inCallApp;
- (id)nowRecordingApp;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (void)endIgnoringInteractionEventsForReason:(id)arg1;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEventsForReason:(id)arg1;
- (void)beginIgnoringInteractionEvents;
- (_Bool)hasFinishedLaunching;
- (_Bool)launchApplicationWithIdentifier:(id)arg1 suspended:(_Bool)arg2;
- (void)launchMusicPlayerSuspended;
- (long long)alertInterfaceOrientation;
- (_Bool)isLocked;
- (_Bool)canShowAlerts;
- (void)didDismissMiniAlert;
- (void)willDisplayMiniAlert;
- (void)frontDisplayDidChange:(id)arg1;
- (void)noteSceneLayoutDidUpdateOnDisplayWithIdentity:(id)arg1;
- (void)noteSubstantialTransitionOccured;
- (void)_setAmbiguousControlCenterActivationMargin:(double)arg1;
- (void)updateOrientationDetectionSettings;
- (void)setExpectsFaceContact:(_Bool)arg1;
- (void)setExpectsFaceContact:(_Bool)arg1 inLandscape:(_Bool)arg2;
- (_Bool)expectsFaceContactInLandscape;
- (_Bool)expectsFaceContact;
- (void)updateProximitySettings;
- (void)setProximityEventsEnabled:(_Bool)arg1;
- (_Bool)proximityEventsEnabled;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forAudioCategory:(id)arg2;
- (double)windowRotationDuration;
- (_Bool)homeScreenSupportsRotation;
- (_Bool)homeScreenRotationStyleWantsUIKitRotation;
- (long long)homeScreenRotationStyle;
- (long long)rawDeviceOrientationIgnoringOrientationLocks;
- (long long)interfaceOrientationForCurrentDeviceOrientation:(_Bool)arg1;
- (long long)_currentNonFlatDeviceOrientation;
- (_Bool)supportsPortraitUpsideDownOrientation;
- (void)_postActiveInterfaceOrientationChangedNotificationAnimated:(_Bool)arg1;
- (void)updateNativeOrientationWithOrientation:(long long)arg1 updateMirroredDisplays:(_Bool)arg2 animated:(_Bool)arg3 logMessage:(id)arg4;
- (void)updateNativeOrientationWithOrientation:(long long)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationAndMirroredDisplays:(_Bool)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationAnimated:(_Bool)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationWithLogMessage:(id)arg1;
- (void)setWantsOrientationEvents:(_Bool)arg1 logMessage:(id)arg2;
@property(readonly, nonatomic) _Bool wantsOrientationEvents;
- (_Bool)_statusBarOrientationFollowsWindow:(id)arg1;
@property(readonly, nonatomic) SBMainDisplayInterfaceOrientationAggregator *orientationAggregator;
- (long long)_frontMostAppOrientation;
- (void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1;
- (void)popTransientActiveInterfaceOrientationForReason:(id)arg1;
- (void)pushTransientActiveInterfaceOrientation:(long long)arg1 forReason:(id)arg2;
- (long long)activeInterfaceOrientationWithoutConsideringAlerts;
- (long long)activeInterfaceOrientation;
- (void)removeActiveOrientationObserver:(id)arg1;
- (void)addActiveOrientationObserver:(id)arg1;
- (void)noteAlertView:(id)arg1 willChangeInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 force:(_Bool)arg4 logMessage:(id)arg5;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 logMessage:(id)arg4;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 force:(_Bool)arg2 logMessage:(id)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 logMessage:(id)arg2;
- (void)_setDeviceOrientation:(long long)arg1 animated:(_Bool)arg2 logMessage:(id)arg3;
- (void)_setStatusBarOrientation:(long long)arg1 animated:(_Bool)arg2 logMessage:(id)arg3;
- (void)_setStatusBarOrientation:(long long)arg1 logMessage:(id)arg2;
- (void)updateMirroredDisplayOrientationWithLogMessage:(id)arg1;
- (void)_handleDeviceOrientationChangedEvent:(struct __GSEvent *)arg1;
- (void)didReceiveMemoryWarning;
- (void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2;
- (void)_caseLatchWantsToAttemptLock;
- (void)noteCaseHardwarePresent;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1;
- (_Bool)allowCaseLatchLockAndUnlock;
- (_Bool)caseIsEnabledAndLatched;
- (_Bool)smartCoverIsClosed;
- (void)_enqueueWorkspaceEvent:(CDUnknownBlockType)arg1 withName:(id)arg2 ifSatisfiesCondition:(CDUnknownBlockType)arg3 cancelingEventsWithNames:(id)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_smartCoverDidClose:(struct __IOHIDEvent *)arg1;
- (void)_smartCoverMightHaveOpened:(struct __IOHIDEvent *)arg1;
- (void)_smartCoverDidOpen:(struct __IOHIDEvent *)arg1;
- (void)resetIdleTimerAndUndim;
- (void)lockAfterCallDidEndForLockPress:(_Bool)arg1;
- (void)noteBacklightFadeFinished;
- (void)noteBacklightLevelChanged;
- (void)_adjustSignificantTimersAfterSleep;
- (void)_adjustDaylightSavingsTimerAfterSleep;
- (void)_daylightSavingsTimeChanged;
- (void)setUpDaylightSavingsTimer;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_postSpringBoardSignificantTimeChangedNotificationWithLogMessage:(id)arg1;
- (void)_midnightPassed;
- (void)setupMidnightTimer;
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;
@property(readonly, nonatomic) NSArray *appsRegisteredForLockButtonEvents; // @synthesize appsRegisteredForLockButtonEvents=_appsRegisteredForLockButtonEvents;
- (void)setAppRegisteredForLockButtonEvents:(id)arg1 isActive:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *appsRegisteredForVolumeEvents; // @synthesize appsRegisteredForVolumeEvents=_appsRegisteredForVolumeEvents;
- (void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(_Bool)arg2;
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;
- (_Bool)menuButtonInterceptAppEnabledForever;
- (id)menuButtonInterceptApp;
- (void)setMenuButtonInterceptApp:(id)arg1 forever:(_Bool)arg2;
- (void)_openURLCore:(id)arg1 display:(id)arg2 animating:(_Bool)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 animating:(_Bool)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 animating:(_Bool)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)handleDocumentsAndDataURL:(id)arg1 origin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationOpenURL:(id)arg1;
- (void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (_Bool)shouldShowAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (_Bool)isSpringBoardStatusBarHidden;
- (int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (_Bool)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1;
- (void)_updateRingerState:(int)arg1 withVisuals:(_Bool)arg2 updatePreferenceRegister:(_Bool)arg3;
- (void)_ringerChanged:(struct __IOHIDEvent *)arg1;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)localeChanged;
- (void)_localeChanged;
- (_Bool)isBundleIdentifierRestrictionDisabled:(id)arg1;
- (void)_headsetButtonUp:(struct __IOHIDEvent *)arg1;
- (void)_headsetButtonDown:(struct __IOHIDEvent *)arg1;
- (void)_setDeferredHeadsetButtonDownEvent:(struct __IOHIDEvent *)arg1;
- (void)_imagesMounted;
- (void)_iapExtendedModeReset;
- (void)_iapServerConnectionDiedNotification:(id)arg1;
- (void)_performDelayedHeadsetClickTimeout;
- (void)powerDownCanceled:(id)arg1;
- (void)powerDownRequested:(id)arg1;
- (void)dismissPowerDownAlertWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showPowerDownAlert;
- (_Bool)isPowerDownAlertFrontmost;
- (_Bool)shouldNeverLock;
- (void)_startSeekWithDirection:(id)arg1;
- (void)_keyboardAvailabilityChanged;
- (_Bool)_isDim;
- (id)_keyWindowForScreen:(id)arg1;
- (id)_windowForSystemAppButtonEventsForScreen:(id)arg1;
- (void)_toggleFloatingDockVisibility:(id)arg1;
- (void)_handleScreenShotShortcut:(id)arg1;
- (void)_handleGotoHomeScreenShortcut:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (id)keyCommands;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_logReliabilityInfoForEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleSnapshotButtonHIDEvent:(struct __IOHIDEvent *)arg1 buttonIsDown:(_Bool)arg2 fromSource:(int)arg3;
- (_Bool)canShowLockScreenCameraGrabber;
- (_Bool)lockScreenCameraSupported;
- (_Bool)iapIsInExtendedMode;
- (void)batteryStatusDidChange:(id)arg1;
- (void)significantTimeChange;
- (void)_significantTimeChangeNotificationReceived;
- (void)_significantTimeDidChange:(_Bool)arg1;
- (void)runFieldTestScript;
- (void)_lockdownActivationChanged:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)wipeDeviceNowWithReason:(id)arg1;
- (void)_rotateView:(id)arg1 toOrientation:(long long)arg2;
- (void)requestDeviceUnlock;
- (void)languageChanged;
- (id)_settingLanguageStringForNewLanguage;
- (_Bool)launchedForUserTransition;
- (void)toggleSearchWithWillBeginHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_toggleSearch;
- (void)_recordingStateChanged:(id)arg1;
- (void)_removeRecordingStatusBarStyleOverrideAssertion;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_initializeAndStartObservingDefaultsIfNecessary;
- (void)_updateHomeScreenPresenceNotification:(id)arg1;
- (_Bool)isShowingHomescreen;
- (void)systemControllerRouteChanged:(id)arg1;
- (void)registerAnalyticsEventHandlers;
- (void)_initializeDeferredItems;
- (void)applicationDidFinishLaunching:(id)arg1;
- (_Bool)isDeterminingBootTransition;
- (void)_performDeferredLaunchWork;
- (void)_startBulletinBoardServer;
- (id)_defaultExpirationComponents;
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_shouldSwallowHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_application:(id)arg1 allowsDraggingItems:(id)arg2;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (_Bool)application:(id)arg1 canOpenURL:(id)arg2;
- (_Bool)applicationIsAliveForSystemWatchdog:(id)arg1;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)modalAlertPresentationCoordinator:(id)arg1 didChangeShowingSystemModalAlert:(_Bool)arg2;
- (void)restartManagerExitImminent:(id)arg1;
- (void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;
- (void)restartManagerWillReboot:(id)arg1;
- (void)restartManagerWillShutdown:(id)arg1;
- (void)_handleShutDownAndReboot;
- (void)handleSignal:(int)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)init;
@property(readonly, nonatomic) SBWidgetController *widgetController; // @synthesize widgetController=_widgetController;
- (void)setNextAssistantRecognitionStrings:(id)arg1;
- (id)setNextVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)rotateIfNeeded:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_testOrientation:(id)arg1 options:(id)arg2;
- (void)failedTest:(id)arg1 withResults:(id)arg2;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(CDUnknownBlockType)arg4;
- (void)startedTest:(id)arg1;
- (void)_runSpotlightCoverSheetTodayViewRotation;
- (void)_runSpotlightTodayViewRotation;
- (void)_runSpotlightPulldownRotation;
- (void)_performMainWorkspaceTransitionWithPrimaryWorkspaceEntity:(id)arg1 sideWorkspaceEntity:(id)arg2 floatingWorkspaceEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_publishFakeNotificationsWithCount:(unsigned long long)arg1 requestDestination:(id)arg2 notificationScrollView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_runScrollTestWithScrollView:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runTestWithVariableFinish:(CDUnknownBlockType)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleApplicationExit:(id)arg1;
- (_Bool)_shouldPendAlertsForTest:(id)arg1;
- (void)_basicRotationTestForCurrentConfigurationWithTeardown:(CDUnknownBlockType)arg1;
- (void)_rotateFromPortrait:(CDUnknownBlockType)arg1 toLandscape:(CDUnknownBlockType)arg2 andFromLandscape:(CDUnknownBlockType)arg3 andBackToPortrait:(CDUnknownBlockType)arg4;
- (void)_setupKeyboardAnimationSubTestsForTestName:(id)arg1;
- (id)_applicationToUseForScrollTesting;
- (id)_applicationToUseForOpenAndCloseTesting;
- (id)_dashBoardTodayControllerForTestingIfExists;
- (id)_dashBoardControllerForTesting;
- (void)_activateSafariWithCompletion:(CDUnknownBlockType)arg1;
- (void)_returnToHomeScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_turnScreenOnOnDashBoardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_simulateHomeButtonPressWithCompletion:(CDUnknownBlockType)arg1;
- (void)_simulateHomeButtonPress;
- (void)_simulateLockButtonPress;
- (void)_performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)_runAppOpen:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_cleanupMainWorkspaceForMedusaTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupMainWorkspaceForMedusaTestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runMedusaTest:(id)arg1 withMainWorkspaceTransition:(CDUnknownBlockType)arg2 options:(id)arg3;
- (void)_runMedusaUnpinFloatingApplicationTest:(id)arg1 withOptions:(id)arg2;
- (void)_runMedusaPinFloatingApplicationTest:(id)arg1 withOptions:(id)arg2;
- (void)_runMedusaMoveFloatingApplicationTest:(id)arg1 withOptions:(id)arg2;
- (void)_runMedusaSplitViewSuspendTest:(id)arg1 withOptions:(id)arg2;
- (void)_runMedusaSplitViewResizeTest:(id)arg1 withOptions:(id)arg2;
- (void)_runFloatingDockPresent:(_Bool)arg1 testName:(id)arg2;
- (void)_runDashBoardPresentDismissPasscode;
- (void)_runDashBoardDismissTestFromPageIndex:(unsigned long long)arg1 showPasscodeView:(_Bool)arg2;
- (void)_runDashBoardDismissFromPasscodeViewAfterAuthenticationTest;
- (void)_runDashBoardDismissFromTodayViewWhileAuthenticatedTest;
- (void)_runDashBoardDismissWhileAuthenticatedTest;
- (void)_launchFullscreenApplication:(id)arg1 withLaunchResult:(CDUnknownBlockType)arg2 transactionCompletion:(CDUnknownBlockType)arg3;
- (void)_returnToHomescreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetForceRotate;
- (void)_rotationCompletion:(id)arg1;
- (void)_forceRotateToOrientation:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_runDashBoardRotateCameraPage;
- (void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1 showSpotlight:(_Bool)arg2;
- (void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1;
- (void)_runDashBoardRotateMainPage;
- (void)_runDashBoardRotateTodayViewPage;
- (void)_runDashBoardScrollTestFromPageIndex:(unsigned long long)arg1 toPageWithIndex:(unsigned long long)arg2 subTestName:(id)arg3 backSubTestName:(id)arg4 withBlur:(_Bool)arg5;
- (void)_runDashBoardScrollFromLeftToRightPageTestWithBlur:(_Bool)arg1;
- (void)_runDashBoardScrollToRightPageTestWithBlur:(_Bool)arg1;
- (void)_runDashBoardScrollToLeftPageTestWithBlur:(_Bool)arg1;
- (void)assistant:(id)arg1 viewDidAppear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
- (void)_runSiriBringUpTest:(id)arg1 testOptions:(id)arg2;
- (void)_runSiriBringUpImmediateBeepTest:(id)arg1;
- (void)_runNotificationCoalescingRestackingTestWithOptions:(id)arg1;
- (void)_runNotificationCoalescingExpandingTestWithOptions:(id)arg1;
- (id)_leadingNotificationRequest;
- (id)_combinedListViewController;
- (void)_removeAllFakeNotifications;
- (void)_publishFakeThreadedLockScreenNotificationsWithCount:(unsigned long long)arg1 uniqueThreadCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runPresentBannerTest;
- (void)_runClearLongLookTest;
- (void)_runReParkLongLookTest;
- (void)_runPresentLongLookTest;
- (void)_runBannerTestWithBlock:(CDUnknownBlockType)arg1;
- (void)_withdrawCoverSheetNotificationRequests:(id)arg1;
- (id)_publishRequestsForCoverSheetNotificationTests;
- (id)_publishFakeCoverSheetNotificationsToDestination:(id)arg1 count:(unsigned long long)arg2;
- (id)_dashBoardCombinedListViewController;
- (void)_runCoverSheetNotificationListHistoryHideTest;
- (void)_runCoverSheetNotificationListHistoryRevealTest;
- (id)_coverSheetBringUpEventStream;
- (void)_bringUpCoverSheetWithBeforePresent:(CDUnknownBlockType)arg1 afterPresent:(CDUnknownBlockType)arg2 beforeDismiss:(CDUnknownBlockType)arg3 afterDismiss:(CDUnknownBlockType)arg4;
- (void)_runCoverSheetTestPresenting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runCoverSheetTestPresenting:(_Bool)arg1;
- (void)_runCoverSheetDismissToSafariTest;
- (void)_runCoverSheetDismissTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runCoverSheetPresentOverSafariTest;
- (void)_runCoverSheetPresentTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runControlCenterDismissOrbActionsTest;
- (void)_runControlCenterShowOrbActionsTest;
- (id)_controlCenterBringupEventStream;
- (void)_bringUpControlCenter;
- (void)_runControlCenterBringupOnLockScreenTest;
- (void)_runControlCenterBringupOverSafariTest;
- (void)_runControlCenterBringupTest;
- (void)_runControlCenterDismissTest;
- (void)_performScrunchAndSwipeWithComposer:(id)arg1;
- (void)_performFiveFingerScrunchWithComposer:(id)arg1 scrunchProgress:(double)arg2 duration:(double)arg3 withContinuationBlock:(CDUnknownBlockType)arg4;
- (void)_performFourFingerSwipeWithComposer:(id)arg1 duration:(double)arg2;
- (void)_pauseWithComposer:(id)arg1 locations:(struct CGPoint *)arg2 touchCount:(unsigned long long)arg3;
- (void)_performArcSwipeWithComposer:(id)arg1;
- (id)_flickTimingFunction;
- (void)_performMultiFingerDragWithComposer:(id)arg1 startLocations:(struct CGPoint *)arg2 endLocations:(struct CGPoint *)arg3 touchCount:(unsigned long long)arg4 duration:(double)arg5 timingFunction:(id)arg6 startWithTouchDown:(_Bool)arg7 intermediateTransformer:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_performSwipeWithComposer:(id)arg1 startLocation:(struct CGPoint)arg2 endLocation:(struct CGPoint)arg3 duration:(double)arg4 timingFunction:(id)arg5 intermediateTransformer:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_performSwipeWithComposer:(id)arg1 startLocation:(struct CGPoint)arg2 endLocation:(struct CGPoint)arg3 duration:(double)arg4;
- (void)_performSwipeHomeWithComposer:(id)arg1;
- (void)_prepareToRunAutoPiPTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareToRunSwitcherGestureTestsWithForegroundApp:(id)arg1 shouldStartTest:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_prepareToRunSwitcherGestureTestsFromHomeScreen:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_prepareToRunSwitcherGestureTestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startAutoPiPWithGesture:(CDUnknownBlockType)arg1 setupCompletion:(CDUnknownBlockType)arg2 finalCompletion:(CDUnknownBlockType)arg3;
- (void)_runAutoPiPWithGestureTest:(CDUnknownBlockType)arg1;
- (void)_runScrunchHomeToAutoPiPTest;
- (void)_runSwipeUpHomeToAutoPiPTest;
- (void)_runScrunchAndSwipeMultipleAppsTest;
- (void)_runScrunchAndSwipeTest;
- (void)_runScrunchToAppSwitcherTest;
- (void)_runScrunchToHomeTest;
- (void)_runFourFingerSwipeMultipleAppsTest;
- (void)_runFourFingerSwipeTest;
- (void)_runArcSwipeMultipleAppsTest;
- (void)_runArcSwipeTestFromHomeScreen:(_Bool)arg1;
- (void)_runBottomEdgeSwipeMultipleAppsTest;
- (void)_runBottomEdgeSwipeTestFromHomeScreen:(_Bool)arg1;
- (void)_runSwipeAndPauseForSwitcherOverFolderTest;
- (void)_runSwipeAndPauseForSwitcherTestFromHomeScreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runSwipeToHomeOverFolderTest;
- (void)_runSwipeToHomeTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runLockScreenScrollNotificationsTestWithOptions:(id)arg1;
- (void)_publishFakeLockScreenNotificationsWithCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runWidgetLaunchTestNamed:(id)arg1 options:(id)arg2;
- (id)_todayViewFlickNavigationEventStream;
- (void)_runTodayViewEditTest;
- (void)_runDashboardTodayViewScrollWidgetsTestWithOptions:(id)arg1;
- (void)_runTodayViewScrollWidgetsTestWithOptions:(id)arg1;
- (void)_runTapContinuityBannerInSwitcherTest;
- (void)_runDismissContinuityBannerInSwitcherTest;
- (void)_runPresentContinuityBannerInSwitcherTest;
- (void)_runDoSiDoTest;
- (id)_singleHomeButtonPressEventStream;
- (id)_doubleHomeButtonPressEventStream;
- (void)_runAppSwitcherBringupTestOverApp:(_Bool)arg1 rotated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runAppSwitcherDismissTestOverApp:(_Bool)arg1 rotated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_continueRunningScrollAppSwitcherTest:(id)arg1 runColdTest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startScrollAppSwitcherTest:(id)arg1 overApp:(_Bool)arg2 runColdTest:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_runScrollAppSwitcherLandscapeTest:(id)arg1 overApp:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runScrollAppSwitcherTest:(id)arg1 overApp:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runToggleSearchTest;
- (void)_runAppSearchDismiss;
- (void)_runAppSearchPresent;
- (void)_runHomeScreenSearchDismiss;
- (void)_runHomeScreenSearchPresent;
- (void)exitSpotlight:(id)arg1;
- (void)_bringUPSpotlight:(CDUnknownBlockType)arg1;
- (void)_runLockScreenTodayViewPullDownToSpotlight;
- (void)_runTodayViewPullDownToSpotlight;
- (void)_runLockScreenTodayViewFocusSearchFieldToSpotlight;
- (void)_runTodayViewFocusSearchFieldToSpotlight;
- (void)_runHomeScreenIconPullToSpotlightDismiss;
- (void)_runHomeScreenIconPullToSpotlight;
- (void)_runHomeScreenSwipeRightFromTodayView;
- (void)_runHomeScreenSwipeLeftToTodayView;
- (void)_runScrollIconListTestEditing:(_Bool)arg1;
- (void)runFolderRotationTest:(int)arg1;
- (void)runHomeScreenRotationIterationWithRemainingIterations:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runHomeScreenRotationTest:(int)arg1;
- (void)endLaunchTest;
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)_cleanUpLaunchTestState;
- (void)_retryLaunchTestWithOptions:(id)arg1;
- (void)_unlockAnimationDidFinish:(id)arg1;
- (void)_unscatterWillBegin:(id)arg1;
- (void)_medusaTestWithName:(id)arg1 testOptions:(id)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (id)_appIconsToPutInFolderForTest;
- (void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

