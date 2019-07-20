//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSTransactionObserver-Protocol.h"
#import "SBPanSystemGestureRecognizerDelegate-Protocol.h"

@class NSString, SBAppResizeGestureWorkspaceTransaction, SBFloatingApplicationController, SBMainDisplaySceneLayoutViewController, SBMoveSideApplicationPanSystemGestureRecognizerWorkspaceTransaction, SBPanSystemGestureRecognizer, SBUnpinSideApplicationPanSystemGestureRecognizerWorkspaceTransaction;

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <BSTransactionObserver, SBPanSystemGestureRecognizerDelegate>
{
    SBPanSystemGestureRecognizer *_resizePanSystemGestureRecognizer;
    SBPanSystemGestureRecognizer *_movePanSystemGestureRecognizer;
    SBAppResizeGestureWorkspaceTransaction *_resizePanSystemGestureRecognizerWorkspaceTransaction;
    SBMoveSideApplicationPanSystemGestureRecognizerWorkspaceTransaction *_movePanSystemGestureRecognizerWorkspaceTransaction;
    SBUnpinSideApplicationPanSystemGestureRecognizerWorkspaceTransaction *_unpinPanSystemGestureRecognizerWorkspaceTransaction;
    SBFloatingApplicationController *_floatingApplicationController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    long long _interfaceOrientation;
    SBPanSystemGestureRecognizer *_unpinPanSystemGestureRecognizer;
}

+ (id)prototypeSettingsAnimationSettings;
+ (double)prototypeSettingsEdgeSwipeHitTestWidth:(long long)arg1;
@property(readonly, nonatomic) SBPanSystemGestureRecognizer *unpinPanSystemGestureRecognizer; // @synthesize unpinPanSystemGestureRecognizer=_unpinPanSystemGestureRecognizer;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) __weak SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
- (void).cxx_destruct;
- (long long)_layoutRoleForLayoutElementSupportingTransitionToFloatingLayoutRole;
- (id)_sideLayoutRoleApplicationSceneLayoutElementViewController;
- (_Bool)_hasActiveModalFloatingApplication;
- (_Bool)_allowSystemGestureRecognizer:(id)arg1 withSystemGestureType:(unsigned long long)arg2 toReceiveTouch:(id)arg3;
- (void)_unhighlightSideLayoutRoleApplicationSceneLayoutElementViewControllerNubView;
- (void)_highlightSideLayoutRoleApplicationSceneLayoutElementViewControllerNubView;
- (void)_manageUnpinPanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (void)_manageMovePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (void)_createResizePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (void)_handleUnpinPanSystemGestureRecognizer:(id)arg1;
- (void)_handleMovePanSystemGestureRecognizer:(id)arg1;
- (void)_handleResizePanSystemGestureRecognizer:(id)arg1;
- (_Bool)_hasActiveSystemGestureRecognizerWorkspaceTransaction;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)panSystemGestureRecognizer:(id)arg1 didReceiveInitialTouch:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (id)init;
- (id)initWithSceneLayoutViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
