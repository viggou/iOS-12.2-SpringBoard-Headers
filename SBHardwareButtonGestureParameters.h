//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface SBHardwareButtonGestureParameters : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    long long _maximumPressCount;
    double _longPressTimeInterval;
    double _multiplePressTimeInterval;
}

@property(readonly, nonatomic) double multiplePressTimeInterval; // @synthesize multiplePressTimeInterval=_multiplePressTimeInterval;
@property(readonly, nonatomic) double longPressTimeInterval; // @synthesize longPressTimeInterval=_longPressTimeInterval;
@property(readonly, nonatomic) long long maximumPressCount; // @synthesize maximumPressCount=_maximumPressCount;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

