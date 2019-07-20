//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUIWorkspaceAnimationController.h"

@class NSSet, SBDeviceApplicationSceneEntity, SBWorkspaceTransitionRequest;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController
{
}

- (void)_cleanupAnimation;
- (void)_begin;
- (void)_dismissBannerAnimated:(_Bool)arg1;
- (_Bool)_shouldDismissBanner;
- (void)__startAnimation;
- (_Bool)__wantsInitialProgressStateChange;
- (id)_primaryAppOrAnyAppFromSet:(id)arg1;
- (id)_getTransitionWindow;
@property(readonly, nonatomic) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;
@property(readonly, nonatomic) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property(readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities; // @dynamic fromApplicationSceneEntities;
@property(readonly, copy, nonatomic) NSSet *toApplicationSceneEntities; // @dynamic toApplicationSceneEntities;

@end
