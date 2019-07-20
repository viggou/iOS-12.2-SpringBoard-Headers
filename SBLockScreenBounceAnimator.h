//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIDynamicAnimatorDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSMutableSet, NSSet, NSString, SBBounceBehavior, SBBounceSettings, SBBouncingItem, SBBouncingSystem, UIDynamicAnimator, UIGestureRecognizer, UIView;
@protocol SBPresentingDelegate;

@interface SBLockScreenBounceAnimator : NSObject <UIDynamicAnimatorDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate>
{
    NSMutableSet *_tapExcludedViews;
    NSMutableSet *_tapExcludedZones;
    _Bool _isAnimating;
    _Bool _bounceEnabled;
    UIView *_view;
    SBBouncingSystem *_system;
    UIDynamicAnimator *_animator;
    SBBouncingItem *_item;
    SBBounceBehavior *_behavior;
    UIGestureRecognizer *_tapRecognizer;
    NSSet *_gestures;
    CDUnknownBlockType _shouldBeginBlock;
    CDUnknownBlockType _prepareBlock;
    CDUnknownBlockType _translateBlock;
    CDUnknownBlockType _canceledBlock;
    CDUnknownBlockType _completedBlock;
    SBBounceSettings *_settings;
    id <SBPresentingDelegate> _presentingDelegate;
}

@property(nonatomic) __weak id <SBPresentingDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(retain, nonatomic) SBBounceSettings *settings; // @synthesize settings=_settings;
@property(copy) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy) CDUnknownBlockType canceledBlock; // @synthesize canceledBlock=_canceledBlock;
@property(copy) CDUnknownBlockType translateBlock; // @synthesize translateBlock=_translateBlock;
@property(copy) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(copy) CDUnknownBlockType shouldBeginBlock; // @synthesize shouldBeginBlock=_shouldBeginBlock;
- (void).cxx_destruct;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateSettings;
- (void)_createAnimator;
- (void)_removeAnimator;
- (void)_resetAnimator;
- (void)_beginAnimating:(id)arg1;
- (void)reenableGestureRecognizer:(id)arg1;
- (void)cancelGestureRecognizer:(id)arg1;
- (_Bool)allowTapForGestureRecognizer:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) __weak NSSet *gestures;
- (void)_removeTapRecognizer;
- (void)_addTapRecognizer;
- (void)addTapExcludedZone:(struct CGRect)arg1;
@property(readonly, nonatomic) __weak NSSet *tapExcludedViews;
- (void)removeTapExcludedView:(id)arg1;
- (void)addTapExcludedView:(id)arg1;
- (void)setBounceEnabled:(_Bool)arg1;
- (void)cancelAnimation;
- (_Bool)isAnimating;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

