//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class NSArray, NSString, SBAlertItem;

@interface SBTestableAlertItemTestRecipe : NSObject <SBTestRecipe>
{
    SBAlertItem *_item;
    NSArray *_recipesToTest;
}

+ (id)nameForCase:(long long)arg1;
+ (id)testCasesGrouped;
+ (id)testCases;
+ (id)title;
@property(retain, nonatomic) NSArray *recipesToTest; // @synthesize recipesToTest=_recipesToTest;
- (void).cxx_destruct;
- (id)alertForIndex:(long long)arg1;
- (id)_nextAlertItemToTest;
- (id)dataPlanAlertItemForCase:(long long)arg1;
- (id)_mapsApp;
- (id)_anySUDescriptor;
- (id)_anyUserInstalledAppIcon;
- (id)_anyAppIcon;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_dismissCurrentItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

