//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBIcon;

@interface SBDeleteNonAppIconAlertItem : SBAlertItem
{
    SBIcon *_icon;
    long long _iconLocation;
}

- (void).cxx_destruct;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)didActivate;
- (id)icon;
- (id)initWithIcon:(id)arg1 location:(long long)arg2;

@end

