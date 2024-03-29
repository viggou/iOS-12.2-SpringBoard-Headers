//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBAlertView.h"

@class CNContact, NSArray, NSLayoutConstraint, SBAppStatusBarSettingsAssertion, UIActivityIndicatorView, UIImageView, UILabel, UIView, _UILegibilitySettings;

@interface SBLogoutProgressAlertView : SBAlertView
{
    CNContact *_userContact;
    NSArray *_pendingApplications;
    _UILegibilitySettings *_legibilitySettings;
    UIImageView *_userAvatarView;
    NSLayoutConstraint *_userAvatarVerticalConstraint;
    UILabel *_goodbyeLabel;
    NSLayoutConstraint *_goodbyeLabelConstraint;
    UIView *_savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView *_savingDocumentsActivityIndicator;
    UILabel *_savingDocumentsLabel;
    UILabel *_savingDocumentsMoreLabel;
    NSLayoutConstraint *_savingDocumentsMoreLabelConstraint;
    UIView *_blameContainerView;
    UIImageView *_blameAppIconView;
    UILabel *_blameAppNameLabel;
    SBAppStatusBarSettingsAssertion *_statusBarSettingsAssertion;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(copy, nonatomic) NSArray *pendingApplications; // @synthesize pendingApplications=_pendingApplications;
@property(retain, nonatomic) CNContact *userContact; // @synthesize userContact=_userContact;
- (void).cxx_destruct;
- (void)_updateBlame;
- (void)_updateUserAvatar;
- (void)_updateGoodbye;
- (void)_updateViewData;
- (void)_updateLegibility;
- (void)_updateUserAvatarLegibility;
- (double)_userAvatarVerticalOffsetFromCenter;
- (double)_moreDocumentsLabelBaselineOffset;
- (double)_goodbyeLabelBaselineOffset;
- (void)updateConstraints;
- (void)layoutForInterfaceOrientation:(long long)arg1;
@property(nonatomic, getter=isProgressVisible) _Bool progressVisible; // @dynamic progressVisible;
- (id)initWithFrame:(struct CGRect)arg1;

@end

