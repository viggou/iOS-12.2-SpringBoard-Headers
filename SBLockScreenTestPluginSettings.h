//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@class NSString;

@interface SBLockScreenTestPluginSettings : SBUISettings
{
    _Bool _enablePlugin;
    _Bool _enableLostModePlugin;
    _Bool _restrictSiri;
    _Bool _restrictCamera;
    _Bool _restrictUnlock;
    _Bool _restrictLogout;
    _Bool _restrictTouchID;
    _Bool _restrictMediaControls;
    _Bool _restrictTodayCenter;
    _Bool _restrictControlCenter;
    _Bool _hideStatusBar;
    _Bool _hideTimeAndDate;
    _Bool _hideSubtitle;
    _Bool _disableOnUnlock;
    long long _presentationStyle;
    long long _backgroundStyle;
    long long _notificationBehavior;
    NSString *_subtitleValue;
}

+ (id)settingsControllerModule;
@property _Bool disableOnUnlock; // @synthesize disableOnUnlock=_disableOnUnlock;
@property(retain) NSString *subtitleValue; // @synthesize subtitleValue=_subtitleValue;
@property _Bool hideSubtitle; // @synthesize hideSubtitle=_hideSubtitle;
@property _Bool hideTimeAndDate; // @synthesize hideTimeAndDate=_hideTimeAndDate;
@property _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property _Bool restrictControlCenter; // @synthesize restrictControlCenter=_restrictControlCenter;
@property _Bool restrictTodayCenter; // @synthesize restrictTodayCenter=_restrictTodayCenter;
@property _Bool restrictMediaControls; // @synthesize restrictMediaControls=_restrictMediaControls;
@property _Bool restrictTouchID; // @synthesize restrictTouchID=_restrictTouchID;
@property _Bool restrictLogout; // @synthesize restrictLogout=_restrictLogout;
@property _Bool restrictUnlock; // @synthesize restrictUnlock=_restrictUnlock;
@property _Bool restrictCamera; // @synthesize restrictCamera=_restrictCamera;
@property _Bool restrictSiri; // @synthesize restrictSiri=_restrictSiri;
@property long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property _Bool enableLostModePlugin; // @synthesize enableLostModePlugin=_enableLostModePlugin;
@property _Bool enablePlugin; // @synthesize enablePlugin=_enablePlugin;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

