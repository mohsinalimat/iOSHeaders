//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTCoordinateArray : NSObject
{
    unsigned int mOffset;
    unsigned int mCount;
    double *mCoordinates;
    double mAverage;
    NSMutableIndexSet *mVisibleIndices;
    _Bool mLayoutDirectionIsLeftToRight;
    double mTableWidth;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)hasRightToLeftOrderingWithWidth:(double)arg1;
- (id)initWithCount:(unsigned int)arg1 atOffset:(unsigned int)arg2;

@end

