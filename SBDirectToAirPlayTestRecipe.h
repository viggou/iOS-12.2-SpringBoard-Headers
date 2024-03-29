//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class NSString, SBApplication;

@interface SBDirectToAirPlayTestRecipe : NSObject <SBTestRecipe>
{
    SBApplication *_currentlyReadyApp;
    SBApplication *_currentlyPlayingApp;
}

+ (id)title;
- (void).cxx_destruct;
- (void)_clearPlayingApp;
- (void)_claimForegroundAppIsPlayingVideo;
- (id)_anyForegroundApplication;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

