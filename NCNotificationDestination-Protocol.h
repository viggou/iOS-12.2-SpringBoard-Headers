//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCCoalescedNotification, NCNotificationRequest, NCNotificationSectionSettings, NSString;
@protocol NCNotificationDestinationDelegate;

@protocol NCNotificationDestination <NSObject>
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (_Bool)canReceiveNotificationRequest:(NCNotificationRequest *)arg1;

@optional
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (_Bool)interceptsQueueRequest:(NCNotificationRequest *)arg1;
@end
