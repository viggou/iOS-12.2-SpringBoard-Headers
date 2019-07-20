//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISpringLoadedInteractionEffect-Protocol.h"

@class NSString;
@protocol SBSpringLoadedInteractionEffectDelegate, UISpringLoadedInteractionEffect;

@interface SBSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect>
{
    id <UISpringLoadedInteractionEffect> _blinkEffect;
    _Bool _useFastBlinkAnimation;
    id <SBSpringLoadedInteractionEffectDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSpringLoadedInteractionEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useFastBlinkAnimation; // @synthesize useFastBlinkAnimation=_useFastBlinkAnimation;
- (void).cxx_destruct;
- (id)fastBlinkAnimation;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
