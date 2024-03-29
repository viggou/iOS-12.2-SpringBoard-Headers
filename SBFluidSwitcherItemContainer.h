//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBFailureNotifyingTapGestureRecognizerDelegate-Protocol.h"
#import "SBFluidSwitcherItemContainerHeaderViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SBAppLayout, SBAppSwitcherPageView, SBAppSwitcherSettings, SBFailureNotifyingTapGestureRecognizer, SBFluidBehaviorSettings, SBFluidSwitcherIconOverlayView, SBFluidSwitcherItemContainerHeaderView, SBSwitcherCardCloseBox, UILongPressGestureRecognizer, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol SBAppSwitcherPageContentView, SBFluidSwitcherItemContainerDelegate;

@interface SBFluidSwitcherItemContainer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, SBFluidSwitcherItemContainerHeaderViewDelegate, SBFailureNotifyingTapGestureRecognizerDelegate>
{
    SBAppSwitcherPageView *_pageView;
    SBAppLayout *_appLayout;
    id <SBFluidSwitcherItemContainerDelegate> _delegate;
    UIScrollView *_verticalScrollView;
    UIView *_pageViewScrollCompensationWrapper;
    SBFluidSwitcherItemContainerHeaderView *_iconAndLabelHeader;
    SBFluidSwitcherIconOverlayView *_iconOverlayView;
    SBSwitcherCardCloseBox *_closeBox;
    double _killVelocity;
    double _contentCornerRadius;
    double _contentPageViewScale;
    double _titleOpacity;
    double _titleAndIconOpacity;
    UILongPressGestureRecognizer *_pressDownGestureRecognizer;
    UILongPressGestureRecognizer *_selectionHighlightGestureRecognizer;
    UILongPressGestureRecognizer *_enableKillAffordanceLongPressGestureRecognizer;
    UISwipeGestureRecognizer *_enableKillAffordanceSwipeGestureRecognizer;
    SBFailureNotifyingTapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    SBFluidBehaviorSettings *_squishSettings;
    SBAppSwitcherSettings *_settings;
    _Bool _isActive;
    _Bool _isVisible;
    _Bool _killingAffordanceEnabled;
    _Bool _sentKillRequest;
    struct CGPoint _highlightTapDownLocation;
    _Bool _highlighted;
    _Bool _animatingPageViewScale;
    _Bool _clipsToUnobscuredMargin;
    double _unobscuredMargin;
    double _contentAlpha;
}

+ (struct SBSwitcherItemContainerHeaderMetrics)_headerMetrics;
+ (double)preferredRestingVisibleMarginForBounds:(struct CGRect)arg1;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) _Bool clipsToUnobscuredMargin; // @synthesize clipsToUnobscuredMargin=_clipsToUnobscuredMargin;
@property(nonatomic) double unobscuredMargin; // @synthesize unobscuredMargin=_unobscuredMargin;
@property(nonatomic) double contentPageViewScale; // @synthesize contentPageViewScale=_contentPageViewScale;
@property(nonatomic) double titleAndIconOpacity; // @synthesize titleAndIconOpacity=_titleAndIconOpacity;
@property(nonatomic) double titleOpacity; // @synthesize titleOpacity=_titleOpacity;
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(readonly, nonatomic) __weak id <SBFluidSwitcherItemContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (void).cxx_destruct;
- (_Bool)_disableGeometryObserverNotification;
- (_Bool)isContainerVisibleFor:(id)arg1;
- (_Bool)_scrollViewShouldPanGestureTryToBegin:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)gestureRecognizerTransitionedToFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGAffineTransform)_squishedPageViewScaleTransform;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_tappedCloseBox:(id)arg1;
- (void)_handleEnableKillAffordanceSwipeGesture:(id)arg1;
- (void)_handleEnableKillAffordanceLongPressGesture:(id)arg1;
- (void)_handleSelectionHighlightGesture:(id)arg1;
- (void)_handlePageViewPressDown:(id)arg1;
- (void)_handlePageViewTap:(id)arg1;
- (_Bool)_isContainedInGridSwitcher;
- (id)_springLoadingEffectTargetView;
- (void)_updateHeader;
- (double)_effectiveTitleAndIconOpacity;
- (double)_scaleTransformFactor;
- (double)_inverseScaleTransformFactor;
- (void)_setKillingDarkeningAlpha:(double)arg1;
- (double)_killingDarkeningAlpha;
- (void)_resetKillProgressScrollState;
- (void)_updateScrollEnabled;
- (struct CGSize)_overlayViewSize;
- (struct CGRect)_frameForPageView;
- (struct CGRect)_frameForScrollView;
- (void)_ensureSubviewOrder;
- (struct CGPoint)_closeBoxCenter;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeIconOverlay;
- (void)configureOverlayForIconZoomWithView:(id)arg1;
- (void)setVisible:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2 transitionRequest:(id)arg3;
- (void)viewDismissing:(id)arg1 forTransitionRequest:(id)arg2;
- (void)viewPresenting:(id)arg1 forTransitionRequest:(id)arg2;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *contentView;
@property(nonatomic) double shadowAlpha;
@property(nonatomic) _Bool killingAffordanceEnabled;
- (void)setKillingAffordanceEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (double)_killingProgressForContentOffset:(struct CGPoint)arg1;
@property(readonly, nonatomic) double killingProgress;
@property(nonatomic) double killGestureHysteresis;
@property(nonatomic) double darkeningAlpha;
- (void)_updatePageViewContentViewClipping;
- (void)setContentOverlay:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *contentOverlay;
@property(nonatomic) _Bool blocksContentViewTouches;
@property(readonly, copy) NSString *description;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)prepareForReuse;
- (void)_addPageView;
- (_Bool)_shouldSetupViewToSupportNonSwipeUpKillStyle;
- (id)_createCloseBox;
- (id)_createScrollView;
- (id)initWithFrame:(struct CGRect)arg1 appLayout:(id)arg2 delegate:(id)arg3 active:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

