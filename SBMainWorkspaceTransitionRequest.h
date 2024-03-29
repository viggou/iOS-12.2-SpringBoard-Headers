//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBWorkspaceTransitionRequest.h"

@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest
{
    long long _source;
    CDUnknownBlockType _transactionProvider;
}

@property(copy, nonatomic) CDUnknownBlockType transactionProvider; // @synthesize transactionProvider=_transactionProvider;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)isMainWorkspaceTransitionRequest;
- (id)succinctDescriptionBuilder;
- (id)compactDescriptionBuilder;
- (void)finalize;
- (void)declineWithReason:(id)arg1;
- (id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2;
- (id)initWithDisplayConfiguration:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SBMainWorkspace *workspace; // @dynamic workspace;

@end

