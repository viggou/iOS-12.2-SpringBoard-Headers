//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SBDashBoardViewController, SBLockScreenUnlockRequest;

@protocol SBDashBoardViewControllerDelegate <NSObject>
- (void)dashBoardViewController:(SBDashBoardViewController *)arg1 unlockWithRequest:(SBLockScreenUnlockRequest *)arg2 completion:(void (^)(_Bool))arg3;
- (void)dashBoardViewController:(SBDashBoardViewController *)arg1 requestsTouchIDDisabled:(_Bool)arg2 forReason:(NSString *)arg3;
- (void)dashBoardViewControllerIrisPlayingDidFinish:(SBDashBoardViewController *)arg1;
@end

