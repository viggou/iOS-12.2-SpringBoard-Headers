//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBApplication, SBStarkStatusBarViewController, UIStatusBar;

@protocol SBStarkStatusBarViewControllerDelegate <NSObject>
- (void)statusBarViewController:(SBStarkStatusBarViewController *)arg1 handledRecordingItemActionWithApplication:(SBApplication *)arg2;
- (void)statusBar:(UIStatusBar *)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;
- (void)handleStatusBarBackPress;
@end
