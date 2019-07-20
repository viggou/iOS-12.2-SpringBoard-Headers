//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBMainDisplayWorkspaceAppInteractionEventSourceObserving-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet, NSSet, NSString, SBApplicationController;
@protocol SBRecentDisplayItemsControllerDelegate;

@interface SBRecentDisplayItemsController : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving>
{
    NSMutableOrderedSet *_recentDisplayItems;
    long long _removalPersonality;
    long long _movePersonality;
    NSSet *_relevantTransitionFromSources;
    unsigned long long _maxDisplayItems;
    SBApplicationController *_appController;
    id <SBRecentDisplayItemsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBRecentDisplayItemsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (void)_removeDisplayItem:(id)arg1;
- (void)_moveDisplayItemToFront:(id)arg1;
- (void)_addDisplayItemToFront:(id)arg1;
- (void)_addOrMoveDisplayItemToFront:(id)arg1;
- (id)_displayItemForLayoutElement:(id)arg1;
- (id)_firstDisplayItemForBundleID:(id)arg1;
- (_Bool)_isDisallowedDisplayItem:(id)arg1;
- (_Bool)_displayItemIsExecutableOnCurrentPlatform:(id)arg1;
- (void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
- (void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
- (void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
- (void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
- (void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
- (void)reset;
@property(copy, nonatomic) NSOrderedSet *recentDisplayItems;
- (id)init;
- (id)initWithRemovalPersonality:(long long)arg1 movePersonality:(long long)arg2 transitionFromSources:(id)arg3 maxDisplayItems:(unsigned long long)arg4 eventSource:(id)arg5 applicationController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
