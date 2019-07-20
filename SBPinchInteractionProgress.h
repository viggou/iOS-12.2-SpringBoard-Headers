//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInteractionProgress.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPinchGestureRecognizer;

@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate>
{
    CDStruct_3e878e9e _pinchInterval;
    UIPinchGestureRecognizer *_pinchGesture;
}

@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
- (void).cxx_destruct;
- (void)_updatePinchScale:(double)arg1;
- (void)_handlePinchGesture:(id)arg1;
@property(readonly, nonatomic) double minPinchScale;
- (id)initWithPinchGesture:(id)arg1 minPinchScale:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
