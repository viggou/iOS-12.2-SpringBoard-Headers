//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBZoomView.h"

@class SBFullscreenZoomView, UIView;

@interface SBClippedZoomView : SBZoomView
{
    SBFullscreenZoomView *_fullscreenZoomViewToClip;
    UIView *_clippingView;
}

- (void).cxx_destruct;
- (id)initWithClippingFrame:(struct CGRect)arg1 fullscreenZoomView:(id)arg2;

@end
