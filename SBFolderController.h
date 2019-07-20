//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBNestingViewController.h"

#import "BSDescriptionProviding-Protocol.h"
#import "SBFolderControllerDelegate-Protocol.h"
#import "SBFolderObserver-Protocol.h"
#import "SBFolderViewDelegate-Protocol.h"
#import "SBIconListViewDragObserver-Protocol.h"
#import "SBScaleIconZoomAnimationContaining-Protocol.h"

@class NSArray, NSMapTable, NSMutableSet, NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBFolder, SBFolderContainerView, SBFolderContext, SBFolderControllerAnimationContext, SBFolderControllerBackgroundView, SBFolderView, SBIconAnimator, SBIconListView, SBIconViewMap, UIStatusBar, UIView, UIWindow, _UILegibilitySettings;
@protocol SBFolderControllerDelegate;

@interface SBFolderController : SBNestingViewController <SBFolderControllerDelegate, SBFolderObserver, SBIconListViewDragObserver, SBFolderViewDelegate, SBScaleIconZoomAnimationContaining, BSDescriptionProviding>
{
    SBIconViewMap *_viewMap;
    SBFolderContainerView *_containerView;
    SBFolderView *_contentView;
    SBFolderControllerBackgroundView *_backgroundView;
    NSTimer *_closeFolderTimer;
    _Bool _grabbedIconHasEverEnteredFolderView;
    NSMapTable *_editingContextsByFolder;
    SBIconAnimator *_iconAnimator;
    NSMutableSet *_draggingEnteredIconListViews;
    NSMutableSet *_fakeStatusBarHidingReasons;
    _Bool _isOpen;
    _Bool _isEditing;
    _Bool _isAnimating;
    _Bool _active;
    _Bool _rotating;
    id <SBFolderControllerDelegate> _folderDelegate;
    SBFolder *_folder;
    long long _orientation;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderContext *_lastContext;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UIStatusBar *_fakeStatusBar;
    SBFolderControllerAnimationContext *_animationContext;
}

+ (Class)listViewClass;
@property(retain, nonatomic) SBFolderControllerAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(retain, nonatomic) UIStatusBar *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(retain, nonatomic) SBFolderContext *lastContext; // @synthesize lastContext=_lastContext;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) SBFolderView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) SBIconViewMap *viewMap; // @synthesize viewMap=_viewMap;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) __weak id <SBFolderControllerDelegate> folderDelegate; // @synthesize folderDelegate=_folderDelegate;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_isAnimating;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_isOpen;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)_noteFolderListsDidChange;
- (void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2;
- (void)iconListView:(id)arg1 concludeIconDrop:(id)arg2;
- (id)folderView:(id)arg1 accessibilityTintColorForRect:(struct CGRect)arg2;
- (struct UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderView:(id)arg1;
- (void)folderView:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (_Bool)folderView:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (id)folderView:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (id)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (_Bool)folderView:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (double)minimumHomeScreenScaleForFolderView:(id)arg1;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (void)folderControllerDidClose:(id)arg1;
- (void)folderControllerWillClose:(id)arg1;
- (void)folderControllerDidOpen:(id)arg1;
- (void)folderControllerWillOpen:(id)arg1;
- (id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(struct CGRect)arg2;
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
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (double)minimumHomeScreenScaleForFolderController:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (Class)controllerClassForFolder:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)prepareForAnimation:(id)arg1 withTargetIcon:(id)arg2;
- (void)returnScalingView;
- (id)borrowScalingView;
@property(readonly, nonatomic) SBIconListView *dockIconListView;
@property(readonly, nonatomic) SBIconViewMap *iconViewMap;
@property(readonly, nonatomic) UIView *fallbackIconContainerView;
@property(readonly, nonatomic) UIWindow *animationWindow;
- (id)matchMoveSourceViewForIconView:(id)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)currentIndexPath;
- (_Bool)restoreExpandedIndexPath:(id)arg1;
- (_Bool)shouldOpenFolderIcon:(id)arg1;
- (void)popFolderAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushFolderIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToClose;
- (void)prepareToOpen;
- (_Bool)_iconAppearsOnCurrentPage:(id)arg1;
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;
- (unsigned long long)_depth;
- (id)_newAnimatorForZoomUp:(_Bool)arg1;
- (void)_clearIconAnimator;
- (void)unscatterAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)noteIconDragDidEnd:(id)arg1;
- (void)noteIconDrag:(id)arg1 didExitIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didChangeInIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didEnterIconListView:(id)arg2;
- (void)noteUserIsInteractingWithIcons;
- (_Bool)_canHandleIconDropSession:(id)arg1 inListView:(id)arg2;
- (void)_setCloseFolderTimerIfNecessary;
- (void)_closeFolderTimerFired;
- (void)_cancelCloseFolderTimer;
@property(readonly, nonatomic) _Bool disablesScrollingWhileIconDragIsDropping;
@property(readonly, nonatomic) _Bool canAcceptFolderIconDrags;
@property(readonly, nonatomic) _Bool closesAfterDragExits;
- (void)_cancelAllInteractionTimers;
- (_Bool)_allowUserInteraction;
- (void)_compactFolder;
- (id)_addEmptyListForce:(_Bool)arg1;
- (id)addEmptyListView;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
- (void)_resetIconLists;
- (void)prepareToTearDown;
- (void)_updateStateOfAssociatedController:(id)arg1 animated:(_Bool)arg2;
- (void)_updateAssociatedControllerStateAnimated:(_Bool)arg1;
- (void)_unhideFakeStatusBarForReason:(id)arg1;
- (void)_hideFakeStatusBarForReason:(id)arg1;
- (void)_removeFakeStatusBarAndAssertionIfExists;
- (void)_removeFakeStatusBar;
- (void)_resetFakeStatusBarMatchMoveAnimation;
- (void)_resetFakeStatusBarFrameOnly;
- (void)_resetFakeStatusBarSettingsIfNecessary;
- (void)_addFakeStatusBarView;
- (void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(_Bool)arg1;
- (void)_updateHomescreenAndDockFade;
- (_Bool)_homescreenAndDockShouldFade;
- (void)_setHomescreenAndDockAlpha:(double)arg1;
- (void)cancelScrolling;
@property(readonly, nonatomic) _Bool suspendsWallpaperAnimationWhileOpen;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (id)beginModifyingDockOffscreenFractionForReason:(id)arg1;
- (id)dockListView;
- (_Bool)hasDock;
- (_Bool)isDisplayingIcon:(id)arg1;
- (id)iconListViewForDrag:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (_Bool)doesPageContainIconListView:(long long)arg1;
@property(readonly, nonatomic) SBIconListView *currentIconListView;
@property(readonly, nonatomic) unsigned long long iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
- (_Bool)_restoreFromContext:(id)arg1;
- (id)_createContext;
- (id)folderControllerForFolder:(id)arg1;
- (id)deepestFolderController;
@property(readonly, nonatomic) __weak SBFolderController *outerFolderController;
@property(readonly, nonatomic) SBFolderController *innerFolderController;
- (void)_configureForInnerFolderController:(id)arg1;
- (void)animateScrollToPageZeroWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(_Bool)arg2;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long currentPageIndex;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (id)_iconPageIndicatorImageSetCache;
- (Class)_contentViewClass;
- (void)removeViewFromHierarchyForNestedViewController:(id)arg1;
- (void)addViewToHierarchyForNestedViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;
- (void)loadView;
- (id)view;
- (void)invalidate;
- (void)_invalidate;
- (void)parentDelegateDidChange;
- (void)delegateDidChange;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

