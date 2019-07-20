//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

#import "MCProfileConnectionObserver-Protocol.h"

@class NSString;

@interface SBAttentionAwarenessSettings : SBUISettings <MCProfileConnectionObserver>
{
    _Bool _allowsAttentionAwareAutoLock;
    _Bool _supportsAttentionSensor;
    _Bool _shouldUseAttentionSensor;
    _Bool _isObservingDataSources;
    struct AWNotification_s *_attentionAwarenessToken;
    double _sampleInterval;
    double _dimInterval;
    double _sleepInterval;
}

+ (id)settingsControllerModule;
+ (_Bool)attentionSensorSupported;
@property(nonatomic) double sleepInterval; // @synthesize sleepInterval=_sleepInterval;
@property(nonatomic) double dimInterval; // @synthesize dimInterval=_dimInterval;
@property(nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setDefaultValues;
@property(nonatomic) _Bool shouldUseAttentionSensor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

