//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class SBIconScrollView;

@protocol SBIconScrollViewDelegate <UIScrollViewDelegate>
- (_Bool)iconScrollView:(SBIconScrollView *)arg1 shouldSetContentOffset:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(SBIconScrollView *)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(SBIconScrollView *)arg1;
@end

