//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface SBSetupWiFiScanner : NSObject
{
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    NSThread *_scanningThread;
    CDUnknownBlockType _completionHandler;
    long long _state;
}

@property(nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;
@property(copy, getter=_completionHandler, setter=_setCompletionHandler:) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, getter=_scanningThread, setter=_setScanningThread:) NSThread *scanningThread; // @synthesize scanningThread=_scanningThread;
- (void).cxx_destruct;
- (void)_thread_cancelScanning;
- (void)cancel;
- (void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1;
- (void)_thread_closeWifiConnection;
- (void)_thread_wifiScanComplete:(struct __CFArray *)arg1 error:(_Bool)arg2;
- (void)_wifiScanningThread;
- (void)beginScanningWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

