//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@class SBFluidBehaviorSettings;

@interface SBAppSwitcherOrbGestureAnimationSettings : SBUISettings
{
    SBFluidBehaviorSettings *_popToSwitcherSettings;
    SBFluidBehaviorSettings *_peekingAndPanningSettings;
    SBFluidBehaviorSettings *_breathingSettings;
    double _response;
}

+ (id)settingsControllerModule;
@property(nonatomic) double response; // @synthesize response=_response;
@property(retain, nonatomic) SBFluidBehaviorSettings *breathingSettings; // @synthesize breathingSettings=_breathingSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *peekingAndPanningSettings; // @synthesize peekingAndPanningSettings=_peekingAndPanningSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *popToSwitcherSettings; // @synthesize popToSwitcherSettings=_popToSwitcherSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
