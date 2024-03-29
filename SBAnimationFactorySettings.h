//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@interface SBAnimationFactorySettings : SBUISettings
{
    _Bool _isArchiveValue;
    _Bool _slowAnimations;
    double _slowDownFactor;
}

+ (id)settingsControllerModule;
@property(nonatomic) double slowDownFactor; // @synthesize slowDownFactor=_slowDownFactor;
@property(nonatomic) _Bool slowAnimations; // @synthesize slowAnimations=_slowAnimations;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setDefaultValues;

@end

