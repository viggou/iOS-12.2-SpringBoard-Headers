//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_UISettingsKeyObserver-Protocol.h"

@class NSString, PCPersistentTimer, SBLockScreenSettings, SBMediaController;
@protocol SBLockScreenNowPlayingControllerDelegate;

@interface SBLockScreenNowPlayingController : NSObject <_UISettingsKeyObserver>
{
    SBMediaController *_mediaController;
    PCPersistentTimer *_disableTimer;
    SBLockScreenSettings *_testSettings;
    _Bool _enabled;
    long long _currentState;
    id <SBLockScreenNowPlayingControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLockScreenNowPlayingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_disableTimerFired;
- (void)_invalidateDisableTimer;
- (void)_startDisableTimer;
- (void)_updateToState:(long long)arg1;
- (void)_updateNowPlayingPlugin;
- (void)_removeObservers;
- (void)_addObservers;
- (_Bool)_isMediaRecentlyActive;
- (double)_timeoutInterval;
- (_Bool)isNowPlayingActive;
- (void)dealloc;
- (id)initWithMediaController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

