//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLPlatterView.h>

@class SBBestAppSuggestion, UIImageView, UILabel, UIView;

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView
{
    SBBestAppSuggestion *_suggestion;
    UIImageView *_iconView;
    UILabel *_appLabel;
    UILabel *_descriptionLabel;
    unsigned long long _style;
    _Bool _highlighted;
    UIView *_highlightDarkeningView;
}

@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_createDarkeningView;
- (void)_createIconViewForSuggestion:(id)arg1;
- (id)_iconImageFromAppWithBundleIdentifier:(id)arg1 withIconFormat:(int)arg2;
- (void)_createDescriptionLabelForSuggestion:(id)arg1;
- (id)_descriptionStringForSuggestion:(id)arg1;
- (id)_firstWakeGreetingString;
- (id)_meCardShortName;
- (id)_appTitleForSuggestion:(id)arg1;
- (void)_createAppLabelForSuggestion:(id)arg1;
- (void)_configureConstraints;
- (_Bool)_isSingleLine;
- (id)_descriptionFont;
- (id)_titleFont;
- (id)_textStyle;
@property(readonly, nonatomic) SBBestAppSuggestion *representedAppSuggestion;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @dynamic highlighted;
- (id)initWithFrame:(struct CGRect)arg1 appSuggestion:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;

@end
