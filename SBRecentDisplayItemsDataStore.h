//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, SBRecentAppLayouts;
@protocol SBRecentDisplayItemsPersistenceDelegate;

@interface SBRecentDisplayItemsDataStore : NSObject
{
    SBRecentAppLayouts *_recentLayouts;
    id <SBRecentDisplayItemsPersistenceDelegate> _persistenceDelegate;
    _Bool _shouldFallbackToRecentAppLayouts;
}

@property(nonatomic) __weak id <SBRecentDisplayItemsPersistenceDelegate> persistenceDelegate; // @synthesize persistenceDelegate=_persistenceDelegate;
- (void).cxx_destruct;
- (id)_displayItemsFromRecentAppLayouts:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *displayItems;
- (id)initWithRecentLayouts:(id)arg1 fallbackToRecentAppLayouts:(_Bool)arg2;
- (id)init;

@end

