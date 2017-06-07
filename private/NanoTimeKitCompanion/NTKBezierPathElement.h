//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKBezierPathElement : NSObject
{
    int _type;
    unsigned long long _pointCount;
    struct CGPoint *_points;
    double _length;
}

@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) struct CGPoint *points; // @synthesize points=_points;
@property(nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property(nonatomic) int type; // @synthesize type=_type;
- (double)computeLength;
- (unsigned long long)numberOfPointsForCGPathElementType:(int)arg1;
- (struct CGPoint)pointOnPathForX:(double)arg1;
@property(readonly, nonatomic) struct CGPoint endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint;
- (void)dealloc;
- (id)initWithStartPoint:(struct CGPoint)arg1 pathElement:(const struct CGPathElement *)arg2;

@end

