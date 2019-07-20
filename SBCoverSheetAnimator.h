//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFolderController, SBIconZoomAnimator, SBLockToAppStatusBarAnimator, SBSceneManager, SBUnlockSettings, SBWallpaperController, SBWindowSelfHostWrapper, UIWindow;

@interface SBCoverSheetAnimator : NSObject
{
    _Bool _transitioning;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    SBIconZoomAnimator *_iconAnimator;
    SBWindowSelfHostWrapper *_coverSheetWindowHostWrapper;
    SBSceneManager *_sceneManager;
    UIWindow *_hostingWindow;
    UIWindow *_switcherWindow;
    SBWallpaperController *_wallpaperController;
    SBFolderController *_folderController;
    SBUnlockSettings *_unlockSettings;
    UIWindow *_coverSheetWindow;
}

@property(nonatomic) __weak UIWindow *coverSheetWindow; // @synthesize coverSheetWindow=_coverSheetWindow;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) SBUnlockSettings *unlockSettings; // @synthesize unlockSettings=_unlockSettings;
@property(retain, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(retain, nonatomic) SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(retain, nonatomic) UIWindow *switcherWindow; // @synthesize switcherWindow=_switcherWindow;
@property(retain, nonatomic) UIWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property(retain, nonatomic) SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(retain, nonatomic) SBWindowSelfHostWrapper *coverSheetWindowHostWrapper; // @synthesize coverSheetWindowHostWrapper=_coverSheetWindowHostWrapper;
@property(retain, nonatomic) SBIconZoomAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
@property(retain, nonatomic) SBLockToAppStatusBarAnimator *statusBarAnimator; // @synthesize statusBarAnimator=_statusBarAnimator;
- (void).cxx_destruct;
- (void)_setWallpaperToLocked:(_Bool)arg1 duration:(double)arg2;
- (void)_prepareIconAnimatorIncludingLockScreen:(_Bool)arg1;
- (void)_updateCoverSheetHosting;
- (void)animateToCoverSheet:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithCoverSheetWindow:(id)arg1 sceneManager:(id)arg2 hostingWindow:(id)arg3 switcherWindow:(id)arg4 wallpaperController:(id)arg5 folderController:(id)arg6 unlockSettings:(id)arg7;

@end

