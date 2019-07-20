//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBLayoutElementDescriptor-Protocol.h"
#import "SBWorkspaceEntityGenerating-Protocol.h"

@class NSString;

@interface SBLayoutElement : NSObject <BSDescriptionProviding, SBLayoutElementDescriptor, SBWorkspaceEntityGenerating>
{
    NSString *_identifier;
    long long _layoutRole;
    unsigned long long _layoutElementMode;
    unsigned long long _supportedLayoutRoles;
    unsigned long long _layoutAttributes;
    Class _viewControllerClass;
    CDUnknownBlockType _entityGenerator;
}

+ (id)elementWithDescriptor:(id)arg1 layoutRole:(long long)arg2;
+ (id)elementWithDescriptor:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType entityGenerator; // @synthesize entityGenerator=_entityGenerator;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)workspaceEntity;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (_Bool)supportsLayoutRole:(long long)arg1;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) unsigned long long layoutAttributes;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property(readonly, nonatomic) unsigned long long layoutElementMode;
@property(readonly, nonatomic) long long layoutRole;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 layoutElementMode:(unsigned long long)arg3 supportedLayoutRoles:(unsigned long long)arg4 layoutAttributes:(unsigned long long)arg5 viewControllerClass:(Class)arg6 entityGenerator:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

