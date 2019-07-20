//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBNestingViewControllerTransitionObserver-Protocol.h"

@class SBNestingViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol SBNestingViewControllerDelegate <SBNestingViewControllerTransitionObserver>

@optional
- (id <UIViewControllerInteractiveTransitioning>)nestingViewController:(SBNestingViewController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (id <UIViewControllerAnimatedTransitioning>)nestingViewController:(SBNestingViewController *)arg1 animationControllerForOperation:(long long)arg2 onViewController:(SBNestingViewController *)arg3 animated:(_Bool)arg4;
@end

