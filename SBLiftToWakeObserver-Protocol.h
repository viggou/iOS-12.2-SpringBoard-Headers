//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBLiftToWakeController;

@protocol SBLiftToWakeObserver <NSObject>

@optional
- (void)liftToWakeController:(SBLiftToWakeController *)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;
- (void)liftToWakeControllerEnablementDidChange:(SBLiftToWakeController *)arg1;
@end

