//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBMedusaAppsTestRecipe : NSObject <SBTestRecipe>
{
    _Bool _activated;
    NSString *_leftTestBundleID;
    NSString *_rightTestBundleID;
    FBApplicationUpdateScenesTransaction *_currentTransaction;
}

+ (id)title;
@property(retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
- (void).cxx_destruct;
- (void)_updateAppsToBringUpFromPreferences;
- (void)_toggle;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

