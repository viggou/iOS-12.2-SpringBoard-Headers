//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBWindow.h"

@protocol SBStarkWindowDelegate;

@interface SBStarkNowPlayingWindow : SBWindow
{
    id <SBStarkWindowDelegate> _starkWindowDelegate;
}

@property(nonatomic) __weak id <SBStarkWindowDelegate> starkWindowDelegate; // @synthesize starkWindowDelegate=_starkWindowDelegate;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;

@end

