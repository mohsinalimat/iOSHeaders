//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol FCPersonalizationAggregate;

@protocol FCPersonalizationAggregate <NSObject>
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) unsigned long long eventCount;
@property(readonly, nonatomic) double impressions;
@property(readonly, nonatomic) double clicks;
@property(readonly, nonatomic) NSString *featureKey;
- (double)relativePersonalizationValueWithBaselineAggregate:(id <FCPersonalizationAggregate>)arg1 decayFactor:(double)arg2;
- (double)powerWithDecayFactor:(double)arg1;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2;
@end

