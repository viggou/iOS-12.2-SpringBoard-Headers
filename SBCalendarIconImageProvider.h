//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBDateTimeOverrideObserver-Protocol.h"

@class NSString, SBDateTimeController;
@protocol SBCalendarIconImageProviderDelegate;

@interface SBCalendarIconImageProvider : NSObject <SBDateTimeOverrideObserver>
{
    id <SBCalendarIconImageProviderDelegate> _delegate;
    SBDateTimeController *_dateTimeController;
}

@property(readonly, nonatomic) SBDateTimeController *dateTimeController; // @synthesize dateTimeController=_dateTimeController;
@property(nonatomic) __weak id <SBCalendarIconImageProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (id)iconImageForFormat:(int)arg1 baseImageProvider:(CDUnknownBlockType)arg2;
- (void)_stopListeningForSignificantTimeChanges;
- (void)_startListeningForSignificantTimeChanges;
- (void)localeChanged;
- (void)reloadIconImage;
- (void)dealloc;
- (id)initWithDateTimeController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

