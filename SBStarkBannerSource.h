//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIBannerSource-Protocol.h"
#import "SBUIBannerTargetManagerObserver-Protocol.h"

@class NSMutableArray, NSString;
@protocol SBStarkSessionConfiguring, SBUIBannerTarget;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver>
{
    id <SBStarkSessionConfiguring> _configuration;
    void *_allowedTargetIdentifier;
    id <SBUIBannerTarget> _target;
    NSMutableArray *_enqueuedItems;
}

@property(readonly, nonatomic) id <SBStarkSessionConfiguring> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (id)newBannerViewForContext:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (unsigned long long)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeEnqueuedItemsAtIndexes:(id)arg1;
- (void)dismissCurrentItemFromTarget;
- (void)enqueueItem:(id)arg1;
- (id)indexesOfEnqueuedItemsMatchingContext:(id)arg1;
- (id)currentItemFromTarget;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
