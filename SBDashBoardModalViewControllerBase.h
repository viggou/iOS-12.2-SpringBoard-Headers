//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBDashBoardModalViewDelegate-Protocol.h"

@class NSString;

@interface SBDashBoardModalViewControllerBase : SBDashBoardViewControllerBase <SBDashBoardModalViewDelegate>
{
}

+ (Class)viewClass;
- (void)handleSecondaryActionForView:(id)arg1;
- (void)handlePrimaryActionForView:(id)arg1;
- (_Bool)isPortrait;
- (long long)presentationPriority;
- (long long)presentationType;
- (long long)presentationStyle;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;
- (id)viewIfLoaded;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
