//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBPearlMatchingStateProvider-Protocol.h"
#import "SBUIBiometricResourceObserver-Protocol.h"

@class NSString;
@protocol SBPearlMatchingStateProviderDelegate, SBUIBiometricResource;

@interface SBCoverSheetBiometricResourceObserver : NSObject <SBUIBiometricResourceObserver, SBPearlMatchingStateProvider>
{
    _Bool _seenMatchResultSinceScreenOn;
    id <SBPearlMatchingStateProviderDelegate> _delegate;
    id <SBUIBiometricResource> _biometricResource;
}

@property(nonatomic) __weak id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(nonatomic) _Bool seenMatchResultSinceScreenOn; // @synthesize seenMatchResultSinceScreenOn=_seenMatchResultSinceScreenOn;
@property(nonatomic) __weak id <SBPearlMatchingStateProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)setSeenMatchResultSinceScreenOn:(_Bool)arg1 notifyDelegate:(_Bool)arg2;
@property(readonly, nonatomic) _Bool pearlMatchEnabledAndPossible;
- (void)reset;
- (id)initWithBiometricResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

