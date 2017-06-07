//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSWPColumns : NSObject
{
    unsigned long long _columnCount;
    _Bool _equalWidth;
    double _widthArray[10];
    double _gapArray[9];
}

+ (id)columns;
@property(nonatomic) _Bool equalWidth; // @synthesize equalWidth=_equalWidth;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
- (id)description;
- (void)setGap:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3;
- (double)p_maxEqualGapForBodyWidth:(double)arg1;
- (void)setWidth:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3;
- (double)p_equalWidthForEqualGap:(double)arg1;
- (double)p_equalGapForEqualWidth:(double)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)p_setColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2;
- (void)p_setEqualWidth:(double)arg1 equalGap:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEqualColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2;
- (id)initWithColumnCount:(unsigned long long)arg1 equalWidth:(_Bool)arg2 widthArray:(double *)arg3 gapArray:(double *)arg4;
- (id)init;
- (id)initWithColumnCount:(unsigned long long)arg1;

@end

