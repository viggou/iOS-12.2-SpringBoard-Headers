//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, _UIBackdropView;

@interface SBHUDView : UIView
{
    int _level;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    _Bool _showsProgress;
    float _progress;
    UIView *_blockView;
    _UIBackdropView *_backdropView;
    UIImageView *_backdropMaskImageView;
}

+ (float)progressIndicatorStep;
+ (long long)numberOfProgressIndicatorSteps;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool showsProgress; // @synthesize showsProgress=_showsProgress;
@property(nonatomic) int level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateBlockView;
- (id)_blockColorForValue:(float)arg1;
- (void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(struct CGSize)arg3 point:(struct CGPoint)arg4;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (_Bool)displaysLabel;
- (void)_updateBackdropMask;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelDismissal;
- (id)initWithHUDViewLevel:(int)arg1;

@end

