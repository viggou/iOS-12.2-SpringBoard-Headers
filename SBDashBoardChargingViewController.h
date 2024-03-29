//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

@class BCBatteryDeviceController, SBLockScreenBatteryChargingView;

@interface SBDashBoardChargingViewController : SBDashBoardViewControllerBase
{
    BCBatteryDeviceController *_batteryController;
    SBLockScreenBatteryChargingView *_chargingView;
}

- (void).cxx_destruct;
- (void)_createNewChargingViewForDoubleBattery:(_Bool)arg1;
- (void)_updateChargingViewIfNecessary;
- (long long)presentationStyle;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)_updateChargingViewLegibility;
- (_Bool)handleEvent:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

