//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSMutableSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, FBUIScene, NSError, NSSet;

@protocol FBUISceneDelegate <NSObject>

@optional
- (void)scene:(FBUIScene *)arg1 didDeactivateWithError:(NSError *)arg2;
- (void)scene:(FBUIScene *)arg1 willActivateWithTransitionContext:(FBSSceneTransitionContext *)arg2;
- (_Bool)scene:(FBUIScene *)arg1 handleIncomingActions:(NSSet *)arg2;
- (void)scene:(FBUIScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2;
- (void)scene:(FBUIScene *)arg1 configureInitialClientSettings:(FBSMutableSceneClientSettings *)arg2;
@end

