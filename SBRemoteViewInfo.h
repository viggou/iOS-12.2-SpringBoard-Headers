//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBApplication, SBProxyRemoteView;

@interface SBRemoteViewInfo : NSObject
{
    NSString *_remoteViewIdentifier;
    SBProxyRemoteView *_proxyRemoteView;
    unsigned int _contextID;
    SBApplication *_application;
    struct CGSize _viewSize;
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(retain, nonatomic) SBApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) SBProxyRemoteView *proxyRemoteView; // @synthesize proxyRemoteView=_proxyRemoteView;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(retain, nonatomic) NSString *remoteViewIdentifier; // @synthesize remoteViewIdentifier=_remoteViewIdentifier;
- (void).cxx_destruct;

@end

