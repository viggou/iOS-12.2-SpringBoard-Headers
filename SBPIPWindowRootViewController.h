//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SBPIPContainerViewControllerObserver-Protocol.h"
#import "SBUIActiveOrientationObserver-Protocol.h"

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSString;

@interface SBPIPWindowRootViewController : UIViewController <SBPIPContainerViewControllerObserver, SBUIActiveOrientationObserver>
{
    NSMutableArray *_containerViewControllers;
    NSHashTable *_interfaceOrientationLockHashTable;
    NSMapTable *_containerViewControllerRequiredInterfaceOrientationMapTable;
    long long _activeInterfaceOrientation;
}

@property(nonatomic) long long activeInterfaceOrientation; // @synthesize activeInterfaceOrientation=_activeInterfaceOrientation;
- (void).cxx_destruct;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)_layoutContainerViewControllers:(id)arg1;
- (void)_layoutInterfaceOrientationUnlockedContainerViewControllers;
- (long long)_requiredInterfaceOrientationForContainerViewController:(id)arg1;
- (long long)_interfaceOrientationForContainerViewController:(id)arg1;
- (long long)interfaceOrientationForContainerViewController:(id)arg1;
- (void)removeContainerViewController:(id)arg1;
- (void)addContainerViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *containerViewControllers;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)containerViewControllerRequiredInterfaceOrientationDidChange:(id)arg1;
- (void)containerViewControllerRelinquishInterfaceOrientationLock:(id)arg1;
- (void)containerViewControllerAcquireInterfaceOrientationLock:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

