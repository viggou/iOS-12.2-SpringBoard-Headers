//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBBaseStartupTransition.h"

@class SBFUserAuthenticationController, SBLockScreenManager;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition
{
    SBLockScreenManager *_lockScreenManager;
    SBFUserAuthenticationController *_authController;
}

@property(readonly, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
- (void).cxx_destruct;
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)suggestedLockAnimationForTransitionRequest:(id)arg1;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;

@end
