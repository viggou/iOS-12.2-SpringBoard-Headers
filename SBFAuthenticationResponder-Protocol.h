//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SBFAuthenticationRequest;

@protocol SBFAuthenticationResponder <NSObject>
- (void)handleInvalidAuthenticationRequest:(SBFAuthenticationRequest *)arg1;
- (void)handleFailedAuthenticationRequest:(SBFAuthenticationRequest *)arg1 error:(NSError *)arg2;
- (void)handleSuccessfulAuthenticationRequest:(SBFAuthenticationRequest *)arg1;
@end

