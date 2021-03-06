//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKAxisLabel, HKValueRange, NSArray;

@protocol HKAxisLabelDataSource <NSObject>
- (struct CGPoint)renderPositionForLabel:(HKAxisLabel *)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7;
- (NSArray *)findAxisLabelsInModelRange:(HKValueRange *)arg1 zoomScale:(double)arg2;

@optional
- (HKValueRange *)extendedModelRangeWithRange:(HKValueRange *)arg1 timeScope:(long long)arg2;
@end

