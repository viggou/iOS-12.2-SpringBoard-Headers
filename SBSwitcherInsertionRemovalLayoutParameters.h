//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAppLayout;

@interface SBSwitcherInsertionRemovalLayoutParameters : NSObject
{
    SBAppLayout *_appLayout;
    unsigned long long _targetVisibilityState;
}

@property(readonly, nonatomic) unsigned long long targetVisibilityState; // @synthesize targetVisibilityState=_targetVisibilityState;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)arg1 targetVisibilityState:(unsigned long long)arg2;

@end

