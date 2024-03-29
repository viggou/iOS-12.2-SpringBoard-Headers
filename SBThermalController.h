//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBFThermalBlockProvider-Protocol.h"

@class NSHashTable, NSString, NSUUID, SBExternalWifiDefaults, SBSecurityDefaults, SBThermalDefaults;

@interface SBThermalController : NSObject <SBFThermalBlockProvider>
{
    NSUUID *_samplingToken;
    int _hotToken;
    unsigned long long _hotLevel;
    int _coldToken;
    unsigned long long _coldLevel;
    int _sunToken;
    unsigned long long _sunLevel;
    long long _level;
    _Bool _inSunlight;
    NSHashTable *_observers;
    SBExternalWifiDefaults *_networkDefaults;
    SBThermalDefaults *_thermalDefaults;
    SBSecurityDefaults *_securityDefaults;
}

+ (void)logThermalEvent:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isInSunlight) _Bool inSunlight; // @synthesize inSunlight=_inSunlight;
@property(readonly, nonatomic) long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)_setBlocked:(_Bool)arg1;
- (_Bool)_isBlocked;
- (void)_updateThermalJetsamCPUSamplingState;
- (void)_respondToCurrentThermalCondition;
- (void)removeThermalObserver:(id)arg1;
- (void)addThermalObserver:(id)arg1;
- (_Bool)isThermalBlocked;
@property(readonly, copy) NSString *description;
- (void)startListeningForThermalEvents;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

