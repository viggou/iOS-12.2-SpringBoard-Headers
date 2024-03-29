//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "DNDStateUpdateListener-Protocol.h"
#import "NCNotificationListCoalescingManagerDelegate-Protocol.h"
#import "NCNotificationListContentObserver-Protocol.h"
#import "NCNotificationListViewControllerDestinationDelegate-Protocol.h"
#import "NCNotificationListViewControllerUserInteractionDelegate-Protocol.h"
#import "NCNotificationManagementViewPresenterDelegate-Protocol.h"
#import "SBDashBoardAppearanceProviding-Protocol.h"
#import "SBDashBoardDNDBedtimeControllerObserver-Protocol.h"
#import "SBDashBoardDNDBedtimeGreetingDelegate-Protocol.h"
#import "SBDashBoardDateViewScrolling-Protocol.h"
#import "SBDashBoardNotificationAdjunctListViewControllerDelegate-Protocol.h"
#import "SBDashBoardNotificationDestination-Protocol.h"
#import "SBDashBoardStatusBarBackgroundIntersecting-Protocol.h"
#import "SBMotionGestureObserver-Protocol.h"
#import "SBNotificationHomeAffordanceControllerClient-Protocol.h"
#import "SBNotificationManagementDelegate-Protocol.h"
#import "SBNotificationManagementSuggestionDelegate-Protocol.h"
#import "_UIGestureStudyInteractionDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class BSTimer, DNDEventBehaviorResolutionService, DNDStateService, MTMaterialView, NCNotificationCombinedListViewController, NCNotificationListCoalescingManager, NCNotificationManagementViewPresenter, NCNotificationRequest, NSDate, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, SBDashBoardComponent, SBDashBoardDNDBedtimeController, SBDashBoardDNDBedtimeGreetingViewController, SBDashBoardLayoutStrategy, SBDashBoardNotificationAdjunctListViewController, SBFTouchPassThroughView, SBLockScreenSettings, UIColor, _UIGestureStudyInteraction, _UILegibilitySettings;
@protocol SBDashBoardCombinedListViewControllerDelegate, SBDashBoardNotificationDispatcher, SBDashBoardPageViewControllerProtocol;

@interface SBDashBoardCombinedListViewController : SBDashBoardViewControllerBase <NCNotificationListViewControllerUserInteractionDelegate, NCNotificationListViewControllerDestinationDelegate, SBDashBoardNotificationAdjunctListViewControllerDelegate, SBMotionGestureObserver, NCNotificationListContentObserver, SBDashBoardStatusBarBackgroundIntersecting, _UISettingsKeyObserver, SBNotificationHomeAffordanceControllerClient, NCNotificationListCoalescingManagerDelegate, SBDashBoardDNDBedtimeControllerObserver, DNDStateUpdateListener, SBNotificationManagementDelegate, SBNotificationManagementSuggestionDelegate, SBDashBoardDNDBedtimeGreetingDelegate, NCNotificationManagementViewPresenterDelegate, _UIGestureStudyInteractionDelegate, SBDashBoardNotificationDestination, SBDashBoardDateViewScrolling, SBDashBoardAppearanceProviding>
{
    NCNotificationCombinedListViewController *_listViewController;
    MTMaterialView *_captureOnlyMaterialView;
    SBFTouchPassThroughView *_clippingView;
    double _cachedAdjunctHeight;
    double _footerOffset;
    _Bool _listPresentingContent;
    _Bool _listDismissingContent;
    _Bool _listBeingLaidOut;
    NSHashTable *_notificationEffectViews;
    BSTimer *_significantUserInteractionTimer;
    NSDate *_screenOnDate;
    _Bool _listSuppressLongLookDismissal;
    SBDashBoardComponent *_dateViewComponent;
    SBDashBoardComponent *_statusBarBackgroundComponent;
    SBDashBoardComponent *_proudLockComponent;
    SBDashBoardComponent *_homeAffordanceComponent;
    SBDashBoardComponent *_footerCallToActionLabelComponent;
    _Bool _hasUserInteraction;
    SBDashBoardComponent *_statusBarComponent;
    NSMutableSet *_quickActionsHiddenReasons;
    SBDashBoardComponent *_quickActionsComponent;
    SBDashBoardDNDBedtimeController *_dndBedtimeController;
    SBDashBoardDNDBedtimeGreetingViewController *_dndBedtimeGreetingViewController;
    _UIGestureStudyInteraction *_gestureStudyInteraction;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _confirmedNotInPocket;
    _Bool _shouldDynamicallyCoalesce;
    _Bool _dndNotificationDeliveryDelayActive;
    _Bool _dndDrivingModeActive;
    _Bool _disableScrolling;
    _Bool _disableBackgroundAnimation;
    _Bool _footerCallToActionLabelHidden;
    _Bool _notificationContentHidden;
    _Bool _presentationDirtiedAppearance;
    _Bool _deviceAuthenticated;
    _Bool _dismissGestureEnabled;
    id <SBDashBoardCombinedListViewControllerDelegate> _delegate;
    id <SBDashBoardNotificationDispatcher> _dispatcher;
    SBDashBoardLayoutStrategy *_layoutStrategy;
    id <SBDashBoardPageViewControllerProtocol> _page;
    SBDashBoardNotificationAdjunctListViewController *_adjunctListViewController;
    NSMutableDictionary *_staticContentProviders;
    NCNotificationListCoalescingManager *_notificationListCoalescingManager;
    NCNotificationListCoalescingManager *_hiddenPreviewCoalescingManager;
    NCNotificationListCoalescingManager *_phoneNotificationCoalescingManager;
    NSMutableDictionary *_uncoalescedNotificationRequestThreads;
    NCNotificationRequest *_activeRaiseToListenNotificationRequest;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
    DNDStateService *_dndStateService;
    NSMutableOrderedSet *_filteredNotificationRequests;
    NSMutableSet *_clearedNotificationRequests;
    NSMutableDictionary *_notificationManagementSuggestionContentProviders;
    NSMutableSet *_sectionIdentifiersWithNotificationManagementSuggestions;
    NCNotificationRequest *_requestWithRemoteNotificationManagementSuggestion;
    double _scoreForRequestWithRemoteNotificationManagementSuggestion;
    SBLockScreenSettings *_lockScreenSettings;
    SBFTouchPassThroughView *_debugViewLeft;
    SBFTouchPassThroughView *_debugViewRight;
    NCNotificationManagementViewPresenter *_managementViewPresenter;
}

