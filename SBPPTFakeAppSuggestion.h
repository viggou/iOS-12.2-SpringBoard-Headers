//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBBestAppSuggestion.h"

@class NSString, NSUUID;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion
{
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)bundleIdentifier;
- (id)uniqueIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;

@end

