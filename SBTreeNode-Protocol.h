//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SBTreeNode;

@protocol SBTreeNode <NSObject>
@property(nonatomic) __weak id <SBTreeNode> parent;
@property(readonly, nonatomic) NSArray *children;
- (void)ancestryDidChange;
- (unsigned long long)indexOfChild:(id <SBTreeNode>)arg1;
@end

