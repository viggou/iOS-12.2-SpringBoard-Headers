//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBTransaction.h"

#import "SBAlertManagerObserver-Protocol.h"

@class NSString, SBAlert, SBAlertManager;
@protocol SBAlertChangeTransactionDelegate;

@interface SBAlertChangeTransaction : SBTransaction <SBAlertManagerObserver>
{
    SBAlertManager *_alertManager;
    SBAlert *_toAlert;
    SBAlert *_fromAlert;
    id <SBAlertChangeTransactionDelegate> _delegate;
    _Bool _deactivateAll;
    _Bool _suppressingActivationOcclusion;
    SBAlert *_alert;
}

@property(readonly, nonatomic) SBAlert *fromAlert; // @synthesize fromAlert=_fromAlert;
@property(nonatomic) __weak id <SBAlertChangeTransactionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(readonly, nonatomic) SBAlert *toAlert; // @synthesize toAlert=_alert;
- (void).cxx_destruct;
- (void)_addDeactivationMilestones;
- (void)_addActivationMilestones;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1 fromAlert:(id)arg2 deactivateAll:(_Bool)arg3;
- (id)initWithAlertManager:(id)arg1 toAlert:(id)arg2 fromAlert:(id)arg3;
- (id)initWithAlertManager:(id)arg1 toAlert:(id)arg2;
- (id)_initWithAlertManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

