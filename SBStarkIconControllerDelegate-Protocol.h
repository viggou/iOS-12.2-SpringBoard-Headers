//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBStarkIconController, SBWindow;

@protocol SBStarkIconControllerDelegate <NSObject>
- (void)iconModelDidLoad;
- (void)iconModelDidLayout;
- (void)handleBackPress;
- (SBWindow *)animationWindowForIconController:(SBStarkIconController *)arg1;

@optional
- (_Bool)iconControllerShouldPersistIconsForFakeApps:(SBStarkIconController *)arg1;
@end
