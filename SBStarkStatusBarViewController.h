//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIStatusBarStyleDelegate_SpringBoardOnly-Protocol.h"

@class NSMutableSet, NSString, SBStarkStatusBarDockController, SBStarkStatusBarRecordingStateManager, SBStarkStatusBarStateProvider, UIStatusBar, UIView;
@protocol SBStarkSessionConfiguring, SBStarkStatusBarViewControllerDelegate;

@interface SBStarkStatusBarViewController : UIViewController <UIStatusBarStyleDelegate_SpringBoardOnly>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkStatusBarStateProvider *_statusBarStateProvider;
    UIStatusBar *_statusBarView;
    NSMutableSet *_statusBarHideReasons;
    long long _requestedStyle;
    _Bool _styleHasBeenRequested;
    double _statusBarWidth;
    UIView *_separatorView;
    _Bool _separatorHidden;
    id <SBStarkStatusBarViewControllerDelegate> _delegate;
    SBStarkStatusBarDockController *_dockController;
    SBStarkStatusBarRecordingStateManager *_recordingStateManager;
    _Bool _recordingOverrideActive;
}

- (void).cxx_destruct;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (long long)overridenRequestedStyleFromStyle:(long long)arg1;
- (int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (void)_backPressed:(id)arg1;
- (_Bool)_isStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_layoutStatusBar:(id)arg1;
- (id)newFakeStatusBarWithStyle:(long long)arg1;
- (id)newFakeStatusBar;
- (void)setActiveBundleIdentifier:(id)arg1;
- (void)updateStatusBarWithRequestedStyle:(long long)arg1 animationFactory:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
@property(readonly, nonatomic) SBStarkStatusBarStateProvider *statusBarStateProvider;
@property(readonly, nonatomic) SBStarkStatusBarDockController *dockController;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

