//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBBestAppSuggestion.h"

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion
{
    UABestAppSuggestion *_appSuggestion;
}

@property(readonly, nonatomic) UABestAppSuggestion *appSuggestion; // @synthesize appSuggestion=_appSuggestion;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isHandoff;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCallContinuitySuggestion;
- (_Bool)isOpenURLSuggestion;
- (_Bool)isNotificationSuggestion;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)originatingDeviceIdentifier;
- (id)lastUpdateTime;
- (id)activityType;
- (id)bundleIdentifier;
- (id)uniqueIdentifier;
- (id)initWithAppSuggestion:(id)arg1;

@end

