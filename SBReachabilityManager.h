//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBHomeGestureParticipantDelegate-Protocol.h"
#import "SBSystemGestureRecognizerDelegate-Protocol.h"

@class FBSceneTranslationTransform, NSHashTable, NSMutableSet, NSString, SBHomeGestureParticipant, SBReachabilityGestureRecognizer, SBReachabilityWindow, SBScreenEdgePanGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SBReachabilityManager : NSObject <SBSystemGestureRecognizerDelegate, SBHomeGestureParticipantDelegate>
{
    NSHashTable *_observers;
    _Bool _reachabilityModeActive;
    unsigned long long _reachabilityExtensionGenerationCount;
    _Bool _reachabilityModeEnabled;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityWindow *_reachabilityWindow;
    FBSceneTranslationTransform *_reachabilityTransform;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    SBHomeGestureParticipant *_homeGestureParticipant;
    NSHashTable *_ignoredWindows;
    long long _animationsInFlight;
    SBReachabilityGestureRecognizer *_reachabilityGestureRecognizer;
    double _effectiveReachabilityYOffset;
    SBScreenEdgePanGestureRecognizer *_dismissEdgeGestureRecognizer;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
}

+ (id)sharedInstance;
+ (_Bool)reachabilitySupported;
@property(readonly, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer; // @synthesize dismissPanGestureRecognizer=_dismissPanGestureRecognizer;
@property(readonly, nonatomic) SBScreenEdgePanGestureRecognizer *dismissEdgeGestureRecognizer; // @synthesize dismissEdgeGestureRecognizer=_dismissEdgeGestureRecognizer;
@property(readonly, nonatomic) _Bool reachabilityModeActive; // @synthesize reachabilityModeActive=_reachabilityModeActive;
@property(readonly, nonatomic) double effectiveReachabilityYOffset; // @synthesize effectiveReachabilityYOffset=_effectiveReachabilityYOffset;
@property(readonly, nonatomic) SBReachabilityGestureRecognizer *reachabilityGestureRecognizer; // @synthesize reachabilityGestureRecognizer=_reachabilityGestureRecognizer;
- (void).cxx_destruct;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_panToDeactivateReachability:(id)arg1;
- (void)_tapToDeactivateReachability:(id)arg1;
- (void)_activateReachability:(id)arg1;
- (id)_hostManagerForWindow:(id)arg1;
- (void)_updateReachabilityWindowForYOffset:(double)arg1 mode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_tearDownReachabilityWindow;
- (void)_setupReachabilityWindowIfNecessary;
- (void)_setupGestureRecognizers;
- (_Bool)canActivateReachability;
- (void)_handleSignificantTimeChanged;
- (void)_screenDidDim;
- (void)_notifyObserversDidEndReachabilityAnimation;
- (void)_notifyObserversWillBeginReachabilityAnimation;
- (void)_notifyObserversReachabilityYOffsetDidChange;
- (void)_notifyObserversReachabilityModeActive:(_Bool)arg1;
- (void)_toggleReachabilityMode;
- (void)_pingKeepAliveWithDuration:(double)arg1 interactedBeforePing:(_Bool)arg2 initialKeepAliveTime:(double)arg3;
- (void)_setKeepAliveTimer;
- (void)_updateReachabilityModeActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateReachabilityModeActive:(_Bool)arg1;
- (id)ignoredWindows;
- (void)ignoreWindowForReachability:(id)arg1;
- (void)deactivateReachability;
- (void)toggleReachability;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setReachabilityTemporarilyDisabled:(_Bool)arg1 forReason:(id)arg2;
@property(readonly, nonatomic) double reachabilityYOffset;
@property(nonatomic) _Bool reachabilityEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

