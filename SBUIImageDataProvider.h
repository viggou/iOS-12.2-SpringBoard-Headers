//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBSnapshotDataProvider-Protocol.h"

@class NSString, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider>
{
    UIImage *_image;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
    _Bool _allowIOSurface;
}

@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)fetchImage;
- (id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3 allowIOSurface:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

