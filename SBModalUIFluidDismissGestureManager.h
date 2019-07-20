//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSTransactionObserver-Protocol.h"
#import "SBModalUIFluidDismissPanGestureRecognizerDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSString, SBAlertManager, SBAssistantController, SBHomeGestureSettings, SBModalUIFluidDismissGestureWorkspaceTransaction, SBModalUIFluidDismissPanGestureRecognizer;

@interface SBModalUIFluidDismissGestureManager : NSObject <SBModalUIFluidDismissPanGestureRecognizerDelegate, BSTransactionObserver, _UISettingsKeyObserver>
{
    SBAlertManager *_alertManager;
    SBAssistantController *_assistantController;
    SBHomeGestureSettings *_homeGestureSettings;
    SBModalUIFluidDismissPanGestureRecognizer *_bottomEdgeRecognizer;
    SBModalUIFluidDismissGestureWorkspaceTransaction *_currentTransaction;
}

@property(retain, nonatomic) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) SBModalUIFluidDismissPanGestureRecognizer *bottomEdgeRecognizer; // @synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer;
@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(readonly, nonatomic) SBAssistantController *assistantController; // @synthesize assistantController=_assistantController;
@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (long long)_dismissalTypeForCurrentContext;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (long long)touchInterfaceOrientationForRecognizer:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (id)initWithAlertManager:(id)arg1 assistantController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
