//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayLayoutObserver-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class FBSDisplayLayoutMonitor, NSString, SBBackBoardServicesInterface, SBMedusaSettings;
@protocol OS_dispatch_queue;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver, _UISettingsKeyObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    SBBackBoardServicesInterface *_queue_bksInterface;
    FBSDisplayLayoutMonitor *_queue_displayLayoutMonitor;
    SBMedusaSettings *_medusaSettings;
    double _queue_touchRegionBuffer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)_queue_displayLayoutDidUpdate:(id)arg1;
- (id)_queue_floatingHitTestRegionForLayoutRect:(struct CGRect)arg1;
- (struct NSMutableSet *)_queue_calculateHitTestRegionsFromSceneRects:(struct NSMutableSet *)arg1;
- (struct NSMutableSet *)_queue_calculateTouchRegionsFromSceneRects:(struct NSMutableSet *)arg1;
- (id)displayLayoutMonitor;
- (void)setDisplayLayoutMonitor:(id)arg1;
- (void)setTouchRegionBuffer:(double)arg1;
- (double)touchRegionBuffer;
- (void)dealloc;
- (id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2 settings:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

