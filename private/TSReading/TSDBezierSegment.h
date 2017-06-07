//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSDBezierSegment : NSObject
{
    struct CGPoint mA;
    struct CGPoint mOut;
    struct CGPoint mIn;
    struct CGPoint mB;
}

+ (id)segmentFromPoint:(struct CGPoint)arg1 outPoint:(struct CGPoint)arg2 inPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4;
- (struct CGPoint)closestPointToPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointAtParametricValue:(double)arg1;
- (void)splitAtParametricValue:(double)arg1 left:(id *)arg2 right:(id *)arg3;
- (double)parametricValueForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint outPoint;
@property(readonly, nonatomic) struct CGPoint inPoint;
@property(readonly, nonatomic) struct CGPoint toPoint;
@property(readonly, nonatomic) struct CGPoint fromPoint;
- (id)initFromPoint:(struct CGPoint)arg1 outPoint:(struct CGPoint)arg2 inPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4;
@property(readonly, nonatomic) _Bool bogusSegment;
- (id)description;

@end

