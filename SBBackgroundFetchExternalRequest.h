//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject
{
    int _sequenceNumber;
    UIFetchContentInBackgroundAction *_action;
    NSString *_bundleID;
}

@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) UIFetchContentInBackgroundAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)execute;
- (id)initForBundleID:(id)arg1;

@end

