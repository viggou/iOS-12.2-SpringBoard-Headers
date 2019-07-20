//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBIconZoomSettings.h"

@interface SBCenterZoomSettings : SBIconZoomSettings
{
    _Bool _zoomViewBelowIcons;
    double _centerRowCoordinate;
    long long _distanceEffect;
    double _firstHopIncrement;
    double _hopIncrementAcceleration;
    double _dockMass;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool zoomViewBelowIcons; // @synthesize zoomViewBelowIcons=_zoomViewBelowIcons;
@property double dockMass; // @synthesize dockMass=_dockMass;
@property double hopIncrementAcceleration; // @synthesize hopIncrementAcceleration=_hopIncrementAcceleration;
@property double firstHopIncrement; // @synthesize firstHopIncrement=_firstHopIncrement;
@property long long distanceEffect; // @synthesize distanceEffect=_distanceEffect;
@property double centerRowCoordinate; // @synthesize centerRowCoordinate=_centerRowCoordinate;
- (void)setDefaultValues;

@end
