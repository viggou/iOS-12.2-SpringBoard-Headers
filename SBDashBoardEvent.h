//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SBDashBoardEvent : NSObject
{
    _Bool _consumable;
    long long _type;
    NSNumber *_value;
}

+ (id)eventWithType:(long long)arg1;
@property(nonatomic, getter=isConsumable) _Bool consumable; // @synthesize consumable=_consumable;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;

@end

