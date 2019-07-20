//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTransaction, FBSystemService, SBInitialRestartState, SBRestartTransitionRequest, SBStartupTransitionController;
@protocol SBRestartManagerDelegate, SBRestartManagerWorkspaceDataSource, SBStartupTransition;

@interface SBRestartManager : NSObject
{
    id <SBRestartManagerDelegate> _delegate;
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionController *_startupController;
    SBRestartTransitionRequest *_pendingRestartTransitionRequest;
    id <SBRestartManagerWorkspaceDataSource> _workspaceDataSource;
    _Bool _isShuttingDown;
    _Bool _isRestartImminent;
    _Bool _isUserSwitchPending;
    FBSystemService *_systemService;
}

@property(nonatomic, getter=_isUserSwitchPending, setter=_setUserSwitchPending:) _Bool isUserSwitchPending; // @synthesize isUserSwitchPending=_isUserSwitchPending;
@property(readonly, nonatomic) SBRestartTransitionRequest *pendingRestartTransitionRequest; // @synthesize pendingRestartTransitionRequest=_pendingRestartTransitionRequest;
@property(nonatomic) __weak id <SBRestartManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)___waitForeverTillBackBoarddExits;
- (void)_doRestartForTransition:(int)arg1;
- (void)_persistStartupTransitionContextFromShutdownContext:(id)arg1;
- (void)_persistStartupTransitionContextFromRebootContext:(id)arg1;
- (void)_persistStartupTransitionContextFromRestartRequest:(id)arg1;
- (void)_reallyRestartWithTransitionRequest:(id)arg1;
- (void)_restartWithTransitionRequest:(id)arg1;
- (void)_postShutdownNotification;
- (void)_shutdownWithOptions:(unsigned long long)arg1 byUser:(_Bool)arg2 description:(id)arg3;
- (void)_killAllAppsForPendingExitWithReason:(long long)arg1 description:(id)arg2 expiration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_exitIsImminent;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)restartWithTransitionRequest:(id)arg1;
- (void)rebootWithContext:(id)arg1;
- (void)rebootForReason:(id)arg1;
- (void)shutdownWithContext:(id)arg1;
- (void)shutdownForReason:(id)arg1;
- (void)initializeAndRunStartupTransition:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition; // @dynamic startupTransition;
@property(readonly, nonatomic, getter=isPendingExit) _Bool pendingExit; // @dynamic pendingExit;
- (id)initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2;
- (id)_initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2 startupController:(id)arg3 systemService:(id)arg4;
- (id)init;

@end

