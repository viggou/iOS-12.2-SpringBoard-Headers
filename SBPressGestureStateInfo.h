//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBPressGestureStateInfo : NSObject
{
    _Bool _isCoalescing;
    long long _state;
    double _expirationTime;
    long long _stateUponExpiration;
}

@property(nonatomic) long long stateUponExpiration; // @synthesize stateUponExpiration=_stateUponExpiration;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) _Bool isCoalescing; // @synthesize isCoalescing=_isCoalescing;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)init;

@end

