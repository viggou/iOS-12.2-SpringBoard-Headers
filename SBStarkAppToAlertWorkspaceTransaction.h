//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBStarkWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver-Protocol.h"

@class NSString, SBUIAnimationController, SBWorkspaceAlert, SBWorkspaceEntity;

@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBWorkspaceAlert *_activatingAlert;
    SBWorkspaceEntity *_fromEntity;
    SBUIAnimationController *_animation;
    _Bool _animatedAppDeactivation;
    _Bool _fromStarkLauncher;
}

@property(readonly, nonatomic) SBWorkspaceAlert *alert; // @synthesize alert=_activatingAlert;
- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_didComplete;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
