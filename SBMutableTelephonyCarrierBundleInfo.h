//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBTelephonyCarrierBundleInfo.h"

@class NSArray, NSString;

@interface SBMutableTelephonyCarrierBundleInfo : SBTelephonyCarrierBundleInfo
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *ussdFilterSometimesStrings; // @dynamic ussdFilterSometimesStrings;
@property(copy, nonatomic) NSArray *ussdFilterStrings; // @dynamic ussdFilterStrings;
@property(copy, nonatomic) NSString *homeCountryCode; // @dynamic homeCountryCode;
@property(nonatomic) _Bool showClass0SMSFromField; // @dynamic showClass0SMSFromField;
@property(copy, nonatomic) NSString *carrierName; // @dynamic carrierName;
@property(copy, nonatomic) NSArray *disabledApplicationIDs; // @dynamic disabledApplicationIDs;
@property(copy, nonatomic) NSString *customerServicePhoneNumber; // @dynamic customerServicePhoneNumber;
@property(nonatomic, getter=isReinitiatingActivationDisabled) _Bool reinitiatingActivationDisabled; // @dynamic reinitiatingActivationDisabled;
@property(nonatomic) _Bool LTEConnectionShows4G; // @dynamic LTEConnectionShows4G;

@end

