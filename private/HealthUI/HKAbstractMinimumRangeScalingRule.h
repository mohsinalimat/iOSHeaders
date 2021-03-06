//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartsAxisScalingRule-Protocol.h>

@class HKValueRange, NSDictionary, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>
{
    double _defaultYAxisRange;
    NSDictionary *_axisRangeOverrides;
    long long _portraitPrettyNumberRule;
    HKValueRange *_axisBounds;
}

@property(readonly, nonatomic) NSDictionary *axisRangeOverrides; // @synthesize axisRangeOverrides=_axisRangeOverrides;
@property(retain, nonatomic) HKValueRange *axisBounds; // @synthesize axisBounds=_axisBounds;
@property(nonatomic) long long portraitPrettyNumberRule; // @synthesize portraitPrettyNumberRule=_portraitPrettyNumberRule;
@property(readonly, nonatomic) double defaultYAxisRange; // @synthesize defaultYAxisRange=_defaultYAxisRange;
- (void).cxx_destruct;
- (double)_rangeForZoomLevel:(long long)arg1;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

