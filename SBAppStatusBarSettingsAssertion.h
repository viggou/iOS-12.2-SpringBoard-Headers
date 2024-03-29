//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSDate, NSString, SBAppStatusBarSettings;

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding>
{
    SBAppStatusBarSettings *_settings;
    unsigned long long _level;
    NSString *_reason;
    NSDate *_timestamp;
}

@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, copy, nonatomic) SBAppStatusBarSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidateWithAnimationParameters:(id)arg1;
- (void)invalidate;
- (void)modifySettingsWithBlock:(CDUnknownBlockType)arg1 animationParameters:(id)arg2;
- (void)modifySettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)acquireWithAnimationParameters:(id)arg1;
- (void)acquire;
- (id)initWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

