//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol SBStarkSessionConfiguring;

@interface SBStarkLockOutView : UIView
{
    id <SBStarkSessionConfiguring> _configuration;
    UILabel *_titleLabel;
    double _titleAscender;
    double _titleDescender;
    UIImageView *_imageView;
    struct CGSize _imageSize;
    UILabel *_messageLabel;
    double _messageAscender;
    double _messageDescender;
    UIButton *_backToOEMButton;
    UITapGestureRecognizer *_backToOEMGestureRecognizer;
    NSArray *_baselineSeparations;
}

@property(readonly, nonatomic) UIButton *backToOEMButton; // @synthesize backToOEMButton=_backToOEMButton;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)_sizeMessageToFitInFrame:(struct CGRect)arg1;
- (id)_messageFontOfSize:(double)arg1;
- (struct CGSize)_sizeTitleToFitInFrame:(struct CGRect)arg1;
- (id)_titleFontOfSize:(double)arg1;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)_backToOEM;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 title:(id)arg3 image:(id)arg4 message:(id)arg5 baselineSeparations:(id)arg6;

@end

