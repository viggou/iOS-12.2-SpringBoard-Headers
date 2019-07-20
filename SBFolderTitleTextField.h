//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@class _UILegibilitySettings;

@interface SBFolderTitleTextField : UITextField
{
    _Bool _showingEditUI;
    _Bool _allowsEditing;
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)_clearButtonImage;
+ (id)_editBackgroundImage;
+ (void)warmupIfNecessary;
@property(readonly, nonatomic) _Bool showingEditUI; // @synthesize showingEditUI=_showingEditUI;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (void).cxx_destruct;
- (id)_clearButtonImage;
- (id)_backgroundImage;
- (void)_updateLegibility;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) double fontSize;
- (void)setShowsEditUI:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

