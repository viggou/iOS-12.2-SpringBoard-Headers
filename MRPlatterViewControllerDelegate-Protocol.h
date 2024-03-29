//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPAVRoute, MRPlatterViewController, UIView, UIViewController;

@protocol MRPlatterViewControllerDelegate <NSObject>

@optional
- (void)platterViewController:(MRPlatterViewController *)arg1 didPickRoute:(MPAVRoute *)arg2;
- (_Bool)shouldPresentUsingViewServicePlatterViewController:(MRPlatterViewController *)arg1;
- (void)platterViewController:(MRPlatterViewController *)arg1 homeGestureDismisalAllowedDidChange:(_Bool)arg2;
- (UIView *)platterViewController:(MRPlatterViewController *)arg1 presentingViewForPresentedViewController:(UIViewController *)arg2;
- (void)dismissPlatterViewController:(MRPlatterViewController *)arg1 completion:(void (^)(void))arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 willToggleRoutingPicker:(_Bool)arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 didToggleRoutingPicker:(_Bool)arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 shouldDisplayPlatterDidChange:(_Bool)arg2;
@end

