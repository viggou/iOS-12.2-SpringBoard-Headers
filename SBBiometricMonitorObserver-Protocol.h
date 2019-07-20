//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBBiometricMonitorDataSource;

@protocol SBBiometricMonitorObserver <NSObject>

@optional
- (void)biometricMonitorDataSourcePoseUpdated:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingEnded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingFailed:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingStarted:(id <SBBiometricMonitorDataSource>)arg1;
@end

