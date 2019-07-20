//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SBAppLayout, SBDisplayItem, SBIconView, SBMainDisplayLayoutState, SBWindow;

@protocol SBMainAppSwitcherContentViewControllerDataSource <NSObject>
- (_Bool)isInAppStatusBarRequestedHidden;
- (long long)homeScreenInterfaceOrientation;
- (long long)switcherInterfaceOrientation;
- (SBWindow *)mainSwitcherWindow;
- (SBIconView *)iconViewForDisplayItem:(SBDisplayItem *)arg1;
- (SBDisplayItem *)_displayItemFromLayoutElementWithIdentifier:(NSString *)arg1;
- (NSArray *)appLayouts;
- (SBMainDisplayLayoutState *)initialLayoutState;
- (SBAppLayout *)initialAppLayout;
- (SBAppLayout *)returnToAppLayout;
@end
