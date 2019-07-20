//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol PGPictureInPictureViewControllerContentContainer <NSObject>
- (_Bool)handleDoubleTapGesture;
- (_Bool)handleTapGesture;
- (void)relinquishInterfaceOrientationLock;
- (void)acquireInterfaceOrientationLock;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 animationHandler:(void (^)(void))arg3 completionHandler:(void (^)(void))arg4;
- (void)performStartAnimationWithAnimationHandler:(void (^)(void))arg1 completionHandler:(void (^)(void))arg2;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(void (^)(void))arg3;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
@end

