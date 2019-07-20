//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBLiquidDetectionManager : NSObject
{
    int _wetToken;
    _Bool _finishedInit;
    _Bool _detectionEnabled;
    _Bool _accessoryPortWet;
}

+ (_Bool)showStatusBarIcon;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isAccessoryPortWet) _Bool accessoryPortWet; // @synthesize accessoryPortWet=_accessoryPortWet;
@property(readonly, nonatomic, getter=isDetectionEnabled) _Bool detectionEnabled; // @synthesize detectionEnabled=_detectionEnabled;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_stateDidUpdate;
- (void)_updateStatusBar;
- (_Bool)_showStatusBarIcon;
- (void)_updateWetState;
- (void)_finishInit;
@property(readonly, nonatomic, getter=isLiquidDetected) _Bool liquidDetected; // @dynamic liquidDetected;
- (void)dealloc;
- (id)init;

@end
