//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MTLumaDodgePillBackgroundLuminanceObserver-Protocol.h"
#import "SBAttentionAwarenessClientDelegate-Protocol.h"
#import "_UISettingsKeyPathObserver-Protocol.h"

@class MTLumaDodgePillView, NSMutableSet, NSString, SBAttentionAwarenessClient, SBHomeGrabberSettings;
@protocol SBHomeGrabberDelegate;

@interface SBHomeGrabberView : UIView <_UISettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, MTLumaDodgePillBackgroundLuminanceObserver>
{
    SBHomeGrabberSettings *_settings;
    MTLumaDodgePillView *_pillView;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    long long _touchState;
    unsigned long long _lastActivatingToken;
    unsigned long long _lastInitialHideToken;
    _Bool _autoHides;
    _Bool _edgeProtectEnabled;
    NSMutableSet *_hiddenOverrides;
    long long _luma;
    long long _presence;
    long long _style;
    unsigned long long _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    _Bool _suppressesBounce;
    id <SBHomeGrabberDelegate> _delegate;
    long long _colorBias;
}

+ (struct CGRect)grabberFrameForBounds:(struct CGRect)arg1;
+ (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
+ (double)suggestedEdgeSpacing;
@property(nonatomic) _Bool suppressesBounce; // @synthesize suppressesBounce=_suppressesBounce;
@property(nonatomic) long long colorBias; // @synthesize colorBias=_colorBias;
@property(nonatomic, getter=isEdgeProtectEnabled) _Bool edgeProtectEnabled; // @synthesize edgeProtectEnabled=_edgeProtectEnabled;
@property(nonatomic) _Bool autoHides; // @synthesize autoHides=_autoHides;
@property(nonatomic) __weak id <SBHomeGrabberDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg1;
- (void)clientDidResetForUserAttention:(id)arg1;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)layoutSubviews;
- (void)_bounce;
- (void)_noteActiveForTouchThatShouldUnhideImmediately:(_Bool)arg1;
- (void)_invalidateInitialAutoHideTime;
- (_Bool)_bounceHitTest:(struct CGPoint)arg1;
- (struct CGRect)_calculatePillFrame;
- (void)_updatePresence:(long long)arg1 style:(long long)arg2 withAnimationSettings:(id)arg3;
- (void)_animateToStyle:(long long)arg1 disallowAdditive:(_Bool)arg2 withAnimationSettings:(id)arg3;
- (void)_updateIdleTouchAwarenessClient;
- (id)_animationSettingsForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 fromPresence:(long long)arg3 toPresence:(long long)arg4;
- (_Bool)_edgeProtectEffectivelyEnabled;
- (_Bool)_autohideEffectivelyEnabled;
- (long long)_calculateStyle;
- (long long)_calculateLumaStyle;
- (long long)_calculatePresence;
- (void)setHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationSettings:(id)arg3;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isHidden;
- (void)updateStyleWithAnimationSettings:(id)arg1;
- (void)updateStyle;
- (void)resetAutoHideWithInitialDelay:(double)arg1;
- (void)resetAutoHide;
- (void)forgetBackgroundLuminance;
- (void)turnOffAutoHideWithDelay:(double)arg1;
- (void)turnOnAutoHideWithInitialDelay:(double)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

