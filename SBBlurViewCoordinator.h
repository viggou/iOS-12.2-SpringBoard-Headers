//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SBBlurViewCoordinator : NSObject
{
    NSArray *_elementVCs;
    unsigned long long _state;
    NSMutableDictionary *_mapStateToBlocks;
}

@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_elementVCs;
- (void).cxx_destruct;
- (void)_fireBlocksForState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)removeNotifyBlock:(CDUnknownBlockType)arg1 forState:(unsigned long long)arg2;
- (void)addNotifyBlock:(CDUnknownBlockType)arg1 forState:(unsigned long long)arg2;
- (void)setBlurred:(_Bool)arg1 withAnimationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isBlurred) _Bool blurred;
- (id)description;
- (id)init;
- (id)initWithElementViewControllers:(id)arg1;

@end

