//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@interface SBLockScreenBiometricFailureSettings : SBUISettings
{
    _Bool _jiggleLock;
    _Bool _vibrate;
    _Bool _showPasscode;
    _Bool _waitUntilButtonUp;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool waitUntilButtonUp; // @synthesize waitUntilButtonUp=_waitUntilButtonUp;
@property(nonatomic) _Bool showPasscode; // @synthesize showPasscode=_showPasscode;
@property(nonatomic) _Bool vibrate; // @synthesize vibrate=_vibrate;
@property(nonatomic) _Bool jiggleLock; // @synthesize jiggleLock=_jiggleLock;
- (void)setDefaultValues;

@end

