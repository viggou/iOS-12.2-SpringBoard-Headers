//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBAppSwitcherService : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_viewServiceClassName;
}

+ (id)switcherServiceWithName:(id)arg1 viewServiceClassName:(id)arg2;
@property(copy, nonatomic) NSString *viewServiceClassName; // @synthesize viewServiceClassName=_viewServiceClassName;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;

@end

