//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTimer;
@protocol SBWalletPrearmRecognizerDelegate;

@interface SBWalletPrearmRecognizer : NSObject
{
    id <SBWalletPrearmRecognizerDelegate> _delegate;
    double _timeout;
    BSTimer *_timer;
    _Bool _invalidated;
}

- (void).cxx_destruct;
- (double)_computeDoubleTapTimeout;
- (void)_invalidate;
- (void)_invalidateForSuccess;
- (void)_invalidateForFailureReason:(unsigned long long)arg1;
- (void)menuButtonDoublePress;
- (void)menuButtonSinglePress;
- (void)invalidate;
- (void)startRecognizing;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

