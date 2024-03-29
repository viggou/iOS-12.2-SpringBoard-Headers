//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBLockScreenViewControllerBase.h"

#import "SBBiometricUnlockBehaviorDelegate-Protocol.h"
#import "SBDashBoardDateTimeLayoutAggregating-Protocol.h"
#import "SBDashBoardIdleTimerProviderDelegate-Protocol.h"
#import "SBDashBoardInterstitialTransitionDelegate-Protocol.h"
#import "SBDashBoardLegibilityProviderDelegate-Protocol.h"
#import "SBDashBoardMesaUnlockBehaviorConfigurationDelegate-Protocol.h"
#import "SBDashBoardNotificationClearingTriggerDelegate-Protocol.h"
#import "SBDashBoardNotificationDestination-Protocol.h"
#import "SBDashBoardPersistentContentLayoutProviding-Protocol.h"
#import "SBDashBoardScrollGestureControllerDelegate-Protocol.h"
#import "SBDashBoardSpotlightViewControllerDelegate-Protocol.h"
#import "SBDashBoardViewControllerProtocol-Protocol.h"
#import "SBDashBoardViewDelegate-Protocol.h"
#import "SBDashBoardViewTransitionSource-Protocol.h"
#import "SBFIrisWallpaperViewDelegate-Protocol.h"
#import "SBLockScreenActionProvider-Protocol.h"
#import "SBLockScreenPluginManagerDelegate-Protocol.h"
#import "SBLockScreenTimerViewControllerDelegate-Protocol.h"
#import "SBWallpaperObserver-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class BSTimer, FBDisplayLayoutTransition, NSArray, NSHashTable, NSSet, NSString, SBAppStatusBarSettingsAssertion, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardChargingViewController, SBDashBoardFixedFooterViewController, SBDashBoardHomeButtonShowPasscodeRecognizer, SBDashBoardHomeButtonSuppressAfterUnlockRecognizer, SBDashBoardIdleTimerProvider, SBDashBoardInterstitialTransitionSource, SBDashBoardLayoutStrategy, SBDashBoardLegibilityProvider, SBDashBoardMainPageContentViewController, SBDashBoardMesaUnlockBehaviorConfiguration, SBDashBoardModalPresentationViewController, SBDashBoardNotificationClearingTrigger, SBDashBoardNotificationDispatcher, SBDashBoardPluginViewController, SBDashBoardPowerChangeObserver, SBDashBoardPresentation, SBDashBoardProudLockViewController, SBDashBoardQuickActionsViewController, SBDashBoardScrollGestureController, SBDashBoardSetupViewController, SBDashBoardTeachableMomentsContainerViewController, SBDashBoardView, SBFLockScreenDateSubtitleView, SBInProcessSecureAppAction, SBLockScreenActionManager, SBLockScreenDateViewController, SBLockScreenPluginManager, SBLockScreenSettings, SBLockScreenTimerViewController, SBMainDisplayPolicyAggregator, SBMainStatusBarStateProvider, SBScreenWakeAnimationController, SBSteppedAnimationTimingFunctionCalculator, SBWallpaperAggdLogger, UIColor, UIGestureRecognizer, UIStatusBar, UITapGestureRecognizer, UIVisualEffectView, _UILegibilitySettings;
@protocol BSInvalidatable, SBBiometricUnlockBehavior, SBDashBoardNotificationDispatcher, SBDashBoardViewControllerDelegate, SBDashBoardViewPresenting, SBDashBoardViewTransitionSource, SBFIrisWallpaperView, SBFLockOutStatusProvider, SBNotificationDestination, SBWallpaperColorProvider, UICoordinateSpace;

