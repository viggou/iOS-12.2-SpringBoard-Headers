//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBTransaction.h"

@class SBStarkScreenController;

@interface SBWaitForCarNowPlayingActiveTransaction : SBTransaction
{
    SBStarkScreenController *_screenController;
    double _timeout;
}

- (void).cxx_destruct;
- (void)_begin;
- (id)initWithScreenController:(id)arg1 timeout:(double)arg2;

@end

