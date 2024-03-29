//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BBObserverDelegate-Protocol.h"
#import "FBSDisplayLayoutObserver-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "SBApplicationRestrictionObserver-Protocol.h"
#import "SBFolderControllerDelegate-Protocol.h"
#import "SBHomeScreenIconTransitionAnimatorDelegate-Protocol.h"
#import "SBIconModelApplicationDataSource-Protocol.h"
#import "SBIconModelDelegate-Protocol.h"
#import "SBIconViewDelegate-Protocol.h"
#import "SBIconViewMapDelegate-Protocol.h"
#import "SBIconViewQuerying-Protocol.h"
#import "SBNestingViewControllerDelegate-Protocol.h"
#import "SBPopoverExtensionProviderDelegate-Protocol.h"
#import "SBSearchGestureObserver-Protocol.h"
#import "SBTodayViewPresentationProgressObserver-Protocol.h"
#import "SBUIAppIconForceTouchControllerDataSource-Protocol.h"
#import "SBUIAppIconForceTouchControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class BBObserver, BSEventQueue, BSTimer, FBSDisplayLayoutMonitor, NSHashTable, NSIndexPath, NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer, SBAlertItemsController, SBAlertManager, SBApplicationController, SBApplicationPlaceholderController, SBAssistantController, SBDisableActiveInterfaceOrientationChangeAssertion, SBFloatingDockBehaviorAssertion, SBFolder, SBFolderStatsQueryableMetric, SBHomeScreenIconTransitionAnimator, SBIconAccessoryViewMap, SBIconColorSettings, SBIconDragManager, SBIconLabelAccessoryViewMap, SBIconListView, SBIconModel, SBIconPreviousLocationTracker, SBIconView, SBIconViewMap, SBIconVisibilityService, SBLeafIcon, SBMainDisplayPolicyAggregator, SBRootFolderController, SBSearchGesture, SBUIAppIconForceTouchController, SBUIController, SBWorkspaceTransitionRequest, UIImpactFeedbackGenerator, _UILegibilitySettings;
@protocol SBUIPopoverProviding;

