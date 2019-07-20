//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBMainDisplayWorkspaceAppInteractionEventSourceObserving-Protocol.h"

@class NSDate, NSString, SBAlertItemsController, SBMainDisplayWorkspaceAppInteractionEventSource;

@interface SBDeveloperBuildExpirationTrigger : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving>
{
    SBAlertItemsController *_alertItemsController;
    SBMainDisplayWorkspaceAppInteractionEventSource *_eventSource;
    NSDate *_expirationDate;
}

- (void).cxx_destruct;
- (void)_coverSheetDidDismiss:(id)arg1;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)showDeveloperBuildExpirationAlertIfNecessaryFromLockscreen:(_Bool)arg1 toLauncher:(_Bool)arg2;
- (void)dealloc;
- (id)initWithAlertItemsController:(id)arg1 eventSource:(id)arg2;
- (id)_initWithAlertItemsController:(id)arg1 eventSource:(id)arg2 expirationDate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
