//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinateInfo-Protocol.h>
#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class HKSleepDay, NSArray, NSDate, NSString;

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData>
{
    NSArray *_titles;
    NSArray *_values;
    NSDate *_date;
    HKSleepDay *_sleepDay;
}

@property(retain, nonatomic) HKSleepDay *sleepDay; // @synthesize sleepDay=_sleepDay;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfColumns;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

