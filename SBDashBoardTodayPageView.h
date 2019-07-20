//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardPageViewBase.h"

@class UIScrollView, UIView, UIViewController;
@protocol SBDashBoardPageViewControllerProtocol;

@interface SBDashBoardTodayPageView : SBDashBoardPageViewBase
{
    UIViewController<SBDashBoardPageViewControllerProtocol> *_pageViewController;
    UIView *_todayView;
    UIScrollView *_widgetMajorScrollView;
    double _navigationBarTopInset;
}

@property(nonatomic) double navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property(retain, nonatomic) UIScrollView *widgetMajorScrollView; // @synthesize widgetMajorScrollView=_widgetMajorScrollView;
@property(retain, nonatomic) UIView *todayView; // @synthesize todayView=_todayView;
- (void)setPageViewController:(id)arg1;
- (id)pageViewController;
- (void).cxx_destruct;
- (void)_updateContentInsetsForScrollView:(id)arg1 snapsToRestingPositions:(_Bool)arg2;
- (void)_layoutTodayView;
- (void)_updateContentInsetsSnapScrollViewToRestingPosition:(_Bool)arg1;
- (void)updateContentInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
