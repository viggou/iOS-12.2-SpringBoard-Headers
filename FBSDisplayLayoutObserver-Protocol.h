//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutTransitionContext;

@protocol FBSDisplayLayoutObserver <NSObject>

@optional
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2 withContext:(FBSDisplayLayoutTransitionContext *)arg3;
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2;
@end
