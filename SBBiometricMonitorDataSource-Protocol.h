//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBBiometricMonitorObserver;

@protocol SBBiometricMonitorDataSource <NSObject>
@property(readonly, nonatomic) _Bool poseIsMarginal;
@property(readonly, nonatomic) _Bool matchRunning;
@property(readonly, nonatomic) _Bool presenceDetectRunning;
- (void)removeObserver:(id <SBBiometricMonitorObserver>)arg1;
- (void)addObserver:(id <SBBiometricMonitorObserver>)arg1;
@end

