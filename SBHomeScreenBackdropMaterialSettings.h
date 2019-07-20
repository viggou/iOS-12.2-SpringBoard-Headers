//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTMaterialSettings-Protocol.h"

@class MTVibrantStylingProvider, NSString;

@interface SBHomeScreenBackdropMaterialSettings : NSObject <MTMaterialSettings>
{
}

+ (id)sharedMaterialSettings;
- (void)updateWithSettingsFromArchive:(id)arg1;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;
@property(nonatomic) double tintAlpha;
@property(nonatomic) double brightness;
@property(nonatomic) double saturation;
@property(nonatomic) double luminanceAlpha;
@property(nonatomic) double blurRadius;
@property(nonatomic) _Bool usesLuminanceMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

