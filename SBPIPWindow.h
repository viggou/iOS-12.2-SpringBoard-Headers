//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBWindow.h"

@class NSArray;

@interface SBPIPWindow : SBWindow
{
}

- (_Bool)isActive;
- (id)_pipWindowRootVC;
- (long long)interfaceOrientationForContainerViewController:(id)arg1;
- (void)removeContainerViewController:(id)arg1;
- (void)addContainerViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *containerViewControllers;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setRootViewController:(id)arg1;
- (id)init;

@end

