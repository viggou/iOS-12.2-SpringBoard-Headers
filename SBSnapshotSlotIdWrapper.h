//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject
{
    unsigned int _slotId;
    CAContext *_context;
}

@property(readonly, nonatomic) CAContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned int slotId; // @synthesize slotId=_slotId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1 slotId:(unsigned int)arg2;

@end

