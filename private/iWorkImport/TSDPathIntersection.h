//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDPathIntersection : NSObject
{
    long long mSegment;
    long long mSegmentB;
    double mT;
    double mTB;
    struct CGPoint mPoint;
}

@property(readonly, nonatomic) double tB; // @synthesize tB=mTB;
@property(readonly, nonatomic) long long segmentB; // @synthesize segmentB=mSegmentB;
@property(nonatomic) struct CGPoint point; // @synthesize point=mPoint;
@property(readonly, nonatomic) double t; // @synthesize t=mT;
@property(readonly, nonatomic) long long segment; // @synthesize segment=mSegment;
- (long long)compareT:(id)arg1;
- (long long)compareSegmentAndT:(id)arg1;
- (id)description;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(struct CGPoint)arg5;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(struct CGPoint)arg3;

@end

