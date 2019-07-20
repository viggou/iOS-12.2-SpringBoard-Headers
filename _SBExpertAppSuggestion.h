//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBBestAppSuggestion.h"

@class NSUUID, _DECAppItem, _DECResult;

@interface _SBExpertAppSuggestion : SBBestAppSuggestion
{
    _DECAppItem *_appSuggestion;
    _DECResult *_result;
}

@property(readonly, nonatomic) _DECResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) _DECAppItem *appSuggestion; // @synthesize appSuggestion=_appSuggestion;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isArrivedAtHomePrediction;
- (_Bool)isArrivedAtWorkPrediction;
- (_Bool)isFirstWakePrediction;
- (_Bool)isCarPlayPrediction;
- (_Bool)isBluetoothAudioPrediction;
- (_Bool)isBluetoothPrediction;
- (_Bool)isHeadphonesPrediction;
- (_Bool)isPrediction;
- (_Bool)isLocallyGeneratedSuggestion;
- (id)originatingDeviceName;
- (_Bool)isLocationBasedSuggestion;
- (id)bundleIdentifier;
@property(readonly, nonatomic) NSUUID *resultUUID;
- (id)initWithAppSuggestion:(id)arg1 result:(id)arg2;

@end

