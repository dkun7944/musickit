//  Copyright (c) 2014 Venture Media Labs. All rights reserved.

#import "VMKScoreElementLayer.h"
#include <mxml/geometry/MeasureGeometry.h>


@interface VMKMeasureLayer : VMKScoreElementLayer

- (instancetype)initWithMeasure:(const mxml::MeasureGeometry*)measureGeom;

@property(nonatomic) const mxml::MeasureGeometry* measureGeometry;

@end
