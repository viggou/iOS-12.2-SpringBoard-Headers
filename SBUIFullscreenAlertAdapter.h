//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBAlertAdapter.h"

@interface SBUIFullscreenAlertAdapter : SBAlertAdapter
{
    _Bool _animatingDeactivation;
    _Bool _animatingActivation;
}

+ (id)_adapterForController:(id)arg1;
+ (void)alertAdapterDisplayDidDisappear:(id)arg1;
+ (void)deactivateAlertForController:(id)arg1 animated:(_Bool)arg2 animateOldDisplayInWithStyle:(int)arg3 isSlidingDisplay:(_Bool)arg4;
+ (void)activateAlertForController:(id)arg1 animated:(_Bool)arg2 animateCurrentDisplayOut:(_Bool)arg3 withDelay:(_Bool)arg4 isSlidingDisplay:(_Bool)arg5;
- (id)effectiveViewController;
- (void)setDisplay:(id)arg1;
- (void)activate;
- (void)handleAutoLock;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleHomeButtonPress;
- (_Bool)wantsHomeButtonPress;
- (void)displayDidDisappear;
- (void)_pluginViewDidAnimatedIn:(id)arg1;
- (void)animateViewIn;
- (void)prepareViewToAnimateIn;
- (_Bool)isCurrentlyAnimatingActivation;
- (void)setViewShouldAnimateIn:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_pluginViewAnimatedOut:(id)arg1;
- (void)animateViewOut;
- (void)prepareViewToAnimateOut;
- (_Bool)currentlyAnimatingDeactivation;
- (_Bool)viewIsReadyToBeRemoved;
- (_Bool)_shouldDismissSwitcherOnActivation;
- (id)display;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (_Bool)hasTranslucentBackground;
- (_Bool)allowsEventOnlySuspension;
- (void)dealloc;
- (id)initWithAlertController:(id)arg1;

@end

