//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSWatchdog;

@protocol BSWatchdogDelegate <NSObject>

@optional
- (void)watchdogCancelled:(BSWatchdog *)arg1;
- (void)watchdogFired:(BSWatchdog *)arg1;
- (void)watchdogStarted:(BSWatchdog *)arg1;
@end

