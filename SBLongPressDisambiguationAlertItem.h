//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLongPressDisambiguationAlertItem : SBAlertItem
{
    long long _result;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (_Bool)dismissOnLock;
- (_Bool)ignoreIfAlreadyDisplaying;
- (void)deactivateForButton;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)init;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

