//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBTestAlertItem : SBAlertItem
{
    _Bool _shouldShowInLockScreen;
    _Bool _forcesModalAlertAppearance;
    _Bool _behavesSuperModally;
    _Bool _allowMenuButtonDismissal;
    _Bool _allowLockScreenDismissal;
    _Bool _reappearsAfterUnlock;
    _Bool _reappearsAfterLock;
    NSString *_title;
}

+ (id)alertItemWithShowInLockScreen:(_Bool)arg1 forcesModal:(_Bool)arg2 superModal:(_Bool)arg3;
@property(nonatomic) _Bool reappearsAfterLock; // @synthesize reappearsAfterLock=_reappearsAfterLock;
@property(nonatomic) _Bool reappearsAfterUnlock; // @synthesize reappearsAfterUnlock=_reappearsAfterUnlock;
@property(nonatomic) _Bool allowLockScreenDismissal; // @synthesize allowLockScreenDismissal=_allowLockScreenDismissal;
@property(nonatomic) _Bool allowMenuButtonDismissal; // @synthesize allowMenuButtonDismissal=_allowMenuButtonDismissal;
@property(nonatomic) _Bool behavesSuperModally; // @synthesize behavesSuperModally=_behavesSuperModally;
@property(nonatomic) _Bool forcesModalAlertAppearance; // @synthesize forcesModalAlertAppearance=_forcesModalAlertAppearance;
@property(nonatomic) _Bool shouldShowInLockScreen; // @synthesize shouldShowInLockScreen=_shouldShowInLockScreen;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end

