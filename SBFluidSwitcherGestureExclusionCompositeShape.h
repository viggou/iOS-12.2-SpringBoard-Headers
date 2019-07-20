//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBFluidSwitcherGestureExclusionShape-Protocol.h"

@class NSArray, NSString;

@interface SBFluidSwitcherGestureExclusionCompositeShape : NSObject <SBFluidSwitcherGestureExclusionShape>
{
    _Bool _allowHorizontalSwipesInsideShapes;
    NSArray *_rects;
    double _topEdgeY;
}

+ (id)exclusionCompositeShapeWithRects:(id)arg1 allowHorizontalSwipes:(_Bool)arg2;
@property(nonatomic) double topEdgeY; // @synthesize topEdgeY=_topEdgeY;
@property(nonatomic) _Bool allowHorizontalSwipesInsideShapes; // @synthesize allowHorizontalSwipesInsideShapes=_allowHorizontalSwipesInsideShapes;
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=_rects;
- (void).cxx_destruct;
- (_Bool)shouldBeginGestureAtStartingPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 bounds:(struct CGRect)arg3;
- (id)debugView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
