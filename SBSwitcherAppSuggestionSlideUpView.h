//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

#import "SBSceneViewHostRequester-Protocol.h"

@class NSString, SBBestAppSuggestion, SBDeviceApplicationSceneView, SBOrientationTransformWrapperView;

@interface SBSwitcherAppSuggestionSlideUpView : SBSwitcherWallpaperPageContentView <SBSceneViewHostRequester>
{
    SBBestAppSuggestion *_bestAppSuggestion;
    SBDeviceApplicationSceneView *_appView;
    SBOrientationTransformWrapperView *_appViewLayoutWrapper;
    long long _resultingOrientation;
}

- (void).cxx_destruct;
- (void)_configureContentView;
- (long long)sceneViewHostingPriority:(id)arg1;
- (id)sceneViewHostingRequestIdentifier:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)layoutSubviews;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1 appSuggestion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

