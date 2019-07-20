//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@class SBFHomeScreenWallpaperParallaxSettings, SBFLockScreenWallpaperParallaxSettings, SBFParallaxSettings;

@interface SBAppParallaxSettings : SBUISettings
{
    SBFLockScreenWallpaperParallaxSettings *_lockscreenWallpaperSettings;
    SBFHomeScreenWallpaperParallaxSettings *_homescreenWallpaperSettings;
    SBFParallaxSettings *_iconSettings;
    SBFParallaxSettings *_iconBadgeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBFParallaxSettings *iconBadgeSettings; // @synthesize iconBadgeSettings=_iconBadgeSettings;
@property(retain) SBFParallaxSettings *iconSettings; // @synthesize iconSettings=_iconSettings;
@property(retain) SBFHomeScreenWallpaperParallaxSettings *homescreenWallpaperSettings; // @synthesize homescreenWallpaperSettings=_homescreenWallpaperSettings;
@property(retain) SBFLockScreenWallpaperParallaxSettings *lockscreenWallpaperSettings; // @synthesize lockscreenWallpaperSettings=_lockscreenWallpaperSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
