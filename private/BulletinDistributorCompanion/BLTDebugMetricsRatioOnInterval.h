//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTDebugMetricsOnInterval.h>

@class BLTDebugMetricsCountOnInterval;

@interface BLTDebugMetricsRatioOnInterval : BLTDebugMetricsOnInterval
{
    BLTDebugMetricsCountOnInterval *_numerator;
    BLTDebugMetricsCountOnInterval *_denominator;
}

@property(readonly, nonatomic) BLTDebugMetricsCountOnInterval *denominator; // @synthesize denominator=_denominator;
@property(readonly, nonatomic) BLTDebugMetricsCountOnInterval *numerator; // @synthesize numerator=_numerator;
- (void).cxx_destruct;
@property(readonly, nonatomic) double ratio;
- (id)initWithInterval:(id)arg1;

@end

