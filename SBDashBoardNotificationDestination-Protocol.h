//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardParticipating-Protocol.h"
#import "SBNotificationExtensionVisibilityProviding-Protocol.h"
#import "SBNotificationLongLookPresenting-Protocol.h"

@class NCCoalescedNotification, NCNotificationRequest, NCNotificationSectionSettings;
@protocol SBDashBoardNotificationDispatcher;

@protocol SBDashBoardNotificationDestination <SBDashBoardParticipating, SBNotificationExtensionVisibilityProviding, SBNotificationLongLookPresenting>
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)updateNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
@end
