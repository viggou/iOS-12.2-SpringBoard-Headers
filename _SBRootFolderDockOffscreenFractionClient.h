//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBDockOffscreenFractionModifying-Protocol.h"

@class NSString, SBRootFolderView;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding>
{
    NSString *_reason;
    SBRootFolderView *_folderView;
    double _desiredOffscreenFraction;
}

@property(nonatomic) double desiredOffscreenFraction; // @synthesize desiredOffscreenFraction=_desiredOffscreenFraction;
@property(retain, nonatomic) SBRootFolderView *folderView; // @synthesize folderView=_folderView;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)layoutIfNeededForDockOffscreenFractionChanged;
- (void)setDockOffscreenFraction:(double)arg1;
- (void)dealloc;
- (id)initWithFolderView:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

