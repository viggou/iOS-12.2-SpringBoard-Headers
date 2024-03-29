//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@interface SBHorizontalScrollFailureRecognizerSettings : SBUISettings
{
    _Bool _enabled;
    _Bool _viewDebugArea;
    unsigned long long _maxAllowableVerticalOffset;
    double _topAngle;
    double _bottomAngle;
}

+ (id)settingsControllerModule;
@property(nonatomic) double bottomAngle; // @synthesize bottomAngle=_bottomAngle;
@property(nonatomic) double topAngle; // @synthesize topAngle=_topAngle;
@property(nonatomic) unsigned long long maxAllowableVerticalOffset; // @synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset;
@property(nonatomic) _Bool viewDebugArea; // @synthesize viewDebugArea=_viewDebugArea;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setDefaultValues;

@end

