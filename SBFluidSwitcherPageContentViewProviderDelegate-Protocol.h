//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBAppLayout, SBFluidSwitcherPageContentViewProvider, UIViewController;

@protocol SBFluidSwitcherPageContentViewProviderDelegate <NSObject>
- (UIViewController *)containerViewControllerForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (struct CGSize)sizeForAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;
- (long long)orientationForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
@end

