//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSHashTable, NSMutableSet, NSString, SBSearchScrollView, UIPanGestureRecognizer, UIView;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate, BSDescriptionProviding>
{
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    _Bool _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastOffset;
    NSMutableSet *_disabledReasons;
    _Bool _isDismissing;
    _Bool _ignoreScrollingEnded;
    _Bool _animatingResetOrReveal;
    UIView *_targetView;
}

@property(readonly, nonatomic, getter=isAnimatingResetOrReveal) _Bool animatingResetOrReveal; // @synthesize animatingResetOrReveal=_animatingResetOrReveal;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_openFolderChanged:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_updateScrollingEnabled;
@property(readonly, nonatomic, getter=isShowingSearch) _Bool showingSearch;
- (_Bool)_isShowingSearch;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)_notifyThaWeStartedShowingOrHiding;
- (void)setDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)resetAnimated:(_Bool)arg1;
- (void)revealAnimated:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateForRotation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

