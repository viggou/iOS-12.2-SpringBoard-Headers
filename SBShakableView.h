//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSArray, NSString;

@interface SBShakableView : SBFTouchPassThroughView <CAAnimationDelegate>
{
    CDUnknownBlockType _shakeCompletionBlock;
    SBFTouchPassThroughView *_containerView;
    NSArray *_prototypeSpringAnimations;
    double _shakeDistance;
}

@property(nonatomic) double shakeDistance; // @synthesize shakeDistance=_shakeDistance;
@property(retain, nonatomic) NSArray *prototypeSpringAnimations; // @synthesize prototypeSpringAnimations=_prototypeSpringAnimations;
@property(readonly, nonatomic) SBFTouchPassThroughView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)beginShakingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invokeCompletionBlockIfNecessary;
- (id)_defaultSpringAnimations;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

