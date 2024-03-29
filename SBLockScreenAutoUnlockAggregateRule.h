//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBAutoUnlockComposableRule.h"

@class SBFUserAuthenticationController, SBSyncController;

@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule
{
    SBFUserAuthenticationController *_userAuthenticationController;
    SBSyncController *_syncController;
}

@property(retain, nonatomic, getter=_syncController, setter=_setSyncController:) SBSyncController *syncController; // @synthesize syncController=_syncController;
@property(readonly, nonatomic) SBFUserAuthenticationController *userAuthenticationController; // @synthesize userAuthenticationController=_userAuthenticationController;
- (void).cxx_destruct;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (id)_initWithUserAuthenticationController:(id)arg1 syncController:(id)arg2;
- (id)initWithUserAuthenticationController:(id)arg1;

@end

