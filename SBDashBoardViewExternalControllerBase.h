//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBDashBoardExternalAppearanceProviding-Protocol.h"
#import "SBDashBoardExternalBehaviorProviding-Protocol.h"
#import "SBDashBoardExternalEventHandling-Protocol.h"
#import "SBDashBoardExternalPresentationProviding-Protocol.h"

@class NSArray, NSSet, NSString, SBDashBoardLayoutStrategy, UIColor, _UILegibilitySettings;
@protocol UICoordinateSpace;

@interface SBDashBoardViewExternalControllerBase : SBDashBoardViewControllerBase <SBDashBoardExternalAppearanceProviding, SBDashBoardExternalBehaviorProviding, SBDashBoardExternalPresentationProviding, SBDashBoardExternalEventHandling>
{
    _Bool _externalToDashBoard;
}

@property(readonly, nonatomic, getter=isExternalToDashBoard) _Bool externalToDashBoard; // @synthesize externalToDashBoard=_externalToDashBoard;
- (id)_presenter;
- (void)_unregisterAsExternalProvider;
- (void)_registerAsExternalProviderIfNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long participantState;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly) Class superclass;

@end

