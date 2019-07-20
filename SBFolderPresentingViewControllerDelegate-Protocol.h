//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBFolderController, SBFolderPresentingViewController;
@protocol SBViewControllerTransitionCoordinator, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol SBFolderPresentingViewControllerDelegate <NSObject>

@optional
- (void)folderPresentationController:(SBFolderPresentingViewController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
- (id <UIViewControllerInteractiveTransitioning>)folderPresentationController:(SBFolderPresentingViewController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (id <UIViewControllerAnimatedTransitioning>)folderPresentationController:(SBFolderPresentingViewController *)arg1 animationControllerForTransitionWithFolder:(SBFolderController *)arg2 presenting:(_Bool)arg3 animated:(_Bool)arg4;
@end

