//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBUIBannerTargetManager;
@protocol SBUIBannerTarget;

@protocol SBUIBannerTargetManagerObserver <NSObject>
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didRemoveTarget:(id <SBUIBannerTarget>)arg2;
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didAddTarget:(id <SBUIBannerTarget>)arg2;
@end