@interface SBDashBoardViewController : SBLockScreenViewControllerBase <SBDashBoardPersistentContentLayoutProviding, SBDashBoardDateTimeLayoutAggregating, SBDashBoardViewDelegate, UIGestureRecognizerDelegate, SBDashBoardLegibilityProviderDelegate, SBLockScreenActionProvider, SBLockScreenPluginManagerDelegate, SBFIrisWallpaperViewDelegate, SBDashBoardViewTransitionSource, SBDashBoardNotificationDestination, SBLockScreenTimerViewControllerDelegate, SBDashBoardMesaUnlockBehaviorConfigurationDelegate, SBBiometricUnlockBehaviorDelegate, _UISettingsKeyObserver, SBDashBoardScrollGestureControllerDelegate, SBDashBoardIdleTimerProviderDelegate, SBDashBoardNotificationClearingTriggerDelegate, SBDashBoardSpotlightViewControllerDelegate, SBDashBoardInterstitialTransitionDelegate, SBWallpaperObserver, SBDashBoardViewControllerProtocol>
{
    SBLockScreenSettings *_prototypeSettings;
    _Bool _screenOffMode;
    _Bool _hasContentAboveDashBoard;
    _Bool _preventAppearanceUpdatesForRotation;
    SBLockScreenPluginManager *_pluginManager;
    SBSteppedAnimationTimingFunctionCalculator *_interactiveAnimationCalculator;
    SBDashBoardPluginViewController *_pluginViewController;
    long long _pluginViewControllerPresentationStyle;
    NSHashTable *_externalAppearanceProviders;
    NSHashTable *_externalBehaviorProviders;
    NSHashTable *_externalEventHandlers;
    NSHashTable *_externalPresentationProviders;
    NSHashTable *_externalLockProviders;
    NSHashTable *_observers;
    NSHashTable *_applicationHosters;
    SBDashBoardNotificationDispatcher *_notificationDispatcher;
    long long _transitionType;
    CDStruct_7238a68f _transitionContext;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    long long _participantState;
    _Bool _transitionDisabledIdleTimer;
    SBDashBoardHomeButtonShowPasscodeRecognizer *_homeButtonShowPasscodeRecognizer;
    SBDashBoardHomeButtonSuppressAfterUnlockRecognizer *_homeButtonSuppressAfterUnlockRecognizer;
    SBDashBoardModalPresentationViewController *_modalPresentationController;
    SBDashBoardChargingViewController *_chargingViewController;
    BSTimer *_chargingViewControllerTimer;
    CDUnknownBlockType _chargingViewTimerHandler;
    SBDashBoardFixedFooterViewController *_fixedFooterViewController;
    SBDashBoardProudLockViewController *_proudLockViewController;
    SBDashBoardTeachableMomentsContainerViewController *_teachableMomentsContainerViewController;
    SBDashBoardQuickActionsViewController *_quickActionsViewController;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    SBDashBoardMesaUnlockBehaviorConfiguration *_mesaUnlockBehaviorConfiguration;
    id <SBBiometricUnlockBehavior> _biometricUnlockBehavior;
    SBDashBoardIdleTimerProvider *_idleTimerProvider;
    SBDashBoardScrollGestureController *_scrollGestureController;
    _Bool _listeningForDisplayLayoutChanges;
    _Bool _screenOnForLiftToWake;
    _Bool _statusBarInLockdownForTeardown;
    UITapGestureRecognizer *_quickNoteGestureRecognizer;
    UIGestureRecognizer *_irisGestureRecognizer;
    SBDashBoardNotificationClearingTrigger *_notificationClearingTrigger;
    int _lastAppearState;
    _Bool _wantsAccessibilityContentSizes;
    _Bool _needsAccessibilityContentSizesUpdate;
    double _accessibilityTimeLabelBaselineY;
    double _accessibilityTimeSubtitleBaselineY;
    double _initialInterstitialTransitionProgress;
    _Bool _interstitialTransitionStartedFromPasscodePresented;
    SBFLockScreenDateSubtitleView *_chargingLabel;
    _Bool _expectsFaceContact;
    _Bool _irisPlayerIsInteracting;
    _Bool _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    id <SBDashBoardViewControllerDelegate> _delegate;
    SBDashBoardLayoutStrategy *_layoutStrategy;
    SBDashBoardAppearance *_activeAppearance;
    SBDashBoardBehavior *_activeBehavior;
    id <SBDashBoardNotificationDispatcher> _dispatcher;
    SBMainDisplayPolicyAggregator *_policyAggregator;
    SBMainStatusBarStateProvider *_statusBarStateProvider;
    id <SBFIrisWallpaperView> _irisWallpaperView;
    id <SBWallpaperColorProvider> _wallpaperColorProvider;
    long long _effectiveInterfaceOrientationOverride;
    NSArray *_pageViewControllers;
    NSArray *_allowedPageViewControllers;
    SBDashBoardMainPageContentViewController *_mainPageContentViewController;
    unsigned long long _lastSettledPageIndex;
    SBDashBoardBehavior *_localBehavior;
    SBDashBoardBehavior *_irisBehavior;
    SBDashBoardBehavior *_setupBehavior;
    double _appearanceFraction;
    SBDashBoardAppearance *_previousAppearance;
    SBDashBoardAppearance *_localAppearance;
    SBDashBoardPresentation *_activePresentation;
    SBLockScreenDateViewController *_dateViewController;
    SBDashBoardPowerChangeObserver *_powerChangeObserver;
    SBLockScreenTimerViewController *_timerViewController;
    SBDashBoardLegibilityProvider *_legibilityProvider;
    SBLockScreenActionManager *_lockScreenActionManager;
    UIStatusBar *_fakeStatusBar;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertionForScrolling;
    UIVisualEffectView *_statusBarBackgroundView;
    SBWallpaperAggdLogger *_wallpaperAggdLogger;
    id <SBFLockOutStatusProvider> _lockOutController;
    id <SBDashBoardViewTransitionSource> _currentTransitionSource;
    SBDashBoardSetupViewController *_setupController;
    SBInProcessSecureAppAction *_secureAppAction;
    SBDashBoardInterstitialTransitionSource *_interstitialTransitionSource;
    SBScreenWakeAnimationController *_screenWakeAnimationController;
}

