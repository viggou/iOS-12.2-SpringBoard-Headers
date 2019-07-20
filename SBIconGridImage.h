//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface SBIconGridImage : UIImage
{
    unsigned long long _numberOfCells;
}

+ (struct CGSize)sizeForNumberOfRows:(unsigned long long)arg1;
+ (struct CGRect)rectAtIndex:(unsigned long long)arg1 maxCount:(unsigned long long)arg2;
+ (struct CGSize)cellSpacing;
+ (struct CGSize)cellSize;
+ (unsigned long long)numberOfRowsForNumberOfCells:(unsigned long long)arg1;
+ (unsigned long long)numberOfColumns;
+ (id)gridImageForNumberOfCells:(unsigned long long)arg1 withCellImageProviderBlock:(CDUnknownBlockType)arg2;
+ (id)_gridImageForNumberOfCells:(unsigned long long)arg1 withPreviousGridImage:(id)arg2 cellImageProviderBlock:(CDUnknownBlockType)arg3;
- (id)iconImageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfRows;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
@property(readonly, nonatomic) unsigned long long numberOfCells;
- (id)gridImageByPatchingWithCellImageProviderBlock:(CDUnknownBlockType)arg1;

@end

