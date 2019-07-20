//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSpotlightMultiplexingViewController.h"

@class FBDisplayLayoutElement;
@protocol SBHomeScreenSpotlightDismissalDelegate;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController
{
    id <SBHomeScreenSpotlightDismissalDelegate> _homescreenSpotlightDelegate;
    FBDisplayLayoutElement *_displayLayoutElement;
}

@property(readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(readonly, nonatomic) __weak id <SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate; // @synthesize homescreenSpotlightDelegate=_homescreenSpotlightDelegate;
- (void).cxx_destruct;
- (unsigned long long)_spotlightDismissalReasonForCurrentTransitionFallBackReason:(unsigned long long)arg1;
- (void)_dismissSearchViewWithReason:(unsigned long long)arg1;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

@end

