//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLowPowerAlertItem : SBAlertItem
{
    unsigned int _talkLevel;
}

+ (void)setBatteryLevel:(unsigned int)arg1;
+ (_Bool)_shouldIgnoreChangeToBatteryLevel:(unsigned int)arg1;
+ (unsigned int)_thresholdForLevel:(unsigned int)arg1;
+ (void)initialize;
- (_Bool)undimsScreen;
- (_Bool)shouldShowInEmergencyCall;
- (_Bool)shouldShowInLockScreen;
- (void)_enableLowPowerMode;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithLevel:(unsigned int)arg1;
- (id)init;

@end

