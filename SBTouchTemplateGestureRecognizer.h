//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSArray, NSMapTable, NSMutableArray, NSTimer, SBPolygon, SBTouchTemplate, UIGestureRecognizerTransformAnalyzer;
@protocol SBTouchTemplateGestureRecognizerDelegate;

@interface SBTouchTemplateGestureRecognizer : UIGestureRecognizer
{
    _Bool _recognitionBegan;
    NSTimer *_noChangeCancellationTimer;
    unsigned long long _sequenceNumber;
    NSMutableArray *_possibleTemplates;
    NSMapTable *_initialTouchPointMap;
    unsigned long long _failedRecognitionAttempts;
    unsigned long long _trackingTouchCount;
    double _cumulativeMotion;
    double _cumulativeMotionEnvelope;
    double _smoothedIncrementalMotion;
    NSArray *_templates;
    double _animationDistance;
    long long _requiredDirectionality;
    UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    SBTouchTemplate *_matchedTemplate;
    SBPolygon *_matchedPolygon;
}

@property(retain, nonatomic, getter=_matchedPolygon, setter=_setMatchedPolygon:) SBPolygon *matchedPolygon; // @synthesize matchedPolygon=_matchedPolygon;
@property(retain, nonatomic, getter=_matchedTemplate, setter=_setMatchedTemplate:) SBTouchTemplate *matchedTemplate; // @synthesize matchedTemplate=_matchedTemplate;
@property(readonly, nonatomic) UIGestureRecognizerTransformAnalyzer *transformAnalyzer; // @synthesize transformAnalyzer=_transformAnalyzer;
@property(nonatomic) long long requiredDirectionality; // @synthesize requiredDirectionality=_requiredDirectionality;
@property(nonatomic) double animationDistance; // @synthesize animationDistance=_animationDistance;
@property(retain, nonatomic) NSArray *templates; // @synthesize templates=_templates;
@property(nonatomic, getter=_smoothedIncrementalMotion, setter=_setSmoothedIncrementalMotion:) double smoothedIncrementalMotion; // @synthesize smoothedIncrementalMotion=_smoothedIncrementalMotion;
@property(nonatomic, getter=_cumulativeMotionEnvelope, setter=_setCumulativeMotionEnvelope:) double cumulativeMotionEnvelope; // @synthesize cumulativeMotionEnvelope=_cumulativeMotionEnvelope;
@property(nonatomic, getter=_cumulativeMotion, setter=_setCumulativeMotion:) double cumulativeMotion; // @synthesize cumulativeMotion=_cumulativeMotion;
@property(nonatomic, getter=_trackingTouchCount, setter=_setTrackingTouchCount:) unsigned long long trackingTouchCount; // @synthesize trackingTouchCount=_trackingTouchCount;
@property(nonatomic, getter=_failedRecognitionAttempts, setter=_setFailedRecognitionAttempts:) unsigned long long failedRecognitionAttempts; // @synthesize failedRecognitionAttempts=_failedRecognitionAttempts;
@property(readonly, nonatomic, getter=_initialTouchPointMap) NSMapTable *initialTouchPointMap; // @synthesize initialTouchPointMap=_initialTouchPointMap;
@property(readonly, nonatomic, getter=_possibleTemplates) NSMutableArray *possibleTemplates; // @synthesize possibleTemplates=_possibleTemplates;
@property(readonly, nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic, setter=_setNoChangeCancellationTimer:) NSTimer *_noChangeCancellationTimer; // @synthesize _noChangeCancellationTimer;
- (void).cxx_destruct;
- (_Bool)_shouldAddNewTouchesAfterGestureRecognition;
- (void)_reset;
- (void)_failMeForReason:(id)arg1;
- (void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2;
- (void)_attemptTemplateMatchWithTouches:(id)arg1 polygon:(id)arg2;
- (void)_updateMatchedTemplateForTouchesBeganOrEnded:(id)arg1;
- (id)_matchedTemplateForTouches:(id)arg1 polygon:(id)arg2;
- (void)_updateForTouchesBeganOrMoved:(id)arg1;
- (void)_updateForTouchesCancelledOrEnded:(id)arg1 state:(long long)arg2 withEvent:(id)arg3;
- (double)_projectedMotionForInterval:(double)arg1;
- (_Bool)_directionallyAcceptMotion:(double)arg1;
- (id)_polygonForTouches:(id)arg1;
- (void)_noChangeCancellationTimerFired:(id)arg1;
- (void)_resetNoChangeCancellationTimer;
- (void)_invalidateNoChangeCancellationTimer;
- (void)_pingNoChangeCancellationTimer;
- (void)setState:(long long)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (_Bool)hasSignificantMotionToBegin;
- (void)_log:(id)arg1;
- (void)log:(id)arg1;
- (id)logCategory;
- (long long)projectedCompletionTypeForInterval:(double)arg1;
@property(readonly, nonatomic) double cumulativePercentage;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(nonatomic) __weak id <SBTouchTemplateGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end
