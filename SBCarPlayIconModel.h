//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBIconModel.h"

@class NSArray, NSString;

@interface SBCarPlayIconModel : SBIconModel
{
    NSArray *_metadata_hiddenBundleIdentifiers;
    struct CGRect _metadata_screenBounds;
    _Bool _metadata_showsOEMIcon;
    NSString *_metadata_OEMIconLabel;
    _Bool _current_isSet;
    struct CGRect _current_screenBounds;
    _Bool _current_showsOEMIcon;
    NSString *_current_OEMIconLabel;
}

@property(readonly, nonatomic) NSArray *hiddenBundleIdentifiers; // @synthesize hiddenBundleIdentifiers=_metadata_hiddenBundleIdentifiers;
- (void).cxx_destruct;
- (void)_importStateWithoutLayout:(id)arg1;
- (_Bool)importState:(id)arg1;
- (void)didUnarchiveMetadata:(id)arg1;
- (id)iconModelMetadata;
- (_Bool)isIconVisible:(id)arg1;
- (void)persistIconStateWithoutLayout;
- (void)resetCurrentIconState;
- (id)exportStateForCarKit;
- (void)setCurrentConnectionScreenBounds:(struct CGRect)arg1 oemVisibility:(_Bool)arg2 withLabel:(id)arg3;
@property(readonly, nonatomic) NSString *OEMIconLabel;
@property(readonly, nonatomic) _Bool showsOEMIcon;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) unsigned long long rowCount;
@property(readonly, nonatomic) struct CGRect screenBounds;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;

@end

