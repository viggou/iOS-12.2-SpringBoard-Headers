//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

@interface SBCrossfadeZoomSettings : SBScaleZoomSettings
{
    _Bool _morphWithZoom;
    SBAnimationSettings *_morphSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *morphSettings; // @synthesize morphSettings=_morphSettings;
@property _Bool morphWithZoom; // @synthesize morphWithZoom=_morphWithZoom;
- (void).cxx_destruct;
- (id)effectiveMorphAnimationSettings;
- (void)setDefaultValues;

@end

