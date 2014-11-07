//  Copyright (c) 2014 Venture Media Labs. All rights reserved.

#import "VMKScoreElementImageLayer.h"
#include <mxml/geometry/NoteGeometry.h>


@interface VMKNoteHeadLayer : VMKScoreElementImageLayer

/**
 Get the image for the note head of the given type at a particlar scale.
 */
+ (NSString*)headImageNameForNote:(const mxml::dom::Note&)note;

- (instancetype)initWithNoteGeometry:(const mxml::NoteGeometry*)noteGeom;

@property(nonatomic) const mxml::NoteGeometry* noteGeometry;

@end