@property(retain, nonatomic) NCNotificationManagementViewPresenter *managementViewPresenter; // @synthesize managementViewPresenter=_managementViewPresenter;
@property(nonatomic, getter=_dismissGestureEnabled, setter=_setDismissGestureEnabled:) _Bool dismissGestureEnabled; // @synthesize dismissGestureEnabled=_dismissGestureEnabled;
@property(nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(nonatomic, getter=hasPresentationDirtiedAppearance) _Bool presentationDirtiedAppearance; // @synthesize presentationDirtiedAppearance=_presentationDirtiedAppearance;
@property(nonatomic, getter=isNotificationContentHidden) _Bool notificationContentHidden; // @synthesize notificationContentHidden=_notificationContentHidden;
@property(nonatomic, getter=_footerCallToActionLabelHidden, setter=_setFooterCallToActionLabelHidden:) _Bool footerCallToActionLabelHidden; // @synthesize footerCallToActionLabelHidden=_footerCallToActionLabelHidden;
@property(nonatomic, getter=_disableBackgroundAnimation, setter=_setDisableBackgroundAnimation:) _Bool disableBackgroundAnimation; // @synthesize disableBackgroundAnimation=_disableBackgroundAnimation;
@property(nonatomic, getter=_disableScrolling, setter=_setDisableScrolling:) _Bool disableScrolling; // @synthesize disableScrolling=_disableScrolling;
@property(retain, nonatomic) SBFTouchPassThroughView *debugViewRight; // @synthesize debugViewRight=_debugViewRight;
@property(retain, nonatomic) SBFTouchPassThroughView *debugViewLeft; // @synthesize debugViewLeft=_debugViewLeft;
@property(retain, nonatomic) SBLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
@property(nonatomic) double scoreForRequestWithRemoteNotificationManagementSuggestion; // @synthesize scoreForRequestWithRemoteNotificationManagementSuggestion=_scoreForRequestWithRemoteNotificationManagementSuggestion;
@property(retain, nonatomic) NCNotificationRequest *requestWithRemoteNotificationManagementSuggestion; // @synthesize requestWithRemoteNotificationManagementSuggestion=_requestWithRemoteNotificationManagementSuggestion;
@property(retain, nonatomic) NSMutableSet *sectionIdentifiersWithNotificationManagementSuggestions; // @synthesize sectionIdentifiersWithNotificationManagementSuggestions=_sectionIdentifiersWithNotificationManagementSuggestions;
@property(retain, nonatomic) NSMutableDictionary *notificationManagementSuggestionContentProviders; // @synthesize notificationManagementSuggestionContentProviders=_notificationManagementSuggestionContentProviders;
@property(retain, nonatomic) NSMutableSet *clearedNotificationRequests; // @synthesize clearedNotificationRequests=_clearedNotificationRequests;
@property(retain, nonatomic) NSMutableOrderedSet *filteredNotificationRequests; // @synthesize filteredNotificationRequests=_filteredNotificationRequests;
@property(nonatomic, getter=isDndDrivingModeActive) _Bool dndDrivingModeActive; // @synthesize dndDrivingModeActive=_dndDrivingModeActive;
@property(nonatomic, getter=isDndNotificationDeliveryDelayActive) _Bool dndNotificationDeliveryDelayActive; // @synthesize dndNotificationDeliveryDelayActive=_dndNotificationDeliveryDelayActive;
@property(retain, nonatomic) DNDStateService *dndStateService; // @synthesize dndStateService=_dndStateService;
@property(retain, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService; // @synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService;
@property(retain, nonatomic) NCNotificationRequest *activeRaiseToListenNotificationRequest; // @synthesize activeRaiseToListenNotificationRequest=_activeRaiseToListenNotificationRequest;
@property(nonatomic) _Bool shouldDynamicallyCoalesce; // @synthesize shouldDynamicallyCoalesce=_shouldDynamicallyCoalesce;
@property(retain, nonatomic) NSMutableDictionary *uncoalescedNotificationRequestThreads; // @synthesize uncoalescedNotificationRequestThreads=_uncoalescedNotificationRequestThreads;
@property(retain, nonatomic) NCNotificationListCoalescingManager *phoneNotificationCoalescingManager; // @synthesize phoneNotificationCoalescingManager=_phoneNotificationCoalescingManager;
@property(retain, nonatomic) NCNotificationListCoalescingManager *hiddenPreviewCoalescingManager; // @synthesize hiddenPreviewCoalescingManager=_hiddenPreviewCoalescingManager;
@property(retain, nonatomic) NCNotificationListCoalescingManager *notificationListCoalescingManager; // @synthesize notificationListCoalescingManager=_notificationListCoalescingManager;
@property(retain, nonatomic) NSMutableDictionary *staticContentProviders; // @synthesize staticContentProviders=_staticContentProviders;
@property(retain, nonatomic) SBDashBoardNotificationAdjunctListViewController *adjunctListViewController; // @synthesize adjunctListViewController=_adjunctListViewController;
@property(nonatomic) __weak id <SBDashBoardPageViewControllerProtocol> page; // @synthesize page=_page;
@property(nonatomic, getter=_hasUserInteraction, setter=_setHasUserInteraction:) _Bool hasUserInteraction; // @synthesize hasUserInteraction=_hasUserInteraction;
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak id <SBDashBoardCombinedListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasContent; // @synthesize hasContent=_listPresentingContent;
- (void).cxx_destruct;
- (void)_testingCoalesceExpandedBundleForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_testingExpandCoalescedBundleForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_testingNotificationRequestWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (id)notificationListScrollView;
- (void)clearAll;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)_setQuickActionsHidden:(_Bool)arg1 forReason:(id)arg2;
- (void)_dismissDNDBedtimeGreetingViewAnimated:(_Bool)arg1;
- (void)_evaluateShouldShowGreeting:(id)arg1 animated:(_Bool)arg2;
- (id)metadataForTriggeredInteraction:(id)arg1;
- (void)dismissDNDBedtimeGreetingViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dndBedtimeControllerShowGreetingStateDidChange:(id)arg1 animated:(_Bool)arg2;
- (void)dndBedtimeControllerActiveStateDidChange:(id)arg1;
- (_Bool)notificationListCoalescingManager:(id)arg1 shouldCoalesceBySectionNotificationRequest:(id)arg2;
- (_Bool)notificationListCoalescingManager:(id)arg1 isExpandedCoalescedBundleForNotificationRequest:(id)arg2 inSection:(unsigned long long)arg3;
- (void)notificationListCoalescingManager:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
- (void)notificationListCoalescingManager:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)notificationListCoalescingManager:(id)arg1 requestsReloadingNotificationRequests:(id)arg2 inSection:(unsigned long long)arg3 delayAnimation:(_Bool)arg4 clearCache:(_Bool)arg5;
- (void)notificationListCoalescingManager:(id)arg1 requestsUpdatingNotificationRequests:(id)arg2 inSection:(unsigned long long)arg3 delayAnimation:(_Bool)arg4;
- (void)notificationListCoalescingManager:(id)arg1 requestsRemovingNotificationRequests:(id)arg2 inSection:(unsigned long long)arg3 delayAnimation:(_Bool)arg4;
- (void)notificationListCoalescingManager:(id)arg1 requestsRemovingNotificationRequest:(id)arg2;
- (void)notificationListCoalescingManager:(id)arg1 requestsInsertingNotificationRequests:(id)arg2 inSection:(unsigned long long)arg3 delayAnimation:(_Bool)arg4;
- (void)notificationListCoalescingManager:(id)arg1 requestsInsertingNotificationRequest:(id)arg2;
- (void)_evaluateGestureStudyEnabledState;
- (unsigned long long)_dynamicCoalescingThreshold;
- (void)_turnOffDynamicCoalescingIfNecessary;
- (unsigned long long)_incomingSectionAllNotificationRequestsCount;
- (void)_turnOnDynamicCoalescingIfNecessary;
- (void)_updateNotificationCoalescingForUpdatedSectionSettings:(id)arg1;
- (_Bool)_uncoalescedNotificationRequestThreadsCount;
- (void)_removeCoalescedNotificationRequestFromHistorySectionIfNecessary:(id)arg1;
- (_Bool)_isCoalescingIdentifier:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)_coalesceExpandedBundlesIfNecessaryForSectionIdentifier:(id)arg1 inSection:(unsigned long long)arg2;
- (void)_coalesceExpandedBundlesIfNecessaryForSectionIdentifier:(id)arg1;
- (void)_coalesceExpandedBundleForCoalescingIdentifier:(id)arg1 inSection:(unsigned long long)arg2;
- (void)_coalesceExpandedBundlesInSection:(unsigned long long)arg1;
- (void)_updateUncoalescedNotificationRequestThreadsOnRemovingNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (void)_updateUncoalescedNotificationRequestThreadsOnRemovingNotificationRequest:(id)arg1;
- (id)_notificationRequestsForCoalescingIdentifier:(id)arg1 inSection:(unsigned long long)arg2;
- (void)_recoalesceUncoalescedNotificationRequests;
- (void)_expandCoalescedBundleForNotificationRequest:(id)arg1;
- (_Bool)_shouldExpandCoalescedBundleForNotificationRequest:(id)arg1;
- (_Bool)_isNotificationRequest:(id)arg1 coalescedByNotificationListCoalescingManager:(id)arg2;
- (_Bool)_shouldCoalesceNotificationRequest:(id)arg1 targetSection:(unsigned long long)arg2;
- (_Bool)_shouldCoalesceNotificationRequest:(id)arg1;
- (_Bool)_isGroupingSettingOnForNotificationRequest:(id)arg1;
- (_Bool)_isExpandedCoalescedBundleForNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (_Bool)_isExpandedCoalescedBundleForNotificationRequest:(id)arg1;
- (void)_removeClearedNotificationRequestIfNecessary:(id)arg1;
- (_Bool)_isClearedNotificationRequest:(id)arg1;
- (void)_screenTimeExpirationApplicationsDidChange:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (void)_repostFilteredNotificationRequestsWithSectionIdentifier:(id)arg1;
- (void)_repostFilteredNotificationRequests;
- (void)_removeFilteredNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_filterNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (unsigned long long)_matchingIndexInFilteredListForNotificationRequest:(id)arg1;
- (_Bool)_isNotificationRequestInFilteredList:(id)arg1;
- (_Bool)_shouldFilterNotificationRequest:(id)arg1;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)_updateNotificationListWhenDNDIsDeactivated;
- (void)_updateNotificationListWhenDNDIsActivated;
- (_Bool)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1;
- (void)_updateRaiseGestureDetectionForNotificationRequest:(id)arg1;
- (_Bool)_allowsDateViewOrProudLockScroll;
- (void)_hideRequestsFromIncomingSectionListIfNecessaryForSectionSettings:(id)arg1;
- (void)_hideOrShowRequestsForParentNotificationSectionSettings:(id)arg1;
- (void)_hideOrShowRequestsForNotificationSectionSettings:(id)arg1;
- (_Bool)_notificationSectionSettingsHidesSection:(id)arg1;
- (void)_hideOrShowNotificationSectionForAuthenticationChange;
- (void)_invalidateTimerIfSnoozeAlarmNotificationStaticContentProvider:(id)arg1;
- (id)_snoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg1 viewController:(id)arg2;
- (id)_threadIdentifierForNotificationRequest:(id)arg1;
- (id)_identifierForNotificationRequest:(id)arg1;
- (double)_minListHeightForPadding;
- (_Bool)_shouldPadBottomSpacing;
- (double)_minInsetsToPushDateOffScreen;
- (struct CGSize)_adjunctListViewSizeIncludingSpacing;
- (struct CGSize)_adjunctListViewSize;
- (struct UIEdgeInsets)_listViewDefaultContentInsets;
- (struct CGRect)_suggestedListViewFrame;
- (void)_performClearActionForNotificationsCoalescedWithNotificationRequest:(id)arg1;
- (_Bool)_isNotificationRequestForRecentsSection:(id)arg1;
- (void)_migrateAllPersistentNotificationRequestsFromSection:(unsigned long long)arg1 toSection:(unsigned long long)arg2;
- (void)_migrateHiddenPreviewNotificationRequestsToCoalescingManagerFromSection:(unsigned long long)arg1 toSection:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)_migrateAllCoalescedNotificationRequestsFromSection:(unsigned long long)arg1 toSection:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)_updateNotificationListOnDeviceReauthentication;
- (void)_enumerateAllCoalescingManagersWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateAllNotificationListGroupingSectionsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)_targetSectionForNotificationRequest:(id)arg1;
- (id)_coalescingManagerForNotificationRequest:(id)arg1 targetSection:(unsigned long long)arg2;
- (id)_coalescingManagerForNotificationRequest:(id)arg1;
- (_Bool)_isWalletNotificationRequest:(id)arg1;
- (_Bool)_isClockSnoozeAlarmNotificationRequest:(id)arg1;
- (_Bool)_isPhoneNotificationRequest:(id)arg1;
- (void)updateAppearanceForStatusBarBackgroundHidden:(_Bool)arg1;
@property(readonly, nonatomic) double distanceFromBarToContent;
- (void)updateAppearanceForHidden:(_Bool)arg1 offset:(struct CGPoint)arg2;
@property(readonly, nonatomic) double topContentInset;
@property(readonly, nonatomic) double clippingOffset;
- (void)_setAllowsCriticalAlerts:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setDeliverQuietly:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setAllowsNotifications:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_notificationManagementSuggestionResponse:(long long)arg1 forNotificationRequest:(id)arg2;
- (void)_hideOrRevealSiriSuggestionsForAuthenticationChange;
- (void)_removeSuggestionIfNecessaryForNotificationRequest:(id)arg1;
- (void)_checkIfNotificationManagementSuggestionIsNecessaryForNotificationRequest:(id)arg1;
- (void)_addRemoteNotificationManagementSuggestionForRequest:(id)arg1 withResponse:(_Bool)arg2 score:(double)arg3 sectionSettings:(id)arg4 isPromotingSuggestion:(_Bool)arg5;
- (void)_createNewPromotingSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_createNewQuietingSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_addSuggestionForNotificationRequest:(id)arg1 managementContentProvider:(id)arg2;
- (void)_coalesceHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_coalesceHiddenPreviewNotifications;
- (void)_expandHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_expandHiddenPreviewNotifications;
- (id)_hiddenPreviewContentProvidersToRevealContentFromProviders:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)_updateHiddenPreviewContentProvidersForAuthenticationStateChange:(id)arg1;
- (_Bool)_isContentSuppressedForNotificationRequest:(id)arg1;
- (unsigned long long)_groupingSettingForNotificationRequest:(id)arg1;
- (unsigned long long)_contentPreviewSettingForNotificationRequest:(id)arg1;
- (id)_notificationSectionSettingsForSectionIdentifier:(id)arg1;
- (void)_requestAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performOperationWithAuthenticationIfNecessaryForRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (double)_statusBarHeight;
- (void)_updateCaptureOnlyMaterialView;
- (_Bool)_allowNotificationsRevealPolicy;
- (struct CGPoint)_determineMaxContentOffsetForContentInset:(struct UIEdgeInsets)arg1;
- (double)_sanitizedContentOffset:(double)arg1 forContentInset:(struct UIEdgeInsets)arg2;
- (void)_updateListViewContentInset;
- (void)_layoutListView;
- (void)_updatePresentation;
- (void)_performSelfCorrectingListViewAction:(CDUnknownBlockType)arg1;
- (void)_setListHasContent:(_Bool)arg1;
- (void)layoutListView;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)_stopScreenOnTimer;
- (void)_startScreenOnTimer;
- (long long)presentationTransition;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)didReceiveRaiseGesture;
- (void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 keepNotificationsForSectionIdentifierForNotificationRequest:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 hasUpdatedContentForRequest:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
- (void)contentChanged:(_Bool)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)notificationListViewController:(id)arg1 requestsCoalescingNotificationRequest:(id)arg2 inSection:(unsigned long long)arg3;
- (id)notificationListViewController:(id)arg1 coalescingIdentifierForNotificationRequest:(id)arg2;
- (id)notificationListViewController:(id)arg1 leadingNotificationRequestForCoalescingIdentifier:(id)arg2 inSection:(unsigned long long)arg3;
- (_Bool)notificationListViewController:(id)arg1 isExpandedCoalescedBundleForNotificationRequest:(id)arg2 inSection:(unsigned long long)arg3;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequestsForCoalescingIdentifier:(id)arg2 inSection:(unsigned long long)arg3;
- (void)notificationListViewController:(id)arg1 requestsCoalescingExpandedBundleForCoalescingIdentifier:(id)arg2 inSection:(unsigned long long)arg3;
- (void)notificationListViewController:(id)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)notificationListViewController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestsPresentingManagementViewForNotificationRequest:(id)arg2 withPresentingView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)legibilitySettingsForNotificationListViewController:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListViewController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationListViewController:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForNotificationListViewController:(id)arg1;
- (id)notificationListViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (_Bool)notificationListViewController:(id)arg1 shouldSuppressContentForNotificationRequest:(id)arg2;
- (_Bool)notificationListViewController:(id)arg1 shouldHorizontallyPanNotificationCell:(id)arg2 withTouch:(id)arg3;
- (void)notificationListViewController:(id)arg1 willDismissLongLookForNotificationViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)notificationListViewController:(id)arg1 willPresentLongLookForNotificationViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)notificationListViewController:(id)arg1 didRemoveNotificationRequestInLongLook:(id)arg2;
- (void)notificationListViewController:(id)arg1 willRemoveNotificationRequestInLongLook:(id)arg2;
- (void)notificationListViewController:(id)arg1 setRaiseGestureDetectionEnabled:(_Bool)arg2 forNotificationRequest:(id)arg3;
- (void)notificationListViewController:(id)arg1 willDismissRemainingContentWithTransitionCoordinator:(id)arg2;
- (void)notificationListViewControllerIsUpdatingContent:(id)arg1;
- (void)notificationListViewController:(id)arg1 willPresentInitialContentWithTransitionCoordinator:(id)arg2;
- (_Bool)notificationListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (void)notificationListViewController:(id)arg1 didEndDisplayingCellForNotificationRequest:(id)arg2;
- (id)notificationListViewController:(id)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 withLongLook:(_Bool)arg3;
- (_Bool)notificationListViewController:(id)arg1 isPresentingNotificationManagementSuggestionForNotificationRequest:(id)arg2;
- (id)notificationListViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 viewController:(id)arg3;
- (id)notificationUsageTrackingStateForNotificationListViewController:(id)arg1;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)notificationListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)notificationListViewController:(id)arg1 shouldFinishLongLookTransitionForNotification:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)notificationListViewController:(id)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(id)arg3;
- (_Bool)notificationListViewControllerShouldAllowRecentNotificationsReveal:(id)arg1;
- (double)defaultRestingOffsetExcludingAdjunct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)notificationListViewController:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListViewController:(id)arg1 willBeginUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListViewControllerDidEndScrolling:(id)arg1;
- (void)notificationListViewControllerDidScroll:(id)arg1;
- (void)notificationListViewControllerDidSignificantUserInteraction:(id)arg1;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
- (_Bool)isPresentingNotificationInLongLook;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (void)adjunctListViewController:(id)arg1 didUpdateWithSize:(struct CGSize)arg2;
- (double)interItemSpacingToMimicForAdjunctListViewController:(id)arg1;
- (struct UIEdgeInsets)insetMarginsToMimicForAdjunctListViewController:(id)arg1;
- (struct CGSize)sizeToMimicForAdjunctListViewController:(id)arg1;
- (id)groupNameForRecipe:(long long)arg1 adjunctListViewController:(id)arg2;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (struct CGSize)effectiveContentSizeForScrollView:(id)arg1;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSString *listViewControllerBackgroundGroupName;
- (void)resetContentOffset;
@property(readonly, nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long participantState;
@property(readonly) Class superclass;

@end

