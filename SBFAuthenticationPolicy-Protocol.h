//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol SBFAuthenticationPolicy <NSObject>
- (void)wipeDeviceWithReason:(NSString *)arg1;
- (_Bool)usesSecureMode;
- (_Bool)shouldClearBlockStateOnSync;
- (_Bool)allowAuthenticationRevocation;

@optional
- (void)passcodeAuthenticationFailedWithError:(NSError *)arg1;
- (void)clearPasscodeCache;
- (void)cachePasscode:(NSString *)arg1;
@end
