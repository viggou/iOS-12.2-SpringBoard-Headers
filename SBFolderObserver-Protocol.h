//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexSet, SBFolder, SBIconListModel;

@protocol SBFolderObserver <NSObject>
- (void)folder:(SBFolder *)arg1 didRemoveLists:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)folder:(SBFolder *)arg1 didAddList:(SBIconListModel *)arg2;
@end
