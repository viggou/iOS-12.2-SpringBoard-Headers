//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDownloadingIcon.h"

#import "SBCalendarIconImageProviderDelegate-Protocol.h"

@class SBCalendarIconImageProvider;

@interface SBCalendarDownloadingIcon : SBDownloadingIcon <SBCalendarIconImageProviderDelegate>
{
    SBCalendarIconImageProvider *_imageProvider;
}

+ (_Bool)canGenerateIconsInBackground;
@property(readonly, nonatomic) SBCalendarIconImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (void)calendarIconImageProviderHasChanged:(id)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (id)_compositedIconImageForFormat:(int)arg1 withBaseImageProvider:(CDUnknownBlockType)arg2;
- (void)localeChanged;
- (id)initWithApplicationPlaceholder:(id)arg1;

@end

