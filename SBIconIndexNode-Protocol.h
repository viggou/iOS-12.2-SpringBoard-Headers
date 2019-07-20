//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSMutableArray, NSMutableSet, NSString;
@protocol SBIconIndexNodeObserver;

@protocol SBIconIndexNode <NSObject>
- (NSString *)nodeDescriptionWithPrefix:(NSString *)arg1;
- (void)removeNodeObserver:(id <SBIconIndexNodeObserver>)arg1;
- (void)addNodeObserver:(id <SBIconIndexNodeObserver>)arg1;
- (NSMutableArray *)nodesAlongIndexPath:(NSIndexPath *)arg1 consumedIndexes:(unsigned long long)arg2;
- (NSMutableSet *)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(NSIndexPath *)arg2;
- (NSMutableSet *)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
@end

