//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBApplicationSceneBackgroundView-Protocol.h"

@class NSString, SBWallpaperEffectView;

@interface SBApplicationSceneBackgroundView : UIView <SBApplicationSceneBackgroundView>
{
    long long _wallpaperStyle;
    SBWallpaperEffectView *_backgroundWallpaperEffectView;
    _Bool _needsClassicModeBackground;
    _Bool _shouldUseBrightMaterial;
}

@property(nonatomic) _Bool shouldUseBrightMaterial; // @synthesize shouldUseBrightMaterial=_shouldUseBrightMaterial;
@property(nonatomic) _Bool needsClassicModeBackground; // @synthesize needsClassicModeBackground=_needsClassicModeBackground;
@property(nonatomic) long long wallpaperStyle; // @synthesize wallpaperStyle=_wallpaperStyle;
- (void).cxx_destruct;
- (void)_teardownBackgroundWallpaperEffectView;
- (id)_backgroundWallpaperEffectView;
- (id)_opaqueBackgroundColorOrClearColor;
- (void)_setupBackground;
- (_Bool)_isTranslucent;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
