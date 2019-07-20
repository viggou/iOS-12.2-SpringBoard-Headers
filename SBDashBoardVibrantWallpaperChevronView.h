//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBUIChevronView.h>

#import "SBUILegibility-Protocol.h"

@class NSString, SBWallpaperEffectView, _UILegibilitySettings;

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility>
{
    double _legibilityStrength;
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperEffectView *_effectView;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_legibilityStrength;
- (void).cxx_destruct;
- (void)_updateVibrancy;
- (id)initWithColor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

