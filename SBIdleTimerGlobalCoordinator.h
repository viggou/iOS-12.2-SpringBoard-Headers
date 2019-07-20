//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayLayoutObserver-Protocol.h"
#import "ITIdleTimerStateServiceDelegate-Protocol.h"
#import "SBIdleTimerCoordinating-Protocol.h"
#import "SBIdleTimerObserving-Protocol.h"
#import "SBPocketStateMonitorObserver-Protocol.h"

@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSString, SBIdleTimerCoordinatorHelper, SBIdleTimerDefaults, SBIdleTimerDescriptor, SBIdleTimerDescriptorFactory, SBIdleTimerProxy;
@protocol BSInvalidatable, SBIdleTimer, SBIdleTimerGlobalCoordinatorDelegate, SBIdleTimerProviding, SBIdleTimerResetSource;

@interface SBIdleTimerGlobalCoordinator : NSObject <SBPocketStateMonitorObserver, FBSDisplayLayoutObserver, SBIdleTimerObserving, ITIdleTimerStateServiceDelegate, SBIdleTimerCoordinating>
{
    SBIdleTimerDescriptorFactory *_idleTimerDescriptorFactory;
    SBIdleTimerProxy *_idleTimerProxy;
    SBIdleTimerDescriptor *_disabledIdleTimerDescriptor;
    SBIdleTimerProxy *_enabledIdleTimerProxy;
    SBIdleTimerDescriptor *_enabledIdleTimerDescriptor;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBIdleTimerDefaults *_idleTimerDefaults;
    id <BSInvalidatable> _disableAutoDimAssertion;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    _Bool _started;
    id <SBIdleTimerResetSource> _lastResetSource;
    id <BSInvalidatable> _stateCaptureAssertion;
    id <SBIdleTimerGlobalCoordinatorDelegate> _delegate;
    id <SBIdleTimerProviding> _idleTimerProvider;
    NSMutableDictionary *_idleTimerDisableAssertions;
}

+ (void)registerServices;
+ (id)sharedIdleTimerStateService;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
@property(retain, nonatomic, getter=_idleTimerDisableAssertions, setter=_setIdleTimerDisableAssertions:) NSMutableDictionary *idleTimerDisableAssertions; // @synthesize idleTimerDisableAssertions=_idleTimerDisableAssertions;
@property(nonatomic, getter=_idleTimerProvider, setter=_setIdleTimerProvider:) __weak id <SBIdleTimerProviding> idleTimerProvider; // @synthesize idleTimerProvider=_idleTimerProvider;
@property(nonatomic) __weak id <SBIdleTimerGlobalCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)disableIdleTimerForClient:(id)arg1 forReason:(id)arg2;
- (void)idleTimerDidResetForUserAttention:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)_powerStateDidChange;
- (void)_batterySaverModeDidChange;
- (void)_proximityChanged;
- (void)_updateAutoDimDisableAssertion;
- (void)_idleTimerPrefsChanged;
- (id)_stateCaptureDescription;
- (void)_addStateCaptureHandlers;
- (void)_setIdleTimerWithDescriptor:(id)arg1 forReason:(id)arg2;
- (void)_setIdleTimerSourceEnabled:(_Bool)arg1 forReason:(id)arg2;
- (id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 forReason:(id)arg3;
- (id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 descriptor:(id)arg3 forReason:(id)arg4;
- (id)_activeIdleTimerProvider;
- (_Bool)_updateIdleTimerForReason:(id)arg1;
- (_Bool)_hasIdleTimerDisableAssertions;
- (void)_logEffectiveLockTimeout;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)pocketStateMonitor:(id)arg1 pocketStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)acquireIdleTimerDisableAssertionForReason:(id)arg1;
- (void)resetIdleTimerIfNonConsecutiveSource:(id)arg1 forReason:(id)arg2;
- (void)resetIdleTimerForReason:(id)arg1;
- (void)resetIdleTimer;
@property(readonly, nonatomic) id <SBIdleTimer> idleTimer;
- (void)start;
@property(readonly, nonatomic, getter=isIdleTimerDisabled) _Bool idleTimerDisabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

