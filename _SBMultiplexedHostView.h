//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class NSString, UIView;
@protocol _SBMultiplexedHostViewScreenRectObserver;

@interface _SBMultiplexedHostView : SBFTouchPassThroughView
{
    NSString *_hostRequester;
    UIView *_hostView;
    UIView *_snapshotView;
    _Bool _clippingDisabled;
    NSString *_requester;
    id <_SBMultiplexedHostViewScreenRectObserver> _frameObserver;
}

@property(nonatomic, getter=isClippingDisabled) _Bool clippingDisabled; // @synthesize clippingDisabled=_clippingDisabled;
@property(nonatomic) __weak id <_SBMultiplexedHostViewScreenRectObserver> frameObserver; // @synthesize frameObserver=_frameObserver;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
@property(readonly, copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
- (void).cxx_destruct;
- (void)_notifyFrameObserverThatScreenRectDidChange;
- (void)_didScroll;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithRequester:(id)arg1;

@end
