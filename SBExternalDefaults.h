//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractDefaults.h>

@class SBBiometricKitDefaults, SBExternalDemoDefaults, SBExternalDuetDefaults, SBExternalGlobalDefaults, SBExternalNotesDefaults, SBExternalPhoneDefaults, SBExternalSettingsDefaults, SBExternalSetupDefaults, SBExternalSoundsDefaults, SBExternalUIKitDefaults, SBExternalWifiDefaults;

@interface SBExternalDefaults : SBAbstractDefaults
{
    SBExternalGlobalDefaults *_lazy_globalDefaults;
    SBExternalUIKitDefaults *_lazy_uikitDefaults;
    SBExternalDuetDefaults *_lazy_duetDefaults;
    SBExternalDemoDefaults *_lazy_demoDefaults;
    SBExternalSetupDefaults *_lazy_setupDefaults;
    SBExternalSettingsDefaults *_lazy_settingsDefaults;
    SBExternalPhoneDefaults *_lazy_phoneDefaults;
    SBExternalWifiDefaults *_lazy_networkDefaults;
    SBExternalSoundsDefaults *_lazy_soundDefaults;
    SBExternalNotesDefaults *_lazy_notesDefaults;
    SBBiometricKitDefaults *_lazy_biometricKitDefaults;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) SBBiometricKitDefaults *biometricKitDefaults;
@property(readonly, retain, nonatomic) SBExternalNotesDefaults *notesDefaults;
@property(readonly, retain, nonatomic) SBExternalSoundsDefaults *soundDefaults;
@property(readonly, retain, nonatomic) SBExternalWifiDefaults *networkDefaults;
@property(readonly, retain, nonatomic) SBExternalPhoneDefaults *phoneDefaults;
@property(readonly, retain, nonatomic) SBExternalSettingsDefaults *settingsDefaults;
@property(readonly, retain, nonatomic) SBExternalSetupDefaults *setupDefaults;
@property(readonly, retain, nonatomic) SBExternalDemoDefaults *demoDefaults;
@property(readonly, retain, nonatomic) SBExternalDuetDefaults *duetDefaults;
@property(readonly, retain, nonatomic) SBExternalUIKitDefaults *uikitDefaults;
@property(readonly, retain, nonatomic) SBExternalGlobalDefaults *globalDefaults;

@end

