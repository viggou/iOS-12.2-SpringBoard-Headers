//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBUIOptionalLegibility-Protocol.h"

@class NSString, SBUILegibilityLabel, UIImageView, UIStatusBar, UIView, _UILegibilitySettings;

@interface SBDashBoardTeachableMomentsContainerView : SBDashBoardViewBase <SBUIOptionalLegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    UIView *_controlCenterGrabberView;
    UIView *_controlCenterGrabberPositionPlaceholderView;
    UIImageView *_controlCenterGlyphView;
    SBUILegibilityLabel *_callToActionLabel;
    UIView *_callToActionLabelPositionPlaceholderView;
    UIStatusBar *_statusBarToFollow;
    UIView *_controlCenterGrabberEffectContainerView;
    UIView *_controlCenterTutorsContainerView;
    UIView *_controlCenterGrabberContainerView;
    UIView *_controlCenterGlyphContainerView;
    UIView *_callToActionLabelContainerView;
    UIView *_homeAffordanceContainerView;
    UIView *_homeAffordanceView;
}

@property(retain, nonatomic) UIView *homeAffordanceView; // @synthesize homeAffordanceView=_homeAffordanceView;
@property(retain, nonatomic) UIView *homeAffordanceContainerView; // @synthesize homeAffordanceContainerView=_homeAffordanceContainerView;
@property(retain, nonatomic) UIView *callToActionLabelContainerView; // @synthesize callToActionLabelContainerView=_callToActionLabelContainerView;
@property(retain, nonatomic) UIView *controlCenterGlyphContainerView; // @synthesize controlCenterGlyphContainerView=_controlCenterGlyphContainerView;
@property(retain, nonatomic) UIView *controlCenterGrabberContainerView; // @synthesize controlCenterGrabberContainerView=_controlCenterGrabberContainerView;
@property(retain, nonatomic) UIView *controlCenterTutorsContainerView; // @synthesize controlCenterTutorsContainerView=_controlCenterTutorsContainerView;
@property(retain, nonatomic) UIView *controlCenterGrabberEffectContainerView; // @synthesize controlCenterGrabberEffectContainerView=_controlCenterGrabberEffectContainerView;
@property(nonatomic) __weak UIStatusBar *statusBarToFollow; // @synthesize statusBarToFollow=_statusBarToFollow;
@property(retain, nonatomic) UIView *callToActionLabelPositionPlaceholderView; // @synthesize callToActionLabelPositionPlaceholderView=_callToActionLabelPositionPlaceholderView;
@property(retain, nonatomic) SBUILegibilityLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property(retain, nonatomic) UIImageView *controlCenterGlyphView; // @synthesize controlCenterGlyphView=_controlCenterGlyphView;
@property(retain, nonatomic) UIView *controlCenterGrabberPositionPlaceholderView; // @synthesize controlCenterGrabberPositionPlaceholderView=_controlCenterGrabberPositionPlaceholderView;
@property(retain, nonatomic) UIView *controlCenterGrabberView; // @synthesize controlCenterGrabberView=_controlCenterGrabberView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;
- (_Bool)statusBarIsReady;
- (id)_callToActionLabelFont;
- (void)_preferredTextSizeChanged:(id)arg1;
- (struct CGPoint)_grabberCenterForCointainerBounds:(struct CGRect)arg1 grabberTop:(double)arg2 grabberSize:(struct CGSize)arg3;
- (void)_layoutControlCenterGrabberAndGlyph;
- (void)_layoutCallToActionLabel;
- (void)_layoutHomeAffordanceContainer;
- (void)_addControlCenterTutors;
- (void)_addCallToActionLabel;
- (id)createCallToActionLabel;
- (void)_updateViewsForLegibilitySettings;
- (id)presentationRegions;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

