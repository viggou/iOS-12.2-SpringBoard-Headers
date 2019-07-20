//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIAnimationControllerTransitionContextProvider-Protocol.h"

@class NSSet, NSString, SBApplicationSceneEntity;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider>
{
    SBApplicationSceneEntity *_toAppSceneEntity;
    SBApplicationSceneEntity *_fromAppSceneEntity;
    SBApplicationSceneEntity *_toApplicationSceneEntity;
    SBApplicationSceneEntity *_fromApplicationSceneEntity;
}

+ (id)transitionContextProviderWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2;
@property(readonly, nonatomic) SBApplicationSceneEntity *fromApplicationSceneEntity; // @synthesize fromApplicationSceneEntity=_fromApplicationSceneEntity;
@property(readonly, nonatomic) SBApplicationSceneEntity *toApplicationSceneEntity; // @synthesize toApplicationSceneEntity=_toApplicationSceneEntity;
@property(retain, nonatomic) SBApplicationSceneEntity *deactivatingAppSceneEntity; // @synthesize deactivatingAppSceneEntity=_fromAppSceneEntity;
@property(retain, nonatomic) SBApplicationSceneEntity *activatingAppSceneEntity; // @synthesize activatingAppSceneEntity=_toAppSceneEntity;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property(readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
- (id)initWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

