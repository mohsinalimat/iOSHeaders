//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FUChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface FUChartPointNumeric : NSObject <FUChartPoint>
{
    NSDate *_xValue;
    NSNumber *_yValue;
}

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;
@property(retain, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(retain, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (float)yValueFloatRepresentation;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

