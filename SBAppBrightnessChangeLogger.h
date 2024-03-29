//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SBAppBrightnessChangeLogger : NSObject
{
    NSString *_bundleID;
    long long _brightnessLevel;
    NSDate *_eventTimestamp;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDate *eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property(nonatomic) long long brightnessLevel; // @synthesize brightnessLevel=_brightnessLevel;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)_screenLocked;
- (void)_publishMetrics;
- (void)_publishMetricsIfNeeded;
- (void)noteApp:(id)arg1 setScreenBrightness:(double)arg2;
- (id)init;

@end

