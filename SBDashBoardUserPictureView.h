//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBUILegibility-Protocol.h"

@class CNContact, NSString, _UILegibilitySettings, _UILegibilityView;

@interface SBDashBoardUserPictureView : SBDashBoardViewBase <SBUILegibility>
{
    CNContact *_contact;
    _UILegibilityView *_monogramLegibilityView;
    double _legibilityStrength;
    _UILegibilitySettings *_legibilitySettings;
    double _diameter;
}

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(nonatomic) double strength; // @synthesize strength=_legibilityStrength;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)_regenerateImage;
- (id)presentationRegions;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

