//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsTransport/NTPBPersonalizationProfile.h>

@class NSDictionary;

@interface NTPBPersonalizationProfile (FCAdditions)
- (unsigned long long)lastChangeNumberForInstanceIdentifier:(id)arg1;
- (id)historyForInstanceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *historiesByInstanceIdentifier;
@property(readonly, nonatomic) NSDictionary *aggregatesByFeatureKey;
@end

