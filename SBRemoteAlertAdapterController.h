//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBRemoteAlertController.h>

@class SBRemoteAlertAdapter;
@protocol SBRemoteAlert;

@interface SBRemoteAlertAdapterController : SBRemoteAlertController
{
}

+ (Class)remoteAlertClass;
+ (_Bool)isDefinition:(id)arg1 equalToDefinition:(id)arg2;
+ (_Bool)isDefinition:(id)arg1 allowedForAuditToken:(id)arg2;
- (void)didInvalidate;
- (void)activateWithContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SBRemoteAlertAdapter<SBRemoteAlert> *alert; // @dynamic alert;

@end

