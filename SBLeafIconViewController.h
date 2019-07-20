//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBNestingViewController.h"

@class SBIconViewMap, SBLeafIcon, SBSceneLayoutAnimationWrapperView, SBSceneLayoutElementAnimationWrapperView, SBWorkspaceTransitionRequest;

@interface SBLeafIconViewController : SBNestingViewController
{
    SBSceneLayoutAnimationWrapperView *_sceneLayoutView;
    SBSceneLayoutElementAnimationWrapperView *_primaryAppView;
    SBLeafIcon *_leafIcon;
    long long _orientation;
    SBIconViewMap *_viewMap;
    SBWorkspaceTransitionRequest *_transitionRequest;
}

@property(retain, nonatomic) SBWorkspaceTransitionRequest *transitionRequest; // @synthesize transitionRequest=_transitionRequest;
@property(readonly, nonatomic) SBIconViewMap *viewMap; // @synthesize viewMap=_viewMap;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) SBLeafIcon *leafIcon; // @synthesize leafIcon=_leafIcon;
- (void).cxx_destruct;
- (void)_updateSceneLayoutView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)viewDidLoad;
- (void)returnPrimaryAppView;
- (id)borrowPrimaryAppView;
@property(readonly, nonatomic) SBSceneLayoutElementAnimationWrapperView *primaryAppView;
- (id)initWithLeafIcon:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

@end
