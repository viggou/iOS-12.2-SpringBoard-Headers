//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSpotlightMultiplexingViewController.h"

@class SBSpotlightAlert;

@interface SBSpotlightAlertSpotlightViewController : SBSpotlightMultiplexingViewController
{
    SBSpotlightAlert *_spotlightAlert;
}

@property(nonatomic) __weak SBSpotlightAlert *spotlightAlert; // @synthesize spotlightAlert=_spotlightAlert;
- (void).cxx_destruct;
- (unsigned long long)_spotlightDismissalReasonForCurrentTransitionFallBackReason:(unsigned long long)arg1;
- (void)_dismissSearchViewWithReason:(unsigned long long)arg1;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (void)spotlightAlertDidDisappear;
- (void)spotlightAlertWillDisappear;
- (void)spotlightAlertDidAppear;
- (void)spotlightAlertWillAppear;

@end
