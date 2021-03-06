//
//  NSBezierPath_AMAdditons.h
//  PlateControl
//
//  Created by Andreas on Sun Jan 18 2004.
//  Copyright (c) 2004 Andreas Mayer. All rights reserved.
//  Copyright 2011 Hardcoded Software (http://www.hardcoded.net)
//
//	2005-05-23	Andreas Mayer
//	- added -appendBezierPathWithTriangleInRect:orientation: and +bezierPathWithTriangleInRect:orientation:


#import <AppKit/AppKit.h>

typedef enum {
	AMTriangleUp = 0,
	AMTriangleDown,
	AMTriangleLeft,
	AMTriangleRight
} AMTriangleOrientation;

@interface NSBezierPath (AMAdditons)

+ (NSBezierPath *)bezierPathWithPlateInRect:(NSRect)rect;

- (void)appendBezierPathWithPlateInRect:(NSRect)rect;


+ (NSBezierPath *)bezierPathWithRoundedRect:(NSRect)rect cornerRadius:(CGFloat)radius;

- (void)appendBezierPathWithRoundedRect:(NSRect)rect cornerRadius:(CGFloat)radius;


+ (NSBezierPath *)bezierPathWithTriangleInRect:(NSRect)aRect orientation:(AMTriangleOrientation)orientation;

- (void)appendBezierPathWithTriangleInRect:(NSRect)aRect orientation:(AMTriangleOrientation)orientation;

@end
