//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBActivateAppUnderLockScreenWorkspaceTransaction.h"

@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction
{
    SBApplicationSceneEntity *_fromAppSceneEntity;
    _Bool _workspaceAlreadyResumed;
    _Bool _animatedAppDeactivation;
}

- (void).cxx_destruct;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(_Bool)arg1;
- (id)_setupAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_didComplete;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1 toLockScreenController:(id)arg2;

@end

