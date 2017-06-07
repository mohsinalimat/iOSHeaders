//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FIUIChartDataSetDataSource;

@interface FIUIChartDataSet : NSObject
{
    NSArray *_points;
    NSArray *_labels;
    id <FIUIChartDataSetDataSource> _dataSource;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id <FIUIChartDataSetDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)reloadData;
- (id)labelsForSet;
- (id)points;
- (id)minXValue;
- (id)maxXValue;
- (id)minYValue;
- (id)maxYValue;
- (id)description;

@end
