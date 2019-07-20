//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@protocol SBCollectionViewCellDelegate;

@interface SBCollectionViewCell : UICollectionViewCell
{
    _Bool _performSetHighlighted;
    _Bool _protectDelayedUnhighlights;
    id <SBCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SBCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool protectDelayedUnhighlights; // @synthesize protectDelayedUnhighlights=_protectDelayedUnhighlights;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 afterDelay:(double)arg2;
- (void)_performSetHighlighted;
- (void)_didSetHighlighted:(_Bool)arg1;

@end

