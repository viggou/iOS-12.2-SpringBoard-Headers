//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBIconController, SBRecentAppLayouts;

@interface SBAppSwitcherModel : NSObject
{
    SBIconController *_iconController;
    SBRecentAppLayouts *_recents;
    id _recentsChangedNotificationObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)mainSwitcherAppLayouts;
- (void)_warmUpIconsForAppLayout:(id)arg1;
- (void)_warmUpIconsForRecentAppLayouts:(id)arg1;
- (void)remove:(id)arg1;
- (void)addToFront:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 recents:(id)arg4;

@end
