//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@interface SBDashBoardScrollModifierSettings : SBUISettings
{
    _Bool _cancelScrollingIfTooMuchDrag;
    long long _strategy;
    double _maxScrollDistance;
    double _accumulatedDragThresholdPercentage;
    double _maxDragFromVerticalPerFrame;
    double _powerOfVerticalDirectionSine2;
    double _inertialMultiplierSigmoidBase;
    double _inertialMultiplierSigmoidRange;
    double _inertialMultiplierSigmoidPivot;
    double _inertialMultiplierSigmoidAlpha;
    double _minPercentageSigmoidBase;
    double _minPercentageSigmoidRange;
    double _minPercentageSigmoidPivot;
    double _minPercentageSigmoidAlpha;
}

+ (id)settingsControllerModule;
@property(nonatomic) double minPercentageSigmoidAlpha; // @synthesize minPercentageSigmoidAlpha=_minPercentageSigmoidAlpha;
@property(nonatomic) double minPercentageSigmoidPivot; // @synthesize minPercentageSigmoidPivot=_minPercentageSigmoidPivot;
@property(nonatomic) double minPercentageSigmoidRange; // @synthesize minPercentageSigmoidRange=_minPercentageSigmoidRange;
@property(nonatomic) double minPercentageSigmoidBase; // @synthesize minPercentageSigmoidBase=_minPercentageSigmoidBase;
@property(nonatomic) double inertialMultiplierSigmoidAlpha; // @synthesize inertialMultiplierSigmoidAlpha=_inertialMultiplierSigmoidAlpha;
@property(nonatomic) double inertialMultiplierSigmoidPivot; // @synthesize inertialMultiplierSigmoidPivot=_inertialMultiplierSigmoidPivot;
@property(nonatomic) double inertialMultiplierSigmoidRange; // @synthesize inertialMultiplierSigmoidRange=_inertialMultiplierSigmoidRange;
@property(nonatomic) double inertialMultiplierSigmoidBase; // @synthesize inertialMultiplierSigmoidBase=_inertialMultiplierSigmoidBase;
@property(nonatomic) double powerOfVerticalDirectionSine2; // @synthesize powerOfVerticalDirectionSine2=_powerOfVerticalDirectionSine2;
@property(nonatomic) double maxDragFromVerticalPerFrame; // @synthesize maxDragFromVerticalPerFrame=_maxDragFromVerticalPerFrame;
@property(nonatomic) double accumulatedDragThresholdPercentage; // @synthesize accumulatedDragThresholdPercentage=_accumulatedDragThresholdPercentage;
@property(nonatomic) _Bool cancelScrollingIfTooMuchDrag; // @synthesize cancelScrollingIfTooMuchDrag=_cancelScrollingIfTooMuchDrag;
@property(nonatomic) double maxScrollDistance; // @synthesize maxScrollDistance=_maxScrollDistance;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
- (void)setDefaultValues;

@end
