//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext, FBScene, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings;

@interface SBInternalClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}

@property(retain, nonatomic) FBSSceneTransitionContext *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings; // @synthesize updatedClientSettings=_updatedClientSettings;
@property(retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings; // @synthesize oldClientSettings=_oldClientSettings;
@property(retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;

@end