@property(retain, nonatomic, getter=_screenWakeAnimationController, setter=_setScreenWakeAnimationController:) SBScreenWakeAnimationController *screenWakeAnimationController; // @synthesize screenWakeAnimationController=_screenWakeAnimationController;
@property(retain, nonatomic) SBDashBoardInterstitialTransitionSource *interstitialTransitionSource; // @synthesize interstitialTransitionSource=_interstitialTransitionSource;
@property(retain, nonatomic) SBInProcessSecureAppAction *secureAppAction; // @synthesize secureAppAction=_secureAppAction;
@property(retain, nonatomic) SBDashBoardSetupViewController *setupController; // @synthesize setupController=_setupController;
@property(retain, nonatomic) id <SBDashBoardViewTransitionSource> currentTransitionSource; // @synthesize currentTransitionSource=_currentTransitionSource;
@property(retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(retain, nonatomic) SBDashBoardModalPresentationViewController *modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // @synthesize wallpaperAggdLogger=_wallpaperAggdLogger;
@property(nonatomic) _Bool shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes; // @synthesize shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes=_shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
@property(nonatomic) _Bool irisPlayerIsInteracting; // @synthesize irisPlayerIsInteracting=_irisPlayerIsInteracting;
@property(retain, nonatomic) UIVisualEffectView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *hideStatusBarAssertionForScrolling; // @synthesize hideStatusBarAssertionForScrolling=_hideStatusBarAssertionForScrolling;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(retain, nonatomic) UIStatusBar *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(retain, nonatomic) SBLockScreenActionManager *lockScreenActionManager; // @synthesize lockScreenActionManager=_lockScreenActionManager;
@property(retain, nonatomic) SBDashBoardLegibilityProvider *legibilityProvider; // @synthesize legibilityProvider=_legibilityProvider;
@property(retain, nonatomic) SBLockScreenTimerViewController *timerViewController; // @synthesize timerViewController=_timerViewController;
@property(retain, nonatomic) SBDashBoardPowerChangeObserver *powerChangeObserver; // @synthesize powerChangeObserver=_powerChangeObserver;
@property(retain, nonatomic) SBLockScreenDateViewController *dateViewController; // @synthesize dateViewController=_dateViewController;
@property(retain, nonatomic) SBDashBoardPresentation *activePresentation; // @synthesize activePresentation=_activePresentation;
@property(copy, nonatomic) SBDashBoardAppearance *localAppearance; // @synthesize localAppearance=_localAppearance;
@property(copy, nonatomic) SBDashBoardAppearance *previousAppearance; // @synthesize previousAppearance=_previousAppearance;
@property(nonatomic) double appearanceFraction; // @synthesize appearanceFraction=_appearanceFraction;
@property(retain, nonatomic) SBDashBoardBehavior *setupBehavior; // @synthesize setupBehavior=_setupBehavior;
@property(retain, nonatomic) SBDashBoardBehavior *irisBehavior; // @synthesize irisBehavior=_irisBehavior;
@property(retain, nonatomic) SBDashBoardBehavior *localBehavior; // @synthesize localBehavior=_localBehavior;
@property(nonatomic) unsigned long long lastSettledPageIndex; // @synthesize lastSettledPageIndex=_lastSettledPageIndex;
@property(retain, nonatomic, setter=_setMainPageContentViewController:) SBDashBoardMainPageContentViewController *mainPageContentViewController; // @synthesize mainPageContentViewController=_mainPageContentViewController;
@property(copy, nonatomic, getter=_allowedPageViewControllers, setter=_setAllowedPageViewControllers:) NSArray *allowedPageViewControllers; // @synthesize allowedPageViewControllers=_allowedPageViewControllers;
@property(copy, nonatomic, setter=_setPageViewControllers:) NSArray *pageViewControllers; // @synthesize pageViewControllers=_pageViewControllers;
@property(nonatomic) long long effectiveInterfaceOrientationOverride; // @synthesize effectiveInterfaceOrientationOverride=_effectiveInterfaceOrientationOverride;
@property(nonatomic) __weak id <SBWallpaperColorProvider> wallpaperColorProvider; // @synthesize wallpaperColorProvider=_wallpaperColorProvider;
@property(retain, nonatomic) id <SBFIrisWallpaperView> irisWallpaperView; // @synthesize irisWallpaperView=_irisWallpaperView;
@property(retain, nonatomic, getter=_statusBarStateProvider, setter=_setStatusBarStateProvider:) SBMainStatusBarStateProvider *statusBarStateProvider; // @synthesize statusBarStateProvider=_statusBarStateProvider;
@property(retain, nonatomic, getter=_policyAggregator, setter=_setMainDisplayPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator; // @synthesize policyAggregator=_policyAggregator;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) CDStruct_7238a68f transitionContext; // @synthesize transitionContext=_transitionContext;
@property(copy, nonatomic) SBDashBoardBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(copy, nonatomic) SBDashBoardAppearance *activeAppearance; // @synthesize activeAppearance=_activeAppearance;
- (_Bool)expectsFaceContact;
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(readonly, nonatomic) _Bool hasContentAboveDashBoard; // @synthesize hasContentAboveDashBoard=_hasContentAboveDashBoard;
@property(nonatomic) __weak id <SBDashBoardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_passcodeViewController;
- (void)_dismissApplicationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_dismissAppBelowDashBoard:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reallyActivateAppSceneWithEntity:(id)arg1 interactive:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_activateAppSceneBelowDashBoard:(id)arg1 secureAppType:(unsigned long long)arg2 withActions:(id)arg3 interactive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_addOrRemoveSetupViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_addOrRemoveResetRestoreViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_addOrRemoveBlockedViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_dismissToMainPageFromPageViewController:(id)arg1;
- (void)_dismissModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dismissModalViewControllersWithIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentedModalViewControllerWithIdentifier:(id)arg1;
- (_Bool)_isPresentingModalViewControllerWithIdentifier:(id)arg1;
- (void)_setModalPresentationControllerVisibility:(_Bool)arg1 cancelTouches:(_Bool)arg2;
- (void)_setModalPresentationControllerVisibility:(_Bool)arg1;
- (void)_updateModalPresentationControllerVisibility;
- (void)_setupModeChanged:(id)arg1;
- (void)_configureForCurrentSetupMode;
- (void)_policyAggregatorCapabilitiesChanged:(id)arg1;
- (void)_setHasContentAboveDashBoard:(_Bool)arg1;
- (void)_displayLayoutDidUpdate:(id)arg1;
- (void)_displayWillTurnOnWhileOnDashBoard:(id)arg1;
- (_Bool)_isMainPageShowing;
- (void)_transitionChargingDateSubtitleToVisible:(_Bool)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)_updateDateSubtitleAppearanceForBattery:(_Bool)arg1 animated:(_Bool)arg2 chargingVisible:(_Bool)arg3;
- (void)_transitionChargingViewToVisible:(_Bool)arg1 showBattery:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_powerStatusChangedToConnectedState:(_Bool)arg1;
- (id)_averageLockScreenWallpaperColor;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)_transitionTimerViewToVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)timerControllerDidStopTimer:(id)arg1;
- (void)timerControllerDidStartTimer:(id)arg1;
- (double)_dateTimeAlphaForFade;
- (_Bool)_isWakeAnimationInProgress;
- (void)_startFadeInAnimationForSource:(long long)arg1;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)_actuallyUpdateUIForIrisPlaying:(_Bool)arg1;
- (void)_actuallyUpdateUIForIrisNotPlaying;
- (void)_actuallyUpdateUIForIrisPlaying;
- (void)_updateUIForPlaying:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)_setupIrisWallpaperGesture;
- (void)_launchQuickNote;
- (void)launchQuickNoteIfNotRestricted;
- (void)_handleQuickNoteLaunch:(id)arg1;
- (void)_setupQuickNoteGestureRecognizer;
- (void)_createStatusBarBackgroundViewIfNeeded;
- (id)_fakeStatusBarSettings;
- (id)_createFakeStatusBar;
- (void)_setFakeStatusBarEnabled:(_Bool)arg1;
- (void)_invalidateStatusBarAssertions;
- (void)updateStatusBarForLockScreenComeback;
- (void)updateStatusBarForLockScreenTeardown;
- (void)_updateLegibilitySettings;
- (void)_updateTintingView;
- (void)_updateWallpaperEffectView;
- (void)_updateIdleTimerBehavior;
- (void)_updateScrollingBehavior;
- (_Bool)_quickActionsSupported;
- (void)_updateQuickActions;
- (void)_updateControlCenterGrabber;
- (void)_updateHomeAffordance;
- (void)_updateFixedFooterView;
- (void)_updatePageContent;
- (void)_updateStatusBarBackground;
- (void)_updateStatusBar;
- (void)_updateProudLockViewUpdateSuspension;
- (void)_updateProudLockView;
- (void)_updateDateTimeView;
- (void)_updateForegroundView;
- (double)_alphaForTransitionFromHidden:(_Bool)arg1 toHidden:(_Bool)arg2 unhiddenAlpha:(double)arg3 timingFunction:(id)arg4;
- (double)_alphaForTransitionFromHidden:(_Bool)arg1 toHidden:(_Bool)arg2 timingFunction:(id)arg3;
- (struct CGPoint)_offsetForTransitionFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2 timingFunction:(id)arg3;
- (struct CGPoint)_finalizeOffset:(struct CGPoint)arg1 referenceFrame:(struct CGRect)arg2;
- (double)_valueForTransitionInterval:(CDStruct_3e878e9e)arg1 timingFunction:(id)arg2;
- (void)_updateBackground;
- (void)_updateSetupBehavior;
- (void)_updateRestrictedCapability:(unsigned long long)arg1 forAggregatorCapability:(long long)arg2;
- (void)_updateRestrictedBehavior;
- (void)_updateCameraBehavior;
- (void)_updateActiveBehaviorsForReason:(id)arg1 updatingAppearanceIfNeeded:(_Bool)arg2;
- (void)_updateActiveBehaviorsForReason:(id)arg1;
- (void)_updateActiveAppearanceForReason:(id)arg1;
- (_Bool)_shouldUpdateActiveAppearanceForReason:(id)arg1;
- (_Bool)_wouldUpdateActiveAppearance;
- (void)_updateLocalAppearanceForPresentation;
- (void)_updateAppearance:(id)arg1 forComponentType:(long long)arg2 shouldHide:(_Bool)arg3;
- (id)_presentationForParticipant:(id)arg1;
- (id)_appearanceForParticipant:(id)arg1;
- (id)_behaviorForParticipant:(id)arg1;
- (void)_updateLocalAppearanceForRequester:(id)arg1 animationSettings:(id)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_updateIdleTimerForEvent:(id)arg1;
- (void)_updateNotificationClearingTriggerForEvent:(id)arg1;
- (_Bool)_handleEvent:(id)arg1;
- (_Bool)_handleEventType:(long long)arg1;
- (unsigned long long)_indexOfPageViewControllerClass:(Class)arg1;
- (unsigned long long)_indexOfCameraPage;
- (unsigned long long)_indexOfMainPage;
- (unsigned long long)_indexOfTodayPage;
- (void)_updateVisibilityForPageViewControllersWithVisiblePageViewController:(id)arg1;
- (id)_eligiblePageViewControllers;
- (unsigned long long)_pageCapabilities;
- (void)_removeAllowedPageViewController:(id)arg1;
- (void)_addVisiblePageViewController:(id)arg1;
- (void)_loadViewsForRestrictedPagesIfPossible;
- (id)pageViewControllerAtIndex:(unsigned long long)arg1;
- (id)visiblePageViewController;
- (void)activatePage:(unsigned long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_presentPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setPluginViewController:(id)arg1;
- (_Bool)_isKnownTransitionConflictFrom:(id)arg1 to:(id)arg2;
- (double)_dateViewAlphaForCurrentWakeState;
- (void)_endAppearanceTransitionForPageViewControllersToVisible:(_Bool)arg1;
- (void)_beginAppearanceTransitionForPageViewControllersToVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_isPageContentHidden;
- (struct CGPoint)_slideableContentOffset;
- (_Bool)_isSlideableContentOnscreen;
- (_Bool)_isSlideableContentOffsetOnscreen:(struct CGPoint)arg1;
@property(readonly, nonatomic) SBDashBoardView *dashBoardView;
- (_Bool)_isSourceForHorizontalScrolling:(id)arg1;
- (_Bool)_overSlidingControlForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 isLocatedOverHorizontalContentRegionInViewController:(id)arg2;
- (id)_activeViewControllers;
- (id)_windowsFromViewControllers:(id)arg1;
- (id)dateView;
- (id)superviewForDateViewAnimation;
- (id)dashBoardIdleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 reason:(id)arg3;
- (void)idleTimerWillRefresh:(id)arg1;
- (void)idleTimerDidChange:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)requestIdleTimerBehaviorForReason:(id)arg1;
- (void)controllerWillCancelHorizontalScrolling:(id)arg1;
- (_Bool)controller:(id)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)mesaUnlockBehaviorConfigurationDidChange:(id)arg1;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
- (_Bool)isPresentingNotificationInLongLook;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
- (void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
- (void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
- (void)screenFadeAnimationController:(id)arg1 setRelevantViewsHidden:(_Bool)arg2 forRequester:(id)arg3;
- (void)invalidateLockScreenActionContext;
- (id)lockScreenActionContext;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)relinquishHostingOfWallpaperOverlay;
- (void)startHostingWallpaperOverlay:(id)arg1;
- (void)irisWallpaperView:(id)arg1 didReplaceGestureRecognizer:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)irisWallpaperViewIsInteractingDidChange:(id)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)arg1;
- (void)transitionSource:(id)arg1 didEndWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id)arg1 didUpdateTransitionWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id)arg1 willBeginWithType:(long long)arg2;
- (_Bool)shouldModifyPageScrolling;
- (void)cancelTransition;
- (_Bool)isTransitioningInteractively;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (void)dashBoardLegibilityProviderDidUpdate:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)_removeBedtimeGreetingBackgroundViewAnimated:(_Bool)arg1;
- (void)_addBedtimeGreetingBackgroundView;
- (_Bool)wantsLockScreenIdleTimer;
- (void)_resetIdleTimerIfTopMost;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
- (void)setLegibilitySettings:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, nonatomic) long long presentationType;
@property(readonly, nonatomic) long long presentationStyle;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
- (void)_conformsToSBDashBoardViewPresenting;
- (void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAppearanceForController:(id)arg1;
- (void)updateBehaviorForController:(id)arg1;
@property(readonly, copy, nonatomic) SBDashBoardPresentation *externalPresentation;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1;
- (id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
- (void)didCompleteTransitionOutOfLockScreen;
- (void)noteMenuButtonUp;
- (void)noteMenuButtonDown;
- (_Bool)shouldShowLockStatusBarTime;
- (id)_mesaUnlockBehavior;
- (void)_presentApplicationSceneEntity:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (_Bool)_canHandleTransitionRequest:(id)arg1;
- (_Bool)handleTransitionRequest:(id)arg1;
- (void)_attemptToUnlockToCameraCompletion:(CDUnknownBlockType)arg1;
- (void)_activateCameraAnimated:(_Bool)arg1 actions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_activateCameraAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShowingMediaControls:(_Bool)arg1;
- (_Bool)isShowingMediaControls;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(_Bool)arg1;
- (void)launchEmergencyDialerAnimated:(_Bool)arg1;
- (void)launchEmergencyDialer;
- (_Bool)isMakingEmergencyCall;
- (void)dismissSpotlightWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSpotlightWithReason:(unsigned long long)arg1;
- (void)launchSpotlightForSourceViewController:(id)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchSpotlightForSourceViewController:(id)arg1 interactive:(_Bool)arg2;
- (_Bool)shouldUnlockUIOnKeyDownEvent;
- (_Bool)isShowingOverheatUI;
- (void)noteResetRestoreStateUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (void)launchInCallAlert;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (void)setExpectsFaceContact:(_Bool)arg1;
- (_Bool)isMainPageVisible;
- (void)setInScreenOffMode:(_Bool)arg1 forAutoUnlock:(_Bool)arg2 fromUnlockSource:(int)arg3;
- (_Bool)isInScreenOffMode;
- (void)setBacklightLevel:(double)arg1;
- (void)cleanupInterstitialPresentationToPresented:(_Bool)arg1 inPlace:(_Bool)arg2;
- (void)updateInterstitialPresentationWithProgress:(double)arg1;
- (void)prepareForInterstitialPresentation;
- (_Bool)contentOccludesBackground;
- (void)jiggleLockIcon;
- (_Bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (_Bool)willUIUnlockFromSource:(int)arg1;
- (_Bool)isUnlockDisabled;
- (void)setAuthenticated:(_Bool)arg1;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 forceBiometricPresentation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isPasscodeLockVisible;
@property(readonly, nonatomic) _Bool externalLockProvidersShowPasscode;
@property(readonly, nonatomic) _Bool externalLockProvidersRequireUnlock;
- (long long)statusBarStyle;
- (_Bool)wantsTimeInStatusBar;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleHomeButtonPress;
- (_Bool)suppressesScreenshots;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesBanners;
- (void)dashBoardNotificationClearingTriggerDidFire:(id)arg1;
- (void)_listenForDisplayLayoutChanges:(_Bool)arg1;
- (void)_displayDidDisappearImplementation;
- (void)_displayWillDisappearImplementation;
- (void)_displayWillAppearImplementation;
- (void)_calculateAppearanceForCurrentOrientation;
- (id)_componentForHidingWithType:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentModalViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 animated:(_Bool)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_prepareForViewWillAppearIfNecessary;
- (void)updateQuickActionsVisibility;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)loadView;
- (void)removeDashBoardObserver:(id)arg1;
- (void)addDashBoardObserver:(id)arg1;
- (_Bool)isIdleTimerDisabled;
- (_Bool)isIdleTimerDisabledForReason:(id)arg1;
- (void)removeIdleTimerDisabledAssertionReason:(id)arg1;
- (void)addIdleTimerDisabledAssertionReason:(id)arg1;
- (void)unregisterExternalPresentationProvider:(id)arg1;
- (void)externalPresentationProviderPresentationChanged:(id)arg1;
- (void)registerExternalPresentationProvider:(id)arg1;
- (void)unregisterExternalLockProvider:(id)arg1;
- (void)externalLockProviderStateChanged:(id)arg1;
- (void)registerExternalLockProvider:(id)arg1;
- (void)unregisterExternalEventHandler:(id)arg1;
- (void)registerExternalEventHandler:(id)arg1;
- (void)unregisterExternalBehaviorProvider:(id)arg1;
- (void)externalBehaviorProviderBehaviorChanged:(id)arg1;
- (void)registerExternalBehaviorProvider:(id)arg1;
- (void)unregisterExternalAppearanceProvider:(id)arg1;
- (void)externalAppearanceProviderBehaviorChanged:(id)arg1;
- (void)registerExternalAppearanceProvider:(id)arg1;
- (void)resetMainPageContentOffset;
@property(readonly, nonatomic) long long effectiveInterfaceOrientation;
- (void)noteWillPresentForUserGesture;
- (_Bool)isShowingModalView;
- (void)setDashBoardIsVisible:(_Bool)arg1;
- (void)activateMainPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateTodayViewWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isWidgetExtensionWithIdentifierVisible:(id)arg1;
- (_Bool)isShowingTodayView;
@property(readonly, nonatomic) id <SBNotificationDestination> notificationDestination;
- (void)_addStateCaptureHandlers;
- (id)initWithPageViewControllers:(id)arg1 mainPageContentViewController:(id)arg2 legibilityProvider:(id)arg3;
- (id)initWithPageViewControllers:(id)arg1 mainPageContentViewController:(id)arg2;
- (unsigned long long)_dateTimeLayoutForPage:(id)arg1;
- (id)_pageForScrollPercent:(double)arg1;
- (double)_dateTimeInsetXForPage:(id)arg1;
- (_Bool)containsCenteredDateTimeLayout;
- (double)dateTimeMostExtremeTrailingX;
- (double)dateTimeMostExtremeLeadingX;
- (double)bottomContentInset;
- (double)listMinY;
- (double)dateBaselineToListY;
- (double)_timeLabelScrollPercentForDateTimeLayout:(unsigned long long)arg1;
- (double)timeLabelOffsetForScrollPercent:(double)arg1;
- (double)timeToSubtitleLabelBaselineDifferenceY;
- (double)timeLabelBaselineY;
- (void)_updateAccessibilityContentSizesIfNeeded;
- (void)_preferredContentSizeDidChange;

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

