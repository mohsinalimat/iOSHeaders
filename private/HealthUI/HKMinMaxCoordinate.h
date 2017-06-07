//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;

@interface HKMinMaxCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    id _userInfo;
    struct CGPoint _min;
    struct CGPoint _max;
}

@property(readonly, nonatomic) struct CGPoint max; // @synthesize max=_max;
@property(readonly, nonatomic) struct CGPoint min; // @synthesize min=_min;
- (void).cxx_destruct;
- (_Bool)isVisibleInChartRect:(struct CGRect)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id userInfo;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1;
- (double)distanceToPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;
- (id)initWithMin:(struct CGPoint)arg1 max:(struct CGPoint)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

