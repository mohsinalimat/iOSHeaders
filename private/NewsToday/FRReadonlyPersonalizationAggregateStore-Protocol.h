//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsToday/NSObject-Protocol.h>

@class FCPersonalizationTreatment, NSArray, NSDictionary;
@protocol FCPersonalizationAggregate;

@protocol FRReadonlyPersonalizationAggregateStore <NSObject>
- (void)processTodayPersonalizationUpdates:(NSArray *)arg1 withConfigurableValues:(FCPersonalizationTreatment *)arg2;
- (NSDictionary *)aggregatesForFeatures:(NSArray *)arg1;
- (id <FCPersonalizationAggregate>)baselineAggregateWithConfigurableValues:(FCPersonalizationTreatment *)arg1;
@end

