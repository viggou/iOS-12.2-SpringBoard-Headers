//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBMainAlertManager, SBWorkspaceAlert;

@interface SBUIAnimationFadeAlertToSomething : SBUIMainScreenAnimationController
{
    SBWorkspaceAlert *_deactivatingAlert;
    SBMainAlertManager *_alertManager;
}

- (void).cxx_destruct;
- (void)_startAnimation;
- (double)animationDelay;
- (double)animationDuration;
- (void)_prepareAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

