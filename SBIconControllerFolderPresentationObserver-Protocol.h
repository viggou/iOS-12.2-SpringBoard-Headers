//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBFolderController, SBIconController;
@protocol SBViewControllerTransitionCoordinator;

@protocol SBIconControllerFolderPresentationObserver <NSObject>
- (void)iconController:(SBIconController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
@end

