//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings
{
    SBAnimationSettings *_innerFolderFadeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *innerFolderFadeSettings; // @synthesize innerFolderFadeSettings=_innerFolderFadeSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

