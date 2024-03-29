//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBHUDView.h"

@interface SBVolumeHUDView : SBHUDView
{
    int _mode;
    _Bool _headphonesPresent;
    float _euVolumeLimit;
}

+ (_Bool)wouldShowAtLeastAYellowBlockForVolume:(float)arg1 euVolumeLimit:(float)arg2;
+ (float)volumeStepDownForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2;
+ (float)volumeStepUpForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2;
@property(nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_euVolumeLimit;
@property(nonatomic) _Bool headphonesPresent; // @synthesize headphonesPresent=_headphonesPresent;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(struct CGSize)arg3 point:(struct CGPoint)arg4;
- (id)_blockColorForValue:(float)arg1;
- (void)setProgress:(float)arg1;
- (id)init;
- (void)_updateLabels;
- (void)_updateImage;

@end

