//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARInputDeviceTouchpad, CARSessionStatus;

@interface SBStarkFocusMovementManager : NSObject
{
    CARSessionStatus *_sessionStatus;
    CARInputDeviceTouchpad *_currentTouchpad;
    unsigned long long _currentSenderID;
}

- (void).cxx_destruct;
- (_Bool)isMovementAllowedForHeading:(unsigned long long)arg1 direction:(unsigned long long)arg2 isRTL:(_Bool)arg3 isLeftHandDrive:(_Bool)arg4;
- (void)performHapticFeedbackForSenderID:(unsigned long long)arg1;
- (id)init;

@end
