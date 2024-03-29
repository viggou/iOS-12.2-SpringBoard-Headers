//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBDockIconListView, SBFloatingDockPlatterView, UIView;

@interface SBFloatingDockView : SBFTouchPassThroughView
{
    SBDockIconListView *_userIconListView;
    SBDockIconListView *_recentIconListView;
    double _additionalWallpaperRelativeFrameOffset;
    unsigned long long _minimumUserIconSpaces;
    SBFloatingDockPlatterView *_mainPlatterView;
    UIView *_dividerView;
    UIView *_touchReceivingView;
    double _iconContentScale;
    struct UIEdgeInsets _paddingEdgeInsets;
}

+ (void)getMetrics:(CDStruct_c0971cc5 *)arg1 forBounds:(struct CGRect)arg2 numberOfUserIcons:(unsigned long long)arg3 numberOfRecentIcons:(unsigned long long)arg4 paddingEdgeInsets:(struct UIEdgeInsets)arg5;
+ (double)contentHeightForBounds:(struct CGRect)arg1 mainPlatterViewFrame:(struct CGRect)arg2;
+ (struct CGSize)maximumIconSize;
+ (double)minimumPlatterMargin;
+ (double)maximumPlatterHeight;
+ (double)maximumInterIconSpacing;
+ (double)maximumDockContinuousCornerRadius;
+ (double)_referenceInterIconSpacing;
+ (struct CGSize)_referenceIconSize;
@property(nonatomic) double iconContentScale; // @synthesize iconContentScale=_iconContentScale;
@property(retain, nonatomic) UIView *touchReceivingView; // @synthesize touchReceivingView=_touchReceivingView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) SBFloatingDockPlatterView *mainPlatterView; // @synthesize mainPlatterView=_mainPlatterView;
@property(nonatomic) unsigned long long minimumUserIconSpaces; // @synthesize minimumUserIconSpaces=_minimumUserIconSpaces;
@property(nonatomic) double additionalWallpaperRelativeFrameOffset; // @synthesize additionalWallpaperRelativeFrameOffset=_additionalWallpaperRelativeFrameOffset;
@property(nonatomic) struct UIEdgeInsets paddingEdgeInsets; // @synthesize paddingEdgeInsets=_paddingEdgeInsets;
@property(retain, nonatomic) SBDockIconListView *recentIconListView; // @synthesize recentIconListView=_recentIconListView;
@property(retain, nonatomic) SBDockIconListView *userIconListView; // @synthesize userIconListView=_userIconListView;
- (void).cxx_destruct;
- (void)bounce;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)getMetrics:(CDStruct_c0971cc5 *)arg1 forBounds:(struct CGRect)arg2;
@property(readonly, nonatomic) double interIconSpacing;
- (double)iconContentScaleForNumberOfUserIcons:(unsigned long long)arg1;
- (double)contentHeightForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) double contentHeight;
- (struct UIEdgeInsets)platterShadowOutsetsForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets platterShadowOutsets;
@property(nonatomic) _Bool hasPlatterShadow;
@property(readonly, nonatomic) struct CGRect platterFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

