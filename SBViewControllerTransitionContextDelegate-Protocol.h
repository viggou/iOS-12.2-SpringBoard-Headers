//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBViewControllerTransitionContext;

@protocol SBViewControllerTransitionContextDelegate <NSObject>

@optional
- (void)transitionDidFinish:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillFinish:(SBViewControllerTransitionContext *)arg1;
- (void)transitionDidReverse:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillReverse:(SBViewControllerTransitionContext *)arg1;
- (void)transitionDidBegin:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillBegin:(SBViewControllerTransitionContext *)arg1;
@end
