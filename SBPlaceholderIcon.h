//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBIcon.h"

@class NSArray;

@interface SBPlaceholderIcon : SBIcon
{
    id _nodeIdentifier;
    SBIcon *_icon;
    NSArray *_icons;
}

+ (id)emptyPlaceholderWithDescription:(id)arg1;
+ (id)emptyPlaceholderForRemovedIcon:(id)arg1;
+ (id)emptyPlaceholder;
+ (id)grabbedIconPlaceholderForIcons:(id)arg1;
+ (id)grabbedIconPlaceholderForIcon:(id)arg1;
+ (id)placeholderForIcon:(id)arg1;
+ (id)placeholderNodeIdentifierForIconNodeIdentifier:(id)arg1;
+ (id)placeholderNodeIdentifierForIcon:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *referencedIcons;
@property(readonly, nonatomic) SBIcon *referencedIcon;
- (_Bool)isPlaceholder;
- (id)getGenericIconImage:(int)arg1;
- (_Bool)shouldCacheImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (id)automationID;
- (id)nodeIdentifier;
- (id)_initWithNodeIdentifier:(id)arg1 icons:(id)arg2;
- (id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2;

@end

