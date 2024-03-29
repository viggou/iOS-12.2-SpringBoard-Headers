//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBPressGestureRecognizer.h"

@class NSMutableArray, NSMutableSet;

@interface SBClickGestureRecognizer : SBPressGestureRecognizer
{
    unsigned long long _numberOfClicksRequired;
    _Bool _allPressesUpRequired;
    double _maximumClickFormationDuration;
    double _maximumClickDownDuration;
    double _maximumBetweenClicksDelay;
    unsigned long long _recognizedClicksCount;
    _Bool _gestureWasRecognized;
    _Bool _allPressBeganReceived;
    NSMutableArray *_shortcutPressTypesSubsets;
    NSMutableSet *_receivedPressBeganTypes;
    NSMutableSet *_receivedPressEndedTypes;
}

@property(nonatomic) double maximumBetweenClicksDelay; // @synthesize maximumBetweenClicksDelay=_maximumBetweenClicksDelay;
@property(nonatomic) double maximumClickDownDuration; // @synthesize maximumClickDownDuration=_maximumClickDownDuration;
@property(nonatomic) double maximumClickFormationDuration; // @synthesize maximumClickFormationDuration=_maximumClickFormationDuration;
@property(nonatomic) _Bool allPressesUpRequired; // @synthesize allPressesUpRequired=_allPressesUpRequired;
@property(nonatomic) unsigned long long numberOfClicksRequired; // @synthesize numberOfClicksRequired=_numberOfClicksRequired;
- (void).cxx_destruct;
- (_Bool)didReceiveRequiredPressEndedCount;
- (_Bool)didReceiveRequiredPressBeganCount;
- (void)resetShortcutsTracking;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2;
- (void)_notePressReceivedWithType:(long long)arg1 phase:(long long)arg2;
- (void)addShortcutWithPressTypes:(id)arg1;
- (_Bool)_areRequiredPressTypesContainedInSet:(id)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

