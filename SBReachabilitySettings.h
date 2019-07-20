//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@class SBFluidBehaviorSettings;

@interface SBReachabilitySettings : SBUISettings
{
    _Bool _allowOnAllDevices;
    double _reachabilityDefaultKeepAlive;
    double _reachabilityInteractiveKeepAlive;
    double _yOffsetFactor;
    double _homeGestureSwipeDownHysteresis;
    double _homeGestureSwipeDownHeight;
    double _systemWideSwipeDownHeight;
    SBFluidBehaviorSettings *_animationSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBFluidBehaviorSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(nonatomic) double systemWideSwipeDownHeight; // @synthesize systemWideSwipeDownHeight=_systemWideSwipeDownHeight;
@property(nonatomic) double homeGestureSwipeDownHeight; // @synthesize homeGestureSwipeDownHeight=_homeGestureSwipeDownHeight;
@property(nonatomic) double homeGestureSwipeDownHysteresis; // @synthesize homeGestureSwipeDownHysteresis=_homeGestureSwipeDownHysteresis;
@property(nonatomic) double yOffsetFactor; // @synthesize yOffsetFactor=_yOffsetFactor;
@property(nonatomic) double reachabilityInteractiveKeepAlive; // @synthesize reachabilityInteractiveKeepAlive=_reachabilityInteractiveKeepAlive;
@property(nonatomic) double reachabilityDefaultKeepAlive; // @synthesize reachabilityDefaultKeepAlive=_reachabilityDefaultKeepAlive;
@property(nonatomic) _Bool allowOnAllDevices; // @synthesize allowOnAllDevices=_allowOnAllDevices;
- (void).cxx_destruct;
- (double)yOffset;
- (void)setDefaultValues;

@end

