//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol UIDropSession;

@protocol SBSpringLoadedInteractionBehaviorDelegate <NSObject>
- (UIView *)targetItemForSpringLoadingInteractionInView:(UIView *)arg1 atLocation:(struct CGPoint)arg2 forDropSession:(id <UIDropSession>)arg3;

@optional
- (void)springLoadedInteractionDidFinish;
@end

