//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBTransaction.h"

@class FBSDisplayConfiguration, FBSDisplayIdentity, SBAlertManager, SBLayoutStateTransitionCoordinator, SBSceneLayoutViewController, SBSceneManager, SBUIAnimationController, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransaction : SBTransaction
{
    SBUIAnimationController *_suggestedAnimationController;
    SBWorkspaceTransitionRequest *_transitionRequestForPendingInterruption;
    SBSceneManager *_sceneManager;
    _Bool _clearsCompletionAsynchronously;
    SBWorkspaceTransitionRequest *_transitionRequest;
    SBAlertManager *_alertManager;
    SBSceneLayoutViewController *_layoutController;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
}

@property(readonly, nonatomic) SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // @synthesize layoutStateTransitionCoordinator=_layoutStateTransitionCoordinator;
@property(nonatomic) _Bool clearsCompletionAsynchronously; // @synthesize clearsCompletionAsynchronously=_clearsCompletionAsynchronously;
@property(retain, nonatomic) SBUIAnimationController *suggestedAnimationController; // @synthesize suggestedAnimationController=_suggestedAnimationController;
@property(readonly, nonatomic) SBSceneLayoutViewController *layoutController; // @synthesize layoutController=_layoutController;
@property(readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest; // @synthesize transitionRequest=_transitionRequest;
@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
- (void).cxx_destruct;
- (void)_didInterruptForTransitionRequest:(id)arg1;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (id)_transitionRequestForInterruption;
- (_Bool)_isInterruptingForTransitionRequest;
- (id)_interceptAndMutateInterruptingTransitionRequest:(id)arg1;
- (id)_childWorkspaceTransactions;
- (void)_performDeviceCoherencyCheck;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)interruptForTransitionRequest:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)keepAliveForAsyncBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
- (id)initWithTransitionRequest:(id)arg1;
- (id)init;

@end

