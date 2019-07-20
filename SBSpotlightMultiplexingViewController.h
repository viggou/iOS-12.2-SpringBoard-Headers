//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBMultiplexingViewController.h"

#import "SPUISearchViewControllerDelegate-Protocol.h"

@class NSString, UIGestureRecognizer, UIView;
@protocol SBSpotlightMultiplexingViewControllerDelegate;

@interface SBSpotlightMultiplexingViewController : SBMultiplexingViewController <SPUISearchViewControllerDelegate>
{
    _Bool _reachabilityEnabled;
    UIView *_reachabilityContainerView;
    UIGestureRecognizer *_dismissReachabilityGesture;
    UIView *_sharedSearchHeaderView;
    unsigned long long _searchViewPresentationSourceForNextTransition;
    unsigned long long _searchViewDismissalReasonForNextTransition;
    id <SBSpotlightMultiplexingViewControllerDelegate> _delegate;
}

+ (id)sharedIsolatedSpotlightInstance;
@property(nonatomic) __weak id <SBSpotlightMultiplexingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long searchViewDismissalReasonForNextTransition; // @synthesize searchViewDismissalReasonForNextTransition=_searchViewDismissalReasonForNextTransition;
@property(nonatomic) unsigned long long searchViewPresentationSourceForNextTransition; // @synthesize searchViewPresentationSourceForNextTransition=_searchViewPresentationSourceForNextTransition;
- (void).cxx_destruct;
- (void)_scrollSpotlightToTopIfAppeared;
- (id)_isolatedViewController;
- (_Bool)wantsToShareTouches;
- (void)_dismissSearchViewWithReason:(unsigned long long)arg1;
- (void)dismissSearchViewWithReason:(unsigned long long)arg1;
- (void)_searchFieldDidFocus;
- (void)searchFieldDidFocus;
- (_Bool)isDisappeared;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (_Bool)directlyForwardViewSizeChanges;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

