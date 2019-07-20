//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBFluidSwitcherViewController.h"

#import "SBSpringLoadedInteractionBehaviorDelegate-Protocol.h"
#import "SBSpringLoadedInteractionEffectDelegate-Protocol.h"

@class NSString;

@interface SBGridSwitcherViewController : SBFluidSwitcherViewController <SBSpringLoadedInteractionBehaviorDelegate, SBSpringLoadedInteractionEffectDelegate>
{
}

+ (Class)defaultSwitcherPersonalityClass;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint)arg2 forDropSession:(id)arg3;
- (void)_setupSpringLoadingSupport;
- (void)_updateSwitcherPersonalityIfNecessary;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
