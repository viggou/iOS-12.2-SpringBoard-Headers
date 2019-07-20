//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScreenEdgePanGestureRecognizer.h>

@protocol SBSystemGestureRecognizerDelegate;

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer
{
    _Bool _shouldUseGrapeFlags;
    double _grabberActiveZoneWidth;
}

@property(nonatomic) _Bool shouldUseGrapeFlags; // @synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags;
@property(nonatomic) double grabberActiveZoneWidth; // @synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth;
- (_Bool)isLocationWithinGrabberActiveZone;
- (_Bool)_shouldUseGrapeFlags;
- (long long)_touchInterfaceOrientation;
- (struct CGPoint)_locationForTouch:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;

// Remaining properties
@property(nonatomic) __weak id <SBSystemGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end
