//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;
@protocol SBFIrisWallpaperView;

@protocol SBFIrisWallpaperViewDelegate <NSObject>

@optional
- (void)irisWallpaperView:(id <SBFIrisWallpaperView>)arg1 didReplaceGestureRecognizer:(UIGestureRecognizer *)arg2 withGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)irisWallpaperViewIsInteractingDidChange:(id <SBFIrisWallpaperView>)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id <SBFIrisWallpaperView>)arg1;
@end

