//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBCommandTabViewController, SBDisplayItem;

@protocol SBCommandTabViewControllerDelegate <NSObject>
- (void)viewControllerWantsDismissal:(SBCommandTabViewController *)arg1;
- (void)viewController:(SBCommandTabViewController *)arg1 selectedApplicationWithDisplayItem:(SBDisplayItem *)arg2;
@end

