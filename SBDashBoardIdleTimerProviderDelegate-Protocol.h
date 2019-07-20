//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SBDashBoardIdleTimerProvider;
@protocol SBIdleTimer, SBIdleTimerBehaviorProviding;

@protocol SBDashBoardIdleTimerProviderDelegate
- (void)idleTimerWillRefresh:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidChange:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidWarn:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidExpire:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidRefresh:(SBDashBoardIdleTimerProvider *)arg1;
- (id <SBIdleTimer>)dashBoardIdleTimerProvider:(SBDashBoardIdleTimerProvider *)arg1 didProposeBehavior:(id <SBIdleTimerBehaviorProviding>)arg2 reason:(NSString *)arg3;
@end
