//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIGestureRecognizerTransformAnalyzerInfo;

@interface UIGestureRecognizerTransformAnalyzer : NSObject
{
    UIGestureRecognizerTransformAnalyzerInfo *_smoothedInfo;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}

@property(readonly, nonatomic) UIGestureRecognizerTransformAnalyzerInfo *smoothedInfo; // @synthesize smoothedInfo=_smoothedInfo;
@property(readonly, nonatomic) int dominantComponent; // @synthesize dominantComponent=_dominantComponent;
@property(nonatomic) double rotationWeight; // @synthesize rotationWeight=_rotationWeight;
@property(nonatomic) double pinchingWeight; // @synthesize pinchingWeight=_pinchingWeight;
@property(nonatomic) double translationWeight; // @synthesize translationWeight=_translationWeight;
- (void).cxx_destruct;
- (id)analyzeTouches:(id)arg1;
- (void)reset;
- (id)init;

@end
