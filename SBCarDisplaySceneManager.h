//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSceneManager.h"

@protocol SBCarDisplaySceneManagerDelegate;

@interface SBCarDisplaySceneManager : SBSceneManager
{
    id <SBCarDisplaySceneManagerDelegate> _carDisplayDelegate;
}

+ (Class)_layoutStateManagerClass;
@property(nonatomic) __weak id <SBCarDisplaySceneManagerDelegate> carDisplayDelegate; // @synthesize carDisplayDelegate=_carDisplayDelegate;
- (void).cxx_destruct;
- (id)_sceneWindowLayoutStrategy;
- (id)_newSceneLayoutViewController;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (long long)_hostingPolicyForScene:(id)arg1;
- (long long)_displayHostingPolicy;

@end
