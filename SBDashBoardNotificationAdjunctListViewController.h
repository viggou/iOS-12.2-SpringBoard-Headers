//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBDashBoardAdjunctListModelDelegate-Protocol.h"
#import "SBLockScreenNowPlayingControllerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBDashBoardAdjunctListModel, SBDashBoardContentActionInterpreter, SBDashBoardNowPlayingController, UIStackView;
@protocol SBDashBoardNotificationAdjunctListViewControllerDelegate;

@interface SBDashBoardNotificationAdjunctListViewController : SBDashBoardViewControllerBase <SBDashBoardAdjunctListModelDelegate, SBLockScreenNowPlayingControllerDelegate>
{
    SBDashBoardAdjunctListModel *_model;
    _Bool _respondingToSubviewLayoutChange;
    id <SBDashBoardNotificationAdjunctListViewControllerDelegate> _delegate;
    UIStackView *_stackView;
    NSMutableDictionary *_identifiersToItems;
    NSMutableArray *_dismissingItems;
    SBDashBoardNowPlayingController *_nowPlayingController;
    SBDashBoardContentActionInterpreter *_actionInterpreter;
}

+ (Class)viewClass;
@property(nonatomic) _Bool respondingToSubviewLayoutChange; // @synthesize respondingToSubviewLayoutChange=_respondingToSubviewLayoutChange;
@property(retain, nonatomic) SBDashBoardContentActionInterpreter *actionInterpreter; // @synthesize actionInterpreter=_actionInterpreter;
@property(retain, nonatomic) SBDashBoardNowPlayingController *nowPlayingController; // @synthesize nowPlayingController=_nowPlayingController;
@property(retain, nonatomic) NSMutableArray *dismissingItems; // @synthesize dismissingItems=_dismissingItems;
@property(retain, nonatomic) NSMutableDictionary *identifiersToItems; // @synthesize identifiersToItems=_identifiersToItems;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <SBDashBoardNotificationAdjunctListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGAffineTransform)_disappearedTransformForContentWithHeight:(double)arg1;
- (void)_didUpdateDisplay;
- (id)_groupNameForRecipe:(long long)arg1;
- (id)_createPlatterForHost:(id)arg1 recipe:(long long)arg2;
- (void)_removeItem:(id)arg1 animated:(_Bool)arg2;
- (void)_insertItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_canAnimate;
- (void)nowPlayingController:(id)arg1 didChangeToState:(long long)arg2;
- (void)adjunctListModel:(id)arg1 didRemoveItem:(id)arg2;
- (void)adjunctListModel:(id)arg1 didAddItem:(id)arg2;
- (_Bool)handleEvent:(id)arg1;
@property(readonly, nonatomic) double listViewContentAnimationFriction;
@property(readonly, nonatomic) double listViewContentAnimationTension;
@property(readonly, nonatomic) struct CGSize sizeToMimic;
@property(readonly, nonatomic, getter=isPresentingContent) _Bool presentingContent;
@property(readonly, nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

