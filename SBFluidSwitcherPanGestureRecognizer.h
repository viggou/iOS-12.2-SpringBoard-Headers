//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

#import "SBGestureRecognizerPanGestureProviding-Protocol.h"
#import "SBGestureRecognizerTouchHistoryProviding-Protocol.h"

@class NSString, SBFluidSwitcherViewController, SBTouchHistory;

@interface SBFluidSwitcherPanGestureRecognizer : UIPanGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>
{
    SBFluidSwitcherViewController *_switcherViewController;
    SBTouchHistory *_touchHistory;
}

@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
- (void).cxx_destruct;
- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
