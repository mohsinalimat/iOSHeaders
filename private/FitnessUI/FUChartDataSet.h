//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FUChartDataSetDataSource;

@interface FUChartDataSet : NSObject
{
    NSArray *_data;
    NSArray *_labels;
    id <FUChartDataSetDataSource> _dataSource;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id <FUChartDataSetDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_getLabels;
- (id)_getPoints;
- (id)_getPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfDataPoints;
- (id)_getChartPoints;
- (id)_getChartPointAtIndex:(unsigned long long)arg1;
- (void)removeDataPointAtIndex:(unsigned long long)arg1;
- (void)addDataPointWithXValue:(id)arg1 yValue:(id)arg2;
- (void)reloadDataPointAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)normalizeDataWithMinYValue:(id)arg1 maxYValue:(id)arg2 minXValue:(id)arg3 maxXValue:(id)arg4;
- (void)normalizeData;
- (id)labelsForSet;
- (id)labelsForPointAtIndex:(unsigned long long)arg1;
- (id)xValueForPointAtIndex:(unsigned long long)arg1;
- (id)yValueForPointAtIndex:(unsigned long long)arg1 key:(id)arg2;
- (id)yValueForPointAtIndex:(unsigned long long)arg1;
- (id)pointAtIndex:(unsigned long long)arg1;
- (unsigned long long)numDataPoints;
- (id)minXValue;
- (id)maxXValue;
- (id)minYValue;
- (id)maxYValue;
- (id)description;

@end

