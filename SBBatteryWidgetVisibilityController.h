//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBBatteryWidgetVisibilityController : NSObject
{
}

+ (id)sharedInstance;
- (void)_makeVisible;
- (_Bool)_isVisible;
- (_Bool)_isAlwaysVisible;
- (void)_setVisibleIfNecessary:(_Bool)arg1;
- (_Bool)_containsExternalBattery;
- (void)_connectedDevicesDidChange;
- (id)init;

@end
