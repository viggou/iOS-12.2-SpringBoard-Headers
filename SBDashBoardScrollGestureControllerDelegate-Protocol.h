//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBDashBoardScrollGestureController, UIGestureRecognizer;

@protocol SBDashBoardScrollGestureControllerDelegate <NSObject>
- (_Bool)controller:(SBDashBoardScrollGestureController *)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(UIGestureRecognizer *)arg2;

@optional
- (void)controllerDidCancelHorizontalScrolling:(SBDashBoardScrollGestureController *)arg1;
- (void)controllerWillCancelHorizontalScrolling:(SBDashBoardScrollGestureController *)arg1;
@end

