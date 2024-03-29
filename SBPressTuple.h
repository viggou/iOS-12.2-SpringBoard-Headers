//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSString;

@interface SBPressTuple : NSObject <BSDescriptionProviding>
{
    double _durationDown;
    double _durationUp;
}

@property(nonatomic) double durationUp; // @synthesize durationUp=_durationUp;
@property(nonatomic) double durationDown; // @synthesize durationDown=_durationDown;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDurationDown:(double)arg1 durationUp:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

