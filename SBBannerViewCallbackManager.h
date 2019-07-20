//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SBUIBannerSource, SBUIBannerView;

@interface SBBannerViewCallbackManager : NSObject
{
    UIView<SBUIBannerView> *_view;
    id <SBUIBannerSource> _source;
    _Bool _sentWillAppear;
    _Bool _sentDidAppear;
    _Bool _sentWillDismiss;
    _Bool _sentDidDismiss;
    int _dismissReason;
}

- (void).cxx_destruct;
- (void)matchPreviousCallbacks:(id)arg1;
- (_Bool)hasSentAnyCallbacks;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)dealloc;
- (id)init;
- (id)initWithBannerView:(id)arg1;

@end
