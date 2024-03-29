//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSystemGestureManager.h"

@class SBGestureDefaults, SBHomeGestureParticipant;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager
{
    SBGestureDefaults *_gestureDefaults;
    _Bool _multitaskingGesturesEnabled;
    SBHomeGestureParticipant *_accessibilityHomeGestureParticipant;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SBHomeGestureParticipant *accessibilityHomeGestureParticipant; // @synthesize accessibilityHomeGestureParticipant=_accessibilityHomeGestureParticipant;
- (void).cxx_destruct;
- (void)_updateUserPreferences;
- (void)setSystemGesturesDisabledForAccessibility:(_Bool)arg1;
- (_Bool)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint)arg1;
- (_Bool)_isTouchGestureWithType:(unsigned long long)arg1;
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (void)_evaluateEnablement;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)_initWithDisplayIdentity:(id)arg1;

@end

