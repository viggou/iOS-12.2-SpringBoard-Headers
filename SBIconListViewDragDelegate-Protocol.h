//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBIconListView, SBIconView, UIDragItem, UIDropProposal, UITargetedDragPreview;
@protocol UIDragAnimating, UIDropSession;

@protocol SBIconListViewDragDelegate <NSObject>
- (void)iconListView:(SBIconListView *)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(SBIconView *)arg2;
- (_Bool)iconListView:(SBIconListView *)arg1 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(SBIconView *)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDragItem:(UIDragItem *)arg2 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg3;
- (UITargetedDragPreview *)iconListView:(SBIconListView *)arg1 previewForDroppingIconDragItem:(UIDragItem *)arg2 proposedPreview:(UITargetedDragPreview *)arg3;
- (void)iconListView:(SBIconListView *)arg1 performIconDrop:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidExit:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSession:(id <UIDropSession>)arg2 didPauseAtLocation:(struct CGPoint)arg3;
- (UIDropProposal *)iconListView:(SBIconListView *)arg1 iconDropSessionDidUpdate:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)iconListView:(SBIconListView *)arg1 canHandleIconDropSession:(id <UIDropSession>)arg2;
@end

