//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBSApplicationShortcutItem, SBUIAppIconForceTouchController, SBUIForceTouchGestureRecognizer;

@protocol SBUIAppIconForceTouchControllerDelegate <NSObject>

@optional
- (_Bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3 forGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg4;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 didDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 willDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 didPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 willPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (_Bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldUseSecureWindowForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (_Bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldHandleGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
@end
