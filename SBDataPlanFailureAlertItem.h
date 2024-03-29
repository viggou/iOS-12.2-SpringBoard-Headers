//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDataPlanAccountAlertItem.h"

@class NSString;

@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem
{
    NSString *_carrierName;
    _Bool _newAccount;
}

+ (id)nowButtonTitle;
+ (id)laterButtonTitle;
@property(nonatomic, getter=isNewAccount) _Bool newAccount; // @synthesize newAccount=_newAccount;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
- (void).cxx_destruct;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1 carrierName:(id)arg2 newAccount:(_Bool)arg3;

@end

