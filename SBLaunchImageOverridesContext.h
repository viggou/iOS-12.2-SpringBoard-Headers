//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SBActivationSettings;

@interface SBLaunchImageOverridesContext : NSObject
{
    NSString *_sceneID;
    SBActivationSettings *_settings;
    _Bool _ignoreSnapshots;
    NSString *_launchImageName;
    NSURL *_url;
}

@property(readonly, copy, nonatomic) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(readonly, nonatomic) _Bool ignoreSnapshots; // @synthesize ignoreSnapshots=_ignoreSnapshots;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) SBActivationSettings *activationSettings; // @synthesize activationSettings=_settings;
@property(readonly, copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (id)initWithSceneID:(id)arg1 activationSettings:(id)arg2;

@end

