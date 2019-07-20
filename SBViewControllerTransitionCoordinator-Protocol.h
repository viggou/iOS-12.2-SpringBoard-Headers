//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBViewControllerTransitionCoordinatorContext-Protocol.h"
#import "UIViewControllerTransitionCoordinator-Protocol.h"

@class UIView;

@protocol SBViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinator, SBViewControllerTransitionCoordinatorContext>
- (void)notifyWhenInteractionEndsUsingBlock:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg1;
- (_Bool)animateAlongsideTransitionInView:(UIView *)arg1 animation:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg2 completion:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg3;
- (_Bool)animateAlongsideTransition:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg1 completion:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg2;
- (void)addTransitionContinuation:(void (^)(id <SBViewControllerTransitionCoordinatorContext>, void (^)(void)))arg1;
- (_Bool)requiresRestartableAnimations;
- (_Bool)requiresInteractiveAnimations;
- (_Bool)requiresCancellableAnimations;
@end

