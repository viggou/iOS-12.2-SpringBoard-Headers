//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSString, SBIconView;

@interface _SBIconListViewDataDraggingContext : NSObject <BSDescriptionProviding>
{
    _Bool _allowsMoveOperation;
    SBIconView *_iconView;
    NSString *_bestAvailableUTI;
    long long _fileOptions;
}

@property(readonly, nonatomic) long long fileOptions; // @synthesize fileOptions=_fileOptions;
@property(readonly, nonatomic) _Bool allowsMoveOperation; // @synthesize allowsMoveOperation=_allowsMoveOperation;
@property(readonly, nonatomic) NSString *bestAvailableUTI; // @synthesize bestAvailableUTI=_bestAvailableUTI;
@property(readonly, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithIconView:(id)arg1 bestUTI:(id)arg2 allowsMoveOperation:(_Bool)arg3 fileOptions:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