@interface SBIconController : UIViewController <SBNestingViewControllerDelegate, BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, SBFolderControllerDelegate, UIGestureRecognizerDelegate, SBUIAppIconForceTouchControllerDataSource, SBUIAppIconForceTouchControllerDelegate, SBTodayViewPresentationProgressObserver, SBSearchGestureObserver, UIPopoverPresentationControllerDelegate, FBSDisplayLayoutObserver, SBPopoverExtensionProviderDelegate, SBIconViewDelegate, SBIconModelDelegate, SBIconViewMapDelegate, SBIconModelApplicationDataSource, SBIconViewQuerying, SBHomeScreenIconTransitionAnimatorDelegate>
{
    NSSet *_visibleTags;
    NSSet *_hiddenTags;
    SBIconModel *_iconModel;
    _Bool _needsRelayout;
    _Bool _sendITunesNotification;
    BBObserver *_bbObserver;
    NSMutableSet *_displayIDsWithBadgingEnabled;
    SBRootFolderController *_rootFolderController;
    SBFolder *_closingFolder;
    _Bool _rotating;
    SBLeafIcon *_iconToReveal;
    _Bool _isEditing;
    _Bool _animatingFolder;
    _Bool _allowsUninstall;
    double _iconAlpha;
    double _oldScrollOffset;
    _Bool _keyboardIsRotating;
    _Bool _isAnimatingFolderCreation;
    _Bool _isAnimatingForUnscatter;
    _Bool _isAnimatingSignficantly;
    unsigned long long _maxIconViewsInHierarchy;
    SBIconColorSettings *_iconColorSettings;
    SBApplicationController *_override_applicationController;
    SBApplicationPlaceholderController *_override_applicationPlaceholderController;
    SBUIController *_override_userInterfaceController;
    SBMainDisplayPolicyAggregator *_override_policyAggregator;
    SBAlertManager *_override_alertManager;
    SBAlertItemsController *_override_alertItemsController;
    SBAssistantController *_override_assistantController;
    SBSearchGesture *_searchGesture;
    _Bool _showingSearch;
    _UILegibilitySettings *_legibilitySettings;
    NSIndexPath *_indexPathToResetTo;
    _Bool _performedInitialLayout;
    SBUIAppIconForceTouchController *_appIconForceTouchController;
    SBIconView *_appIconForceTouchIconView;
    BSTimer *_appIconForceTouchEditingScoreTimer;
    NSTimer *_appIconForceTouchEditingTimer;
    long long _appIconForceTouchEditingScore;
    _Bool _appIconForceTouchSkipCancelAllTouches;
    SBWorkspaceTransitionRequest *_currentTransitionRequest;
    SBHomeScreenIconTransitionAnimator *_currentAnimator;
    NSMutableArray *_currentExpandCompletions;
    NSMutableArray *_currentCollapseCompletions;
    BSEventQueue *_transitionEventQueue;
    id <SBUIPopoverProviding> _popoverProvider;
    SBFolderStatsQueryableMetric *_queryableFolderMetric;
    NSMutableSet *_touchedIconViews;
    NSMutableArray *_iconTouchesFinishedBlocks;
    NSHashTable *_todayViewPresentationObservers;
    NSHashTable *_folderPresentationObservers;
    _Bool _isPresentingPopOver;
    UIImpactFeedbackGenerator *_iconEditingFeedbackBehavior;
    SBFloatingDockBehaviorAssertion *_popOverFloatingDockBehaviorAssertion;
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    SBDisableActiveInterfaceOrientationChangeAssertion *_orientationChangeDeferralAssertion;
    SBIconViewMap *_homescreenIconViewMap;
    SBIconAccessoryViewMap *_homescreenIconAccessoryViewMap;
    SBIconLabelAccessoryViewMap *_homescreenIconLabelAccessoryViewMap;
    SBIconVisibilityService *_iconVisibilityService;
    SBIconPreviousLocationTracker *_previousIconLocationTracker;
    _Bool _hasRestrictedEnforcedLayout;
    _Bool _uninstallingSystemAppsRestricted;
    SBIconDragManager *_iconDragManager;
    SBIconView *_highlightedIconView;
    NSTimer *_delayedLaunchRequestTimer;
    NSTimer *_editingEndTimer;
    CDUnknownBlockType _searchGestureCompletionHandler;
    NSTimer *_popoverDelayTimer;
    NSTimer *_iconEditingFeedbackWarmTimer;
}

