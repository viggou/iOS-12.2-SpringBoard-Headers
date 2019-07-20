//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TUCallCenter;

@interface SBConferenceManager : NSObject
{
    _Bool _hasFaceTimeCapability;
    struct MGNotificationTokenStruct *_faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)endFaceTime;
- (void)_faceTimeStateChanged:(id)arg1;
- (void)dealloc;
- (_Bool)canStartFaceTime;
- (id)currentFaceTimeCall;
- (id)activeFaceTimeCall;
- (id)incomingFaceTimeCall;
- (_Bool)inFaceTime;
- (_Bool)activeFaceTimeCallExists;
- (_Bool)faceTimeInvitationExists;
- (_Bool)faceTimeIsAvailable;
- (_Bool)hasFaceTimeCapability;
- (id)init;

@end

