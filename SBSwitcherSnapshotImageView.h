//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface SBSwitcherSnapshotImageView : UIView
{
    UIImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    unsigned long long _maskedCorners;
    _Bool _usesNonuniformScaling;
    _Bool _hasOpaqueContents;
    long long _orientationForClassicLayout;
}

@property(nonatomic) long long orientationForClassicLayout; // @synthesize orientationForClassicLayout=_orientationForClassicLayout;
@property(nonatomic) _Bool hasOpaqueContents; // @synthesize hasOpaqueContents=_hasOpaqueContents;
@property(nonatomic) _Bool usesNonuniformScaling; // @synthesize usesNonuniformScaling=_usesNonuniformScaling;
- (void).cxx_destruct;
- (void)_updateCornerRadius;
- (_Bool)_isUsingExternalClassicLayout;
- (double)_transformScale;
- (double)_transformVerticalScale;
- (double)_transformHorizontalScale;
- (struct CGAffineTransform)scalingTransform;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long maskedCorners;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIImage *image;
- (id)initWithImage:(id)arg1;

@end

