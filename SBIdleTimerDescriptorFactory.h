//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCProfileConnection, SBAlertItemsController, SBBacklightController, SBConferenceManager, SBLocalDefaults, SBLockScreenManager, SBMainWorkspace, SBPocketStateMonitor, SBPrototypeController, SBTelephonyManager, SBUIBiometricResource, SBUIController, SpringBoard;

@interface SBIdleTimerDescriptorFactory : NSObject
{
    SBPrototypeController *_override_prototypeController;
    SBLocalDefaults *_override_defaults;
    SBLockScreenManager *_override_lockScreenManager;
    SBMainWorkspace *_override_mainWorkspace;
    SBUIController *_override_uiController;
    SBUIBiometricResource *_override_biometricResource;
    SBPocketStateMonitor *_override_pocketStateMonitor;
    SBTelephonyManager *_override_telephonyManager;
    SBConferenceManager *_override_conferenceManager;
    MCProfileConnection *_override_profileConnection;
    SBBacklightController *_override_backlightController;
    SBLocalDefaults *_override_localDefaults;
    SpringBoard *_springBoard;
    SBAlertItemsController *_alertItemsController;
}

+ (id)disabledIdleTimerDescriptor;
@property(retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController; // @synthesize alertItemsController=_alertItemsController;
@property(retain, nonatomic, getter=_springBoard, setter=_setSpringBoard:) SpringBoard *springBoard; // @synthesize springBoard=_springBoard;
@property(retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_override_profileConnection;
@property(retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager; // @synthesize conferenceManager=_override_conferenceManager;
@property(retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // @synthesize telephonyManager=_override_telephonyManager;
@property(retain, nonatomic, getter=_pocketStateMonitor, setter=_setPocketStateMonitor:) SBPocketStateMonitor *pocketStateMonitor; // @synthesize pocketStateMonitor=_override_pocketStateMonitor;
@property(retain, nonatomic, getter=_biometricResource, setter=_setBiometricResource:) SBUIBiometricResource *biometricResource; // @synthesize biometricResource=_override_biometricResource;
@property(retain, nonatomic, getter=_uiController, setter=_setUIController:) SBUIController *uiController; // @synthesize uiController=_override_uiController;
@property(retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_override_mainWorkspace;
@property(retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_override_lockScreenManager;
@property(retain, nonatomic, getter=_localDefaults, setter=_setLocalDefaults:) SBLocalDefaults *localDefaults; // @synthesize localDefaults=_override_localDefaults;
@property(retain, nonatomic, getter=_prototypeController, setter=_setPrototypeController:) SBPrototypeController *prototypeController; // @synthesize prototypeController=_override_prototypeController;
@property(retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController; // @synthesize backlightController=_override_backlightController;
- (void).cxx_destruct;
- (_Bool)_isIdleDurationForever:(double)arg1;
- (_Bool)_shouldUseAttentionSensor;
- (_Bool)updateIdleTimerSettingsForWarnInterval:(id)arg1;
- (void)_updateIdleTimerSettingsWarnInterval:(id)arg1 totalInterval:(double)arg2;
- (_Bool)updateIdleTimerSettingsForFaceDown:(id)arg1;
- (_Bool)updateIdleTimerSettingsForBatterySaverMode:(id)arg1;
- (_Bool)updateIdleTimerSettingsForThermalBlockedMode:(id)arg1;
- (_Bool)updateIdleTimerSettingsForUnlockedWithMesa:(id)arg1;
- (_Bool)updateIdleTimerSettingsWithCustomTimeouts:(id)arg1 fromBehavior:(id)arg2;
- (_Bool)updateIdleTimerSettingsForDuration:(long long)arg1 descriptor:(id)arg2;
- (_Bool)sanitizeDescriptorForLockscreenDefaults:(id)arg1;
- (_Bool)sanitizeSettingsAfterSetup:(id)arg1 duration:(long long)arg2;
- (_Bool)sanitizeWarnInterval:(id)arg1;
- (_Bool)sanitizeTotalDuration:(id)arg1;
- (_Bool)sanitizeSettingsAfterInitialSetup:(id)arg1;
- (_Bool)updateIdleTimerSettingsForTelephony:(id)arg1;
- (_Bool)updateIdleTimerSettingsForPrototypeSettings:(id)arg1;
- (_Bool)updateIdleTimerSettingsForDefaultWarnInterval:(id)arg1;
- (_Bool)updateIdleTimerSettingsForStoreDemo:(id)arg1;
- (_Bool)updateIdleTimerSettingsForProfile:(id)arg1 idealDuration:(long long)arg2;
- (_Bool)updateIdleTimerSettingsForPowerDefaults:(id)arg1;
- (_Bool)updateIdleTimerSettingsForSecurityDefaults:(id)arg1;
- (id)idleTimerDescriptorForBehavior:(id)arg1;

@end