+ (_Bool)_supportsPopovers;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *iconEditingFeedbackWarmTimer; // @synthesize iconEditingFeedbackWarmTimer=_iconEditingFeedbackWarmTimer;
@property(retain, nonatomic) NSTimer *popoverDelayTimer; // @synthesize popoverDelayTimer=_popoverDelayTimer;
@property(copy, nonatomic) CDUnknownBlockType searchGestureCompletionHandler; // @synthesize searchGestureCompletionHandler=_searchGestureCompletionHandler;
@property(retain, nonatomic) NSTimer *editingEndTimer; // @synthesize editingEndTimer=_editingEndTimer;
@property(retain, nonatomic) NSTimer *delayedLaunchRequestTimer; // @synthesize delayedLaunchRequestTimer=_delayedLaunchRequestTimer;
@property(retain, nonatomic) SBIconView *highlightedIconView; // @synthesize highlightedIconView=_highlightedIconView;
@property(nonatomic, getter=isUninstallingSystemAppsRestricted) _Bool uninstallingSystemAppsRestricted; // @synthesize uninstallingSystemAppsRestricted=_uninstallingSystemAppsRestricted;
@property(nonatomic) _Bool hasRestrictedEnforcedLayout; // @synthesize hasRestrictedEnforcedLayout=_hasRestrictedEnforcedLayout;
@property(readonly, nonatomic) SBIconDragManager *iconDragManager; // @synthesize iconDragManager=_iconDragManager;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)_runPopOverPresentationTest:(id)arg1 withOptions:(id)arg2;
- (void)_runAppIconForceTouchTest:(id)arg1 withOptions:(id)arg2;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)_iconForceTouchControllerDidDismiss:(id)arg1;
- (void)_iconForceTouchControllerWillPresent:(id)arg1;
- (id)_aggregateLoggingAppKeyForIcon:(id)arg1;
- (_Bool)appIconForceTouchController:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forGestureRecognizer:(id)arg4;
- (void)appIconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 willDismissForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 didPresentForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 willPresentForGestureRecognizer:(id)arg2;
- (_Bool)appIconForceTouchController:(id)arg1 shouldHandleGestureRecognizer:(id)arg2;
- (_Bool)_iconViewInDockOrFolder:(id)arg1;
- (struct CGPoint)appIconForceTouchController:(id)arg1 zoomDownCenterForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 zoomDownViewForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 parallaxSettingsForGestureRecognizer:(id)arg2;
- (double)appIconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2;
- (struct UIEdgeInsets)appIconForceTouchController:(id)arg1 iconImageInsetsForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutItemsForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationBundleURLForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationBundleIdentifierForGestureRecognizer:(id)arg2;
- (struct CGRect)appIconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2;
- (_Bool)_shouldHideAppIconForceTouchInfoForApplication:(id)arg1;
- (_Bool)_isHostedByCoverSheet;
- (_Bool)_appIconForceTouchGestureRecognizerShouldBegin;
- (void)_cancelAppIconForceTouchGestureAndBeginEditing;
- (void)_handleAppIconForceTouchGestureRecognizer:(id)arg1;
- (void)_dismissAppIconForceTouchControllerIfNecessaryAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isAppIconForceTouchControllerPeekingOrShowing;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(struct CGRect)arg2;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (struct UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (_Bool)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (_Bool)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (double)minimumHomeScreenScaleForFolderController:(id)arg1;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (Class)controllerClassForFolder:(id)arg1;
- (Class)_controllerClassForFolderClass:(Class)arg1;
- (id)animator:(id)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(id)arg3;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)firstPageLeafIdentifiers;
- (id)defaultIconState;
- (id)allApplications;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)_updateEnabledBadgesSetWithSections:(id)arg1;
- (_Bool)_badgesAreEnabledForSectionInfo:(id)arg1;
- (id)accessibilityTintColorForIconView:(id)arg1;
- (_Bool)iconAllowsBadging:(id)arg1;
- (long long)closeBoxTypeForIconView:(id)arg1;
- (void)iconView:(id)arg1 willUseDragPreview:(id)arg2 session:(id)arg3;
- (void)iconView:(id)arg1 willRemoveLabelIconAccessoryView:(id)arg2;
- (id)iconView:(id)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (void)iconView:(id)arg1 willRemoveIconAccessoryView:(id)arg2;
- (id)iconView:(id)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (id)iconAccessoryViewMapForIconView:(id)arg1;
- (id)launchActivationSettingsForIconView:(id)arg1;
- (id)launchURLForIconView:(id)arg1;
- (id)launchActionsForIconView:(id)arg1;
- (void)iconView:(id)arg1 willAnimateDragCancelWithAnimator:(id)arg2;
- (void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3;
- (id)iconViewWillCancelDrag:(id)arg1;
- (void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3;
- (_Bool)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
- (id)requiredContextIDsForDragSessionInIconView:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
- (_Bool)iconViewCanBeginDrags:(id)arg1;
- (_Bool)iconViewDisplaysCloseBox:(id)arg1;
- (_Bool)iconViewDisplaysBadges:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (_Bool)iconShouldAllowCloseBoxTap:(id)arg1;
- (_Bool)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (void)iconTapped:(id)arg1;
- (_Bool)iconShouldAllowTap:(id)arg1 disallowedReason:(id *)arg2;
- (_Bool)iconShouldAllowTap:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (void)iconTouchBegan:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverRequestsDismiss:(id)arg1;
- (id)_containerViewControllerForPopOvers;
- (void)_dismissPopOverCleanUp;
- (void)_clearPopoverTimer;
- (void)dismissPopOverAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)isPresentingPopOver;
- (_Bool)_showPopOverIfPossibleForApplication:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_canShowPopover;
- (void)iconView:(id)arg1 willChangeToIcon:(id)arg2;
- (void)viewMap:(id)arg1 configureIconView:(id)arg2;
- (long long)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (unsigned long long)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
- (Class)iconViewClassForIcon:(id)arg1 location:(long long)arg2;
- (_Bool)viewMap:(id)arg1 shouldRecycleView:(id)arg2;
- (id)windowForRecycledViewsInViewMap:(id)arg1;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (void)didDeleteIconState:(id)arg1;
- (void)didSaveIconState:(id)arg1;
- (_Bool)canSaveIconState:(id)arg1;
- (id)iconModel:(id)arg1 customInsertionIndexPathForIcon:(id)arg2 inRootFolder:(id)arg3;
- (id)placeholdersByDisplayIDForIconModel:(id)arg1;
- (id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
- (_Bool)canAddDownloadingIconForApplication:(id)arg1;
- (_Bool)canAddWebClip:(id)arg1;
- (_Bool)supportsDock;
- (unsigned long long)maxColCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxIconCountForDock;
- (unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
- (unsigned long long)maxListCountForFolders;
@property(readonly, nonatomic) SBSearchGesture *searchGesture;
- (id)homescreenIconLabelAccessoryViewMap;
- (id)homescreenIconAccessoryViewMap;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(long long)arg2;
- (id)iconViewForIcon:(id)arg1 location:(long long)arg2;
- (id)_folderSettings;
@property(readonly, nonatomic) SBIconViewMap *homescreenIconViewMap;
- (void)noteIconStateChangedExternally;
- (_Bool)importIconState:(id)arg1;
- (void)_sizeCategoryDidChange:(id)arg1;
@property(retain, nonatomic) SBIconModel *model;
- (void)_selectIconModel:(_Bool)arg1;
- (id)_viewMaps;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_iconModelDidLayout:(id)arg1;
- (void)_iconModelWillLayout:(id)arg1;
- (void)_iconModelDidReloadIcons:(id)arg1;
- (_Bool)relayout;
@property(readonly, nonatomic, getter=isTransitioningHomeScreenState) _Bool transitioningHomeScreenState;
- (void)dismissTodayViewSearchAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isShowingOrTransitioningToSearchableTodayView;
- (_Bool)_isShowingSearchableTodayView;
- (_Bool)_isShowingTodayViewSearchOrTransitioning;
- (_Bool)_isShowingTodayViewSearch;
- (_Bool)_isShowingPullDownSearchOrTransitioning;
- (_Bool)_isShowingPullDownSearch;
- (_Bool)isShowingOrTransitioningToTodayView;
- (_Bool)isShowingTodayView;
- (_Bool)isShowingSpotlightOrTodayView;
- (_Bool)isShowingPullDownOrTodayViewSearch;
- (_Bool)_dismissRightEdgeTodayView:(_Bool)arg1;
- (_Bool)_presentRightEdgeTodayView:(_Bool)arg1;
- (_Bool)_dismissTodayViewSpotlight:(_Bool)arg1;
- (_Bool)_presentTodayViewSpotlight:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_dismissTopEdgeSpotlight:(_Bool)arg1;
- (_Bool)_presentTopEdgeSpotlight:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)dismissSpotlightAnimated:(_Bool)arg1 enqueueDismissal:(_Bool)arg2;
- (_Bool)dismissSpotlightOrTodayViewAnimated:(_Bool)arg1 enqueueDismissal:(_Bool)arg2;
- (_Bool)_dismissSpotlight:(_Bool)arg1 orTodayView:(_Bool)arg2 animated:(_Bool)arg3 enqueueDismissal:(_Bool)arg4;
- (_Bool)dismissSpotlightOrTodayViewAnimated:(_Bool)arg1;
- (_Bool)presentSpotlightFromSource:(unsigned long long)arg1 fromBreadcrumb:(_Bool)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)presentSpotlightFromBreadcrumb:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)activateTodayViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeFolderPresentationObserver:(id)arg1;
- (void)addFolderPresentationObserver:(id)arg1;
- (void)didEndTodayViewTransition;
- (void)willBeginTodayViewTransitionToPresent:(_Bool)arg1;
- (void)todayViewChangedPercentPresented:(double)arg1;
- (void)removeTodayViewPresentationProgressObserver:(id)arg1;
- (void)addTodayViewPresentationProgressObserver:(id)arg1;
- (void)_coverSheetDidPresent:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)shouldHighlightTouchedIconView:(id)arg1;
- (void)performAfterAllIconTouchesFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (void)_removeTouchedIconView:(id)arg1;
- (void)_addTouchedIconView:(id)arg1;
@property(readonly, nonatomic, getter=isIconTouched) _Bool iconTouched;
- (long long)_locationForIcon:(id)arg1;
- (unsigned long long)_foldersInList:(id)arg1;
- (void)_updateUninstallingSystemAppsRestricted;
- (void)_storeAccountDidChange:(id)arg1;
- (void)_primaryAppleAcountDidChange:(id)arg1;
@property(readonly, nonatomic) SBMainDisplayPolicyAggregator *policyAggregator;
- (id)_policyAggregator;
- (void)_lockScreenUIWillLock:(id)arg1;
- (void)_noteUserIsInteractingWithIcons;
- (_Bool)isIconCurrentlyOnscreen:(id)arg1;
- (id)visibleIconStateDisplayIdentifiers;
- (_Bool)isIconVisiblyRepresented:(id)arg1;
- (_Bool)_iconListIndexIsValid:(long long)arg1;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
- (void)compactIconsInIconListsInFolder:(id)arg1 moveNow:(_Bool)arg2 limitToIconList:(id)arg3;
- (void)compactRootIconLists;
- (_Bool)_shouldRespondToIconCloseBoxes;
- (void)_updateVisibleIconsViewsForAllowableCloseBoxes;
@property(readonly, nonatomic) _Bool iconsShouldAllowCloseBoxes;
- (void)iconDragManager:(id)arg1 didEndDragOriginatingFromIconView:(id)arg2 userDidBeginDrag:(_Bool)arg3 lastUserInteractionDate:(id)arg4;
- (void)iconDragManagerMultiItemIconDraggingDidChange:(id)arg1;
- (void)iconDragManagerIconDraggingDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isIconDragging) _Bool iconDragging;
- (void)fixupBouncedIconsInFolder:(id)arg1 startingWithIndex:(long long)arg2 options:(unsigned long long)arg3;
- (void)fixupBouncedIconsInFolder:(id)arg1 startingWithIndex:(long long)arg2;
- (void)noteViewCovered;
- (void)restoreScrollingAndRotationAfterUngrab;
- (void)_moveIconViewToContentView:(id)arg1;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *iconEditingFeedbackBehavior;
- (void)_restartEditingEndTimer;
- (_Bool)isEditingAllowed;
- (_Bool)isEditing;
- (void)setIsEditing:(_Bool)arg1 withFeedbackBehavior:(id)arg2;
- (void)setIsEditing:(_Bool)arg1;
- (void)clearHighlightedIcon;
- (void)highlightIconView:(id)arg1;
- (void)_launchFromIconView:(id)arg1;
- (void)removeAllIconAnimations;
- (_Bool)isAnimatingForUnscatter;
- (void)unscatterAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setIdleModeText:(id)arg1;
- (void)updateNumberOfRowsWithDuration:(double)arg1;
- (void)uninstallIcon:(id)arg1 animate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uninstallIcon:(id)arg1 animate:(_Bool)arg2;
- (void)uninstallIcon:(id)arg1;
- (_Bool)isUninstallSupportedForIcon:(id)arg1;
- (_Bool)allowsUninstall;
- (void)_completeUninstallForIcon:(id)arg1;
- (void)removeIcon:(id)arg1 options:(unsigned long long)arg2;
- (void)removeIcon:(id)arg1 options:(unsigned long long)arg2 folderRef:(id *)arg3;
- (id)insertIcon:(id)arg1 intoListView:(id)arg2 iconIndex:(long long)arg3 options:(unsigned long long)arg4;
- (id)insertIcon:(id)arg1 atIndexPath:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)isPerformingCancelledExpandTransition;
- (_Bool)isPerformingCancelledCollapseTransition;
- (_Bool)isPerformingExpandTransition;
@property(readonly, nonatomic) SBHomeScreenIconTransitionAnimator *currentTransitionAnimator;
- (void)_enqueueTransitionName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isTransitioning;
- (void)popToCurrentRootIconListWhenPossible;
- (void)popToCurrentRootIconList;
- (void)popExpandedIconFromLocation:(long long)arg1 withTransitionRequest:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)popExpandedIconWithTransitionRequest:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushExpandedIcon:(id)arg1 location:(long long)arg2 withTransitionRequest:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)placeIcon:(id)arg1 atIndexPath:(id)arg2 options:(unsigned long long)arg3;
- (void)_scrollToIconToRevealAnimated:(_Bool)arg1;
- (void)tryScrollToIconToRevealAnimated:(_Bool)arg1;
- (void)finishInstallingIconAnimated:(_Bool)arg1;
- (void)setIconToReveal:(id)arg1 revealingPrevious:(_Bool)arg2;
- (id)iconToReveal;
- (void)replaceIconAtPath:(id)arg1 withIcon:(id)arg2 saveState:(_Bool)arg3;
- (void)addNewIconToDesignatedLocation:(id)arg1 animate:(_Bool)arg2 scrollToList:(_Bool)arg3 saveIconState:(_Bool)arg4;
- (void)addNewIconsToDesignatedLocations:(id)arg1 saveIconState:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleHomeButtonTap;
- (void)animateScrollToPageZeroWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)scrollToIconListAtIndex:(long long)arg1 animate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)scrollToIconListAtIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)scrollToIconListContainingIcon:(id)arg1 animate:(_Bool)arg2;
- (_Bool)_iconCanBeGrabbed:(id)arg1;
- (id)currentFolderIconList;
@property(readonly, nonatomic) SBIconListView *effectiveDockListView;
@property(readonly, nonatomic) SBIconListView *floatingDockSuggestionsListView;
@property(readonly, nonatomic) SBIconListView *floatingDockListView;
@property(readonly, nonatomic) SBIconListView *dockListView;
- (id)currentRootIconList;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)updateCurrentIconListIndexAndVisibility:(_Bool)arg1;
- (void)updateCurrentIconListIndexAndVisibility;
- (_Bool)isTrackingScroll;
- (void)cancelAllFolderScrolling;
- (_Bool)isFolderScrolling;
- (_Bool)isRootFolderScrolling;
- (_Bool)isScrolling;
- (void)_showInfoAlertIfNeeded:(_Bool)arg1;
- (void)_iconVisibilityChanged:(id)arg1;
- (void)_ensureRootFolderController;
- (void)_resetRootIconLists;
- (id)folderNameForDisplayID:(id)arg1;
- (void)_prepareToResetRootIconLists;
- (id)folderIconListAtIndex:(unsigned long long)arg1;
- (id)rootIconListAtIndex:(long long)arg1;
- (long long)currentFolderIconListIndex;
- (long long)currentIconListIndex;
- (id)_currentFolderController;
- (id)_openFolderController;
- (id)_rootFolderController;
- (id)rootFolder;
- (long long)orientation;
- (long long)_effectiveOrientation;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_performInitialLayoutWithOrientation:(long long)arg1;
- (void)updateContentViewOrientationAndLayoutIfNeeded;
- (void)viewWillLayoutSubviews;
- (id)contentView;
- (void)loadView;
@property(readonly, nonatomic) SBAssistantController *assistantController;
@property(readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property(readonly, nonatomic) SBAlertManager *alertManager;
- (id)userInterfaceControllerIfExists;
@property(readonly, nonatomic) SBUIController *userInterfaceController;
@property(readonly, nonatomic) SBApplicationPlaceholderController *applicationPlaceholderController;
@property(readonly, nonatomic) SBApplicationController *applicationController;
- (void)dealloc;
- (id)initWithApplicationController:(id)arg1 applicationPlaceholderController:(id)arg2 userInterfaceController:(id)arg3 policyAggregator:(id)arg4 alertManager:(id)arg5 alertItemsController:(id)arg6 assistantController:(id)arg7;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_failCurrentTestWithMessage:(id)arg1;
- (void)_runScrollFolderTest:(long long)arg1;
- (void)_runFolderTestWithName:(id)arg1 actions:(CDUnknownBlockType)arg2;
- (void)_runFolderCloseTest;
- (void)_runFolderOpenTest;
- (void)_runTest:(CDUnknownBlockType)arg1 afterMovingIconsIntoFolder:(id)arg2 withFolderOpen:(_Bool)arg3;
- (void)_ppt_restoreHomescreenState:(id)arg1;
- (id)_ppt_currentHomescreenState;
- (id)_createTestFolderWithOverrideIconList:(id)arg1;
- (id)_createTestFolder;
- (_Bool)allowsNestedFolders;
- (id)_proposedFolderNameForGrabbedIcon:(id)arg1 recipientIcon:(id)arg2;
- (void)_snapshotFadeDidStop:(id)arg1 finished:(id)arg2 snapshot:(id)arg3;
- (void)_compactRootListsAfterFolderCloseWithAnimation:(_Bool)arg1;
- (void)_cleanupForClosingFolderAnimated:(_Bool)arg1;
- (void)_folderDidFinishOpenClose:(_Bool)arg1 animated:(_Bool)arg2 success:(_Bool)arg3;
- (void)replaceFolderIcon:(id)arg1 byContainedIcon:(id)arg2 animated:(_Bool)arg3;
- (void)addIcons:(id)arg1 intoFolderIcon:(id)arg2 openFolderOnFinish:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2;
- (void)_animateFolderIcon:(id)arg1 open:(_Bool)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_closeFolderController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)closeFolderAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)openFolderIcon:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)openFolder;
- (_Bool)hasOpenFolder;
- (_Bool)hasOpenFolderInLocation:(long long)arg1;
@property(readonly, nonatomic) _Bool canCloseFolders;
@property(readonly, nonatomic) _Bool canOpenFolders;
- (_Bool)hasAnimatingFolder;
- (void)_setAnimatingFolderCreation:(_Bool)arg1;
- (void)_setHasAnimatingFolder:(_Bool)arg1;
- (void)_noteFolderAnimationStateDidChange;
- (id)folderControllerForFolder:(id)arg1;
- (id)iconListViewAtIndex:(unsigned long long)arg1 inFolder:(id)arg2 createIfNecessary:(_Bool)arg3;
- (void)getListView:(id *)arg1 folder:(id *)arg2 relativePath:(id *)arg3 forIndexPath:(id)arg4 createIfNecessary:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

