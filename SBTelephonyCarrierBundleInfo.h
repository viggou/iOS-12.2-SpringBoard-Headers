//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSString;

@interface SBTelephonyCarrierBundleInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    _Bool _LTEConnectionShows4G;
    _Bool _reinitiatingActivationDisabled;
    NSString *_customerServicePhoneNumber;
    NSArray *_disabledApplicationIDs;
    NSString *_carrierName;
    _Bool _showClass0SMSFromField;
    NSString *_homeCountryCode;
    NSArray *_ussdFilterStrings;
    NSArray *_ussdFilterSometimesStrings;
}

@property(readonly, copy, nonatomic) NSArray *ussdFilterSometimesStrings; // @synthesize ussdFilterSometimesStrings=_ussdFilterSometimesStrings;
@property(readonly, copy, nonatomic) NSArray *ussdFilterStrings; // @synthesize ussdFilterStrings=_ussdFilterStrings;
@property(readonly, copy, nonatomic) NSString *homeCountryCode; // @synthesize homeCountryCode=_homeCountryCode;
@property(readonly, nonatomic) _Bool showClass0SMSFromField; // @synthesize showClass0SMSFromField=_showClass0SMSFromField;
@property(readonly, copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(readonly, copy, nonatomic) NSArray *disabledApplicationIDs; // @synthesize disabledApplicationIDs=_disabledApplicationIDs;
@property(readonly, copy, nonatomic) NSString *customerServicePhoneNumber; // @synthesize customerServicePhoneNumber=_customerServicePhoneNumber;
@property(readonly, nonatomic, getter=isReinitiatingActivationDisabled) _Bool reinitiatingActivationDisabled; // @synthesize reinitiatingActivationDisabled=_reinitiatingActivationDisabled;
@property(readonly, nonatomic) _Bool LTEConnectionShows4G; // @synthesize LTEConnectionShows4G=_LTEConnectionShows4G;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCarrierBundleInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

