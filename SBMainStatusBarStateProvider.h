//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBStatusBarStateProvider.h"

#import "UIStatusBarStateObserver-Protocol.h"

@class NSCountedSet, NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver>
{
    _Bool _overridePercent;
    _Bool _killActivity;
    _Bool _itemIsDisabled[41];
    _Bool _itemWasDisabled[41];
    NSCountedSet *_itemDisabledRequests[41];
    NSCountedSet *_dataUpdateAnimationsDisabledRequests;
    _Bool _timeEnabled;
    _Bool _statusBarTimeRequiresUpdate;
    _Bool _timeCloaked;
    _Bool _allButBatteryCloaked;
    _Bool _telephonyAndBluetoothCloaked;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_1916f467 *)arg2 withActions:(int)arg3;
- (id)_identifierForStateAggregator:(id)arg1;
- (void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1;
- (void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1;
- (void)_composePostDataFromAggregatorData:(CDStruct_1916f467 *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_1916f467 *)arg3 lastPost:(const CDStruct_1916f467 *)arg4;
- (void)forceUpdateLocalStatusBarData;
- (void)stopDisablingDataUpdateAnimationsForRequestor:(id)arg1;
- (void)disableDataUpdateAnimationsForRequestor:(id)arg1;
- (void)setTelephonyAndBluetoothItemsCloaked:(_Bool)arg1;
- (void)setAllItemsExceptBatteryCloaked:(_Bool)arg1;
- (void)setTimeCloaked:(_Bool)arg1;
- (void)_enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3 immediately:(_Bool)arg4;
- (void)enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3;
- (void)enableTime:(_Bool)arg1;
- (void)updateTimeEnabledImmediately:(_Bool)arg1;
- (void)updateTimeEnabled;
- (_Bool)isTimeEnabled;
- (void)_updateDisabledItems;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

