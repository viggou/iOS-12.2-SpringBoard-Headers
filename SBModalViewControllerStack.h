//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIViewController, _SBModalViewControllerStackTransition;
@protocol SBModalViewControllerStackDelegate;

@interface SBModalViewControllerStack : NSObject
{
    id <SBModalViewControllerStackDelegate> _delegate;
    UIViewController *_presentingViewController;
    NSMutableArray *_viewControllerStack;
    _SBModalViewControllerStackTransition *_currentTransition;
    NSMutableArray *_pendingTransitions;
}

@property(nonatomic) __weak id <SBModalViewControllerStackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_noteDidDismissViewController:(id)arg1;
- (void)_noteWillDismissViewController:(id)arg1;
- (void)_noteDidPresentViewController:(id)arg1;
- (void)_noteWillPresentViewController:(id)arg1;
- (void)_removeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performPendingTransitionIfNecessary;
- (void)_queuePendingTransition:(id)arg1;
- (void)_setCurrentTransition:(id)arg1;
- (id)_popNextPendingTransition;
- (void)_removePendingTransition:(id)arg1 forSuccess:(_Bool)arg2;
- (void)_addPendingTransition:(id)arg1;
- (void)removeViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIViewController *topViewController; // @dynamic topViewController;
@property(readonly, nonatomic) NSArray *viewControllers; // @dynamic viewControllers;
- (id)initWithPresentingViewController:(id)arg1;

@end

