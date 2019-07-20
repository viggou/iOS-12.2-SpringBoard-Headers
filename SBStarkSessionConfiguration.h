//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBStarkSessionConfiguring-Protocol.h"

@class AVExternalDevice, CRCarPlayAppPolicyEvaluator, CRVehicleInformation, FBSDisplayConfiguration, FBSDisplayIdentity, NSMutableDictionary, NSSet, NSString, UIScreen, UITraitCollection;

@interface SBStarkSessionConfiguration : NSObject <SBStarkSessionConfiguring>
{
    CRVehicleInformation *_vehicleInformation;
    AVExternalDevice *_device;
    unsigned long long _interactionAffordances;
    long long _layoutJustification;
    FBSDisplayConfiguration *_displayConfiguration;
    UIScreen *_screen;
    double _screenScale;
    _Bool _screenSupportsFocus;
    struct CGRect _screenBounds;
    UITraitCollection *_traitCollection;
    _Bool _acBackSupported;
    _Bool _connectedWirelessly;
    _Bool _knownVehicle;
    NSString *_layoutId;
    NSString *_OEMIconLabel;
    _Bool _OEMIconVisible;
    _Bool _pairedVehicle;
    CRCarPlayAppPolicyEvaluator *_appPolicyEvaluator;
    NSMutableDictionary *_appPolicyForBundleID;
}

+ (id)configurationForSettingsLayoutWithId:(id)arg1 onScreen:(id)arg2;
+ (id)configurationForSettingsLayoutWithId:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isPairedVehicle) _Bool pairedVehicle;
@property(retain, nonatomic) NSString *layoutId;
@property(nonatomic, getter=isKnownVehicle) _Bool knownVehicle;
@property(nonatomic, getter=isGeoSupported) _Bool geoSupported;
@property(retain, nonatomic) NSSet *simulatedAccessoryProtocols;
- (id)policyForApp:(id)arg1;
@property(readonly, nonatomic, getter=isOEMIconVisible) _Bool OEMIconVisible;
@property(readonly, nonatomic) NSString *OEMIconLabel;
@property(readonly, nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property(readonly, nonatomic, getter=isAmbientBrightnessNighttime) _Bool ambientBrightnessNighttime;
@property(readonly, nonatomic, getter=isACBackSupported) _Bool acBackSupported;
@property(readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) struct CGRect screenBounds;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property(readonly, nonatomic) _Bool screenSupportsFocus;
@property(readonly, nonatomic) long long layoutJustification;
@property(readonly, nonatomic) unsigned long long interactionAffordances;
@property(readonly, nonatomic) AVExternalDevice *device;
- (id)_init;
- (id)initWithVehicleInformation:(id)arg1 device:(id)arg2 screen:(id)arg3 displayConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
