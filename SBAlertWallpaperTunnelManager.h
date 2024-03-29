//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBAlertManagerObserver-Protocol.h"

@class NSMapTable, NSMutableSet, NSString, SBAlertManager;

@interface SBAlertWallpaperTunnelManager : NSObject <SBAlertManagerObserver>
{
    SBAlertManager *_alertManager;
    NSMapTable *_hiderToHideeMap;
    NSMutableSet *_hiddenAlerts;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)dumpTunnelState;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)_showAlert:(id)arg1;
- (void)_hideAlert:(id)arg1;
- (void)_adjustHiddenAlerts;
- (void)_stopHidingAlertsForAlert:(id)arg1;
- (void)_hideAlerts:(id)arg1 onBehalfOfAlert:(id)arg2;
- (void)_setAlertManager:(id)arg1;
- (void)popTunnelToWallpaperForAlert:(id)arg1;
- (void)pushTunnelToWallpaperForAlert:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)registerAlertManager:(id)arg1 forScreen:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

