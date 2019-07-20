//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFolderIcon, SBIconGridImage;

@interface _SBFolderPageElement : NSObject
{
    SBIconGridImage *_gridImage;
    unsigned long long _visibleRow;
    unsigned long long _pageIndex;
    SBFolderIcon *_folderIcon;
}

@property(nonatomic) __weak SBFolderIcon *folderIcon; // @synthesize folderIcon=_folderIcon;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) unsigned long long visibleRow; // @synthesize visibleRow=_visibleRow;
@property(retain, nonatomic) SBIconGridImage *gridImage; // @synthesize gridImage=_gridImage;
- (void).cxx_destruct;
- (unsigned long long)firstVisibleRowForGap;
- (unsigned long long)firstVisibleMiniIconIndex;

@end
