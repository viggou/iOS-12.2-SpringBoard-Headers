//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_group;

@interface _SBSynchronizeOperation : NSOperation
{
    NSString *_humanReadableDescription;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSMutableArray *_tasks;
}

@property(retain, nonatomic) NSString *humanReadableDescription; // @synthesize humanReadableDescription=_humanReadableDescription;
- (void).cxx_destruct;
- (void)main;
- (void)addTask:(CDUnknownBlockType)arg1;
- (id)init;

@end
