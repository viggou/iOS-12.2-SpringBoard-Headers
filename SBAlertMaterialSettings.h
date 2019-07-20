//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTMaterialOverlaySettings-Protocol.h"
#import "MTMaterialSettings-Protocol.h"
#import "MTZooming-Protocol.h"

@class MTVibrantStylingProvider, NSString, UIColor;

@interface SBAlertMaterialSettings : NSObject <MTMaterialSettings, MTMaterialOverlaySettings, MTZooming>
{
    _Bool usesLuminanceMap;
    double saturation;
    double brightness;
    MTVibrantStylingProvider *vibrantStylingProvider;
    double luminanceAlpha;
    double tintAlpha;
    double blurRadius;
    UIColor *baseOverlayColor;
    double baseOverlayTintAlpha;
    UIColor *secondaryOverlayTintColor;
    double primaryOverlayTintAlpha;
    double secondaryOverlayTintAlpha;
    UIColor *primaryOverlayTintColor;
    double _zoom;
}

+ (id)sharedMaterialSettings;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(copy, nonatomic) UIColor *primaryOverlayTintColor; // @synthesize primaryOverlayTintColor;
@property(nonatomic) double secondaryOverlayTintAlpha; // @synthesize secondaryOverlayTintAlpha;
@property(nonatomic) double primaryOverlayTintAlpha; // @synthesize primaryOverlayTintAlpha;
@property(readonly, copy, nonatomic) UIColor *secondaryOverlayTintColor; // @synthesize secondaryOverlayTintColor;
@property(nonatomic) double baseOverlayTintAlpha; // @synthesize baseOverlayTintAlpha;
@property(readonly, copy, nonatomic) UIColor *baseOverlayColor; // @synthesize baseOverlayColor;
@property(nonatomic) double blurRadius; // @synthesize blurRadius;
@property(nonatomic) double tintAlpha; // @synthesize tintAlpha;
@property(nonatomic) double luminanceAlpha; // @synthesize luminanceAlpha;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider; // @synthesize vibrantStylingProvider;
@property(nonatomic) double brightness; // @synthesize brightness;
@property(nonatomic) double saturation; // @synthesize saturation;
@property(nonatomic) _Bool usesLuminanceMap; // @synthesize usesLuminanceMap;
- (void).cxx_destruct;
- (void)updateWithSettingsFromArchive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

