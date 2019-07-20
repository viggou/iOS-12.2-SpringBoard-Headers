//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBMesaUnlockTrigger.h"

#import "SBMesaUnlockTriggerDelegate-Protocol.h"

@class NSString, SBDashBoardViewController;

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate>
{
    SBDashBoardViewController *_dbvc;
    SBMesaUnlockTrigger *_baseTrigger;
}

- (void).cxx_destruct;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (void)fingerOff;
- (void)fingerOn;
- (void)menuButtonUp;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (void)screenOff;
- (_Bool)bioUnlock;
- (id)initWithDashBoardViewController:(id)arg1 baseTrigger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
