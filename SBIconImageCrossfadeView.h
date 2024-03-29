//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBIconImageView, UIView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView
{
    UIView *_containerView;
    UIView *_crossfadeContainerView;
    SBIconImageView *_iconImageView;
    UIView *_crossfadeView;
    double _containerScaleX;
    double _containerScaleY;
    double _morphFraction;
    _Bool _masksCorners;
    _Bool _performsTrueCrossfade;
    _Bool _cornerRadiusEnabled;
    struct CGPoint _stretchAnchorPoint;
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool cornerRadiusEnabled; // @synthesize cornerRadiusEnabled=_cornerRadiusEnabled;
@property(nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *scalingView;
@property(readonly, nonatomic) UIView *crossfadeView;
@property(readonly, nonatomic) SBIconImageView *iconImageView;
- (void)applyCornerRadius:(double)arg1;
- (void)_updateCornerMask;
- (void)cleanup;
- (void)setMorphFraction:(double)arg1;
- (void)setAppSnapshotCornerRadius:(double)arg1;
- (void)setCrossfadeFraction:(double)arg1;
- (void)layoutSubviews;
- (void)prepareGeometry;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;

@end

