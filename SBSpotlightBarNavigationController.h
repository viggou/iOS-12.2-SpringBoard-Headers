//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, SPUINavigationBar;

@interface SBSpotlightBarNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    _Bool _pullingToSearch;
}

@property(nonatomic, getter=isPullingToSearch) _Bool pullingToSearch; // @synthesize pullingToSearch=_pullingToSearch;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
@property(getter=isNavigationBarBottomTrailingCornerRounded) _Bool navigationBarBottomTrailingCornerRounded;
- (void)setNavigationBarBlurProgress:(double)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) SPUINavigationBar *navigationBar; // @dynamic navigationBar;
@property(readonly) Class superclass;

@end

