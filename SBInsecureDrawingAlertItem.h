//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDiagnosticRequestAlertItem.h"

@class NSString;

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem
{
    NSString *_processName;
}

@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (void).cxx_destruct;
- (id)message;
- (id)title;
- (_Bool)ignoreIfAlreadyDisplaying;
- (_Bool)shouldShowInLockScreen;

@end

