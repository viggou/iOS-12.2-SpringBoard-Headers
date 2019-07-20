//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "UICoordinateSpace-Protocol.h"

@class NSString;
@protocol UICoordinateSpace;

@interface SBDashBoardRegion : NSObject <NSCopying, UICoordinateSpace>
{
    _Bool _hidden;
    _Bool _reservedForHorizontalScrolling;
    NSString *_identifier;
    long long _role;
    id <UICoordinateSpace> _coordinateSpace;
    id <UICoordinateSpace> _identity;
    id _provider;
    struct CGRect _extent;
}

+ (id)regionForCoordinateSpace:(id)arg1 withExtent:(struct CGRect)arg2;
+ (id)regionForCoordinateSpace:(id)arg1;
@property(nonatomic, getter=isReservedForHorizontalScrolling) _Bool reservedForHorizontalScrolling; // @synthesize reservedForHorizontalScrolling=_reservedForHorizontalScrolling;
@property(nonatomic) __weak id provider; // @synthesize provider=_provider;
@property(nonatomic) __weak id <UICoordinateSpace> identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(readonly, nonatomic) struct CGRect extent; // @synthesize extent=_extent;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)intersectsCoordinateSpace:(id)arg1;
- (id)role:(long long)arg1;
- (id)regionForCoordinateSpace:(id)arg1;
- (id)initWithCoordinateSpace:(id)arg1 withExtent:(struct CGRect)arg2 role:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

