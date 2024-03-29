//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, UICollectionViewLayoutAttributes;

@interface SBStarkNotificationLayout : UICollectionViewLayout
{
    UICollectionViewLayoutAttributes *_notificationAttributes;
    UICollectionViewLayoutAttributes *_previousNotificationAttributes;
    NSArray *_subActionsAttributes;
    NSArray *_previousSubActionsAttributes;
    UICollectionViewLayoutAttributes *_backgroundAttributes;
    UICollectionViewLayoutAttributes *_previousBackgroundAttributes;
    double _notificationHeight;
    double _transitionSpacing;
    struct UIEdgeInsets _subActionsInsets;
    double _subActionPadding;
    double _subActionHeight;
}

@property(nonatomic) double subActionHeight; // @synthesize subActionHeight=_subActionHeight;
@property(nonatomic) double subActionPadding; // @synthesize subActionPadding=_subActionPadding;
@property(nonatomic) struct UIEdgeInsets subActionsInsets; // @synthesize subActionsInsets=_subActionsInsets;
@property(nonatomic) double transitionSpacing; // @synthesize transitionSpacing=_transitionSpacing;
@property(nonatomic) double notificationHeight; // @synthesize notificationHeight=_notificationHeight;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)_transitionAttributesForAction:(long long)arg1 withLayoutAttributes:(id)arg2;
- (id)init;

@end

