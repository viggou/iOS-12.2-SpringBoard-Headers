//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

#import "SBSceneHandleObserver-Protocol.h"

@class NSString, SBApplicationSceneEntity, SBApplicationSceneHandle, SBWorkspaceAlert;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction <SBSceneHandleObserver>
{
    SBWorkspaceAlert *_activatingAlert;
    SBApplicationSceneEntity *_mainScreenAppThatWillBeActivated;
    SBApplicationSceneHandle *_mainSceneAppHandle;
    id _mainScreenAppProcessStateObserver;
}

- (void).cxx_destruct;
- (void)_stopWaitingForApplicationSceneContentWithSuccess:(_Bool)arg1;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (id)_newAnimationFromNowPlayingToApp;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToApp;
- (void)_finishCommit;
- (void)_doCommit;
- (id)_effectiveTopEntity;
- (_Bool)_canBeInterrupted;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(_Bool)arg2;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
