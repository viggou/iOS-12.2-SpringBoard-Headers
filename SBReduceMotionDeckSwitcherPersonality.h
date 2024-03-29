//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDeckSwitcherPersonality.h"

@interface SBReduceMotionDeckSwitcherPersonality : SBDeckSwitcherPersonality
{
}

- (id)_activeGesture;
- (unsigned long long)_activeAppIndex;
- (id)_layoutContext;
- (double)_cardWidth;
- (void)_updateSwipeUpGestureTranslationAndVelocity;
- (double)_perCardAdditionalScaleCoefficient;
- (_Bool)isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1;
- (id)overrideLayoutSettingsForIndex:(unsigned long long)arg1 defaultSettings:(id)arg2;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)_leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 scrollProgress:(double)arg4 ignoreInsertionsAndRemovals:(_Bool)arg5;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 frameOrigin:(double)arg4 ignoreInsertionsAndRemovals:(_Bool)arg5;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 ignoreInsertionsAndRemovals:(_Bool)arg2;
- (double)_scaleForInactiveCardsOffscreenForFlyIn;
- (_Bool)_shouldPositionInactiveCardsOffscreenForFlyIn;
- (double)_deckSwipeUpScaleForContainerViewForTranslation:(double)arg1;
- (struct CGRect)_deckSwipeUpFrameForContainerViewForTranslation:(double)arg1;
- (_Bool)_forcePressGestureCanBreathe;
- (double)_opacityForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 scrollProgress:(double)arg3 ignoringInactiveCardsHidden:(_Bool)arg4 ignoringVisibleItemContainers:(_Bool)arg5;
- (double)_titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)homeScreenBlurProgress;
- (double)dimmingAlpha;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (_Bool)shouldAnimateTransitionForContext:(id)arg1;
- (struct CGPoint)pagingOrigin;
- (struct CGSize)interpageSpacingForPaging;
- (_Bool)scrollViewPagingEnabled;

@end

