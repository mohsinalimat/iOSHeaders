//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDPathManipulation.h>

@class NSMutableArray, NSMutableDictionary;

@interface TSDBrushPathManipulation : TSDPathManipulation
{
    struct CGPath *mBrushStroke;
    double mRepeatLength;
    NSMutableDictionary *mSections;
    NSMutableArray *mMiddleSections;
    NSMutableArray *mSmallSections;
    double mSmallLimitWidth;
    _Bool mSplitAtSharpAngles;
}

@end

