//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBPasscodeEntryAlertView;

@protocol SBPasscodeEntryAlertViewDelegate <NSObject>

@optional
- (void)passcodeAlertViewIsReadyToBeRemoved:(SBPasscodeEntryAlertView *)arg1;
- (_Bool)passcodeAlertViewShouldAnimatePresentation:(SBPasscodeEntryAlertView *)arg1;
- (_Bool)passcodeAlertViewShouldShowAutomaticallyWhenVisible:(SBPasscodeEntryAlertView *)arg1;
@end
