//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@interface SBLockScreenPasscodeSettings : SBUISettings
{
    double _lightenSourceOverColorWhite;
    double _lightenSourceOverColorAlpha;
    double _plusDColorWhite;
    double _plusDColorAlpha;
}

+ (id)settingsControllerModule;
@property(nonatomic) double plusDColorAlpha; // @synthesize plusDColorAlpha=_plusDColorAlpha;
@property(nonatomic) double plusDColorWhite; // @synthesize plusDColorWhite=_plusDColorWhite;
@property(nonatomic) double lightenSourceOverColorAlpha; // @synthesize lightenSourceOverColorAlpha=_lightenSourceOverColorAlpha;
@property(nonatomic) double lightenSourceOverColorWhite; // @synthesize lightenSourceOverColorWhite=_lightenSourceOverColorWhite;
- (void)setDefaultValues;

@end
