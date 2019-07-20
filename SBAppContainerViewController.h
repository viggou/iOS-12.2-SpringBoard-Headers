//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBLayoutElementViewController.h"

#import "SBApplicationSceneViewControlling-Protocol.h"
#import "SBSceneHandleObserver-Protocol.h"

@class FBSSceneSettingsDiffInspector, NSString, SBApplicationSceneHandle, SBSceneHandle, UIView, UIViewController;
@protocol SBApplicationSceneViewControlling, SBScenePlaceholderContentContext;

@interface SBAppContainerViewController : SBLayoutElementViewController <SBSceneHandleObserver, SBApplicationSceneViewControlling>
{
    SBApplicationSceneHandle *_applicationSceneHandle;
    FBSSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
    UIViewController<SBApplicationSceneViewControlling> *_applicationSceneViewController;
    long long _requestedDisplayMode;
}

@property(readonly, nonatomic) UIViewController<SBApplicationSceneViewControlling> *_applicationSceneViewController; // @synthesize _applicationSceneViewController;
- (void).cxx_destruct;
- (void)_updateDisplayLayoutElementForSceneExistence:(id)arg1;
- (void)_clearState;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long displayMode;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)setContentWrapperInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)newSnapshotView;
- (id)newSnapshot;
@property(retain, nonatomic) UIView *customContentView;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle;
- (void)_configureViewController:(id)arg1;
- (id)_newApplicationSceneViewControllerForSceneHandle:(id)arg1;
- (void)_setEmulatesAsynchronousRendering:(_Bool)arg1;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (void)didEndTransitionToVisible:(_Bool)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (void)prepareForReuse;
- (void)invalidate;
- (id)initWithDisplayIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

