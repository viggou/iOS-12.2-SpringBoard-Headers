//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBUIPasscodeLockView;

@protocol SBUIPasscodeLockViewDelegate <NSObject>

@optional
- (void)passcodeLockViewStateChange:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewPasscodeEntered:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id <SBUIPasscodeLockView>)arg1;
@end
