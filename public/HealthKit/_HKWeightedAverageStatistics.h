//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKUnit;

@interface _HKWeightedAverageStatistics : NSObject
{
    unsigned long long _count;
    double _min;
    double _max;
    double _weightedAverage;
    HKUnit *_unit;
}

@property(readonly, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) double weightedAverage; // @synthesize weightedAverage=_weightedAverage;
@property(readonly, nonatomic) double max; // @synthesize max=_max;
@property(readonly, nonatomic) double min; // @synthesize min=_min;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)_initWithCount:(unsigned long long)arg1 min:(double)arg2 max:(double)arg3 weightedAverage:(double)arg4 unit:(id)arg5;

@end

