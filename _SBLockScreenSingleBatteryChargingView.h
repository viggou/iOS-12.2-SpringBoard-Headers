//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBLockScreenBatteryChargingView.h"

@class NSArray, NSLayoutConstraint, SBLockScreenBatteryFillView, SBUILegibilityLabel, UIImage, UIView, _UIBackdropView;

@interface _SBLockScreenSingleBatteryChargingView : SBLockScreenBatteryChargingView
{
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    SBLockScreenBatteryFillView *_batteryFillView;
    SBUILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
    UIImage *_batteryImage;
}

- (void).cxx_destruct;
- (id)_chargePercentFont;
- (double)_batteryNoseOffset;
- (void)_layoutBattery;
- (void)_layoutChargePercentLabel;
- (void)layoutSubviews;
- (double)desiredVisibilityDuration;
- (long long)batteryCount;
- (void)setBatteryVisible:(_Bool)arg1;
- (_Bool)batteryVisible;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setLegibilitySettings:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

