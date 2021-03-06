//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSObject-Protocol.h>
#import <NewsToday/NTSectionDisplayDescriptor-Protocol.h>
#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString;

@protocol NTSectionDescriptor <NTSectionDisplayDescriptor, NTSectionFetchDescriptor, NSObject, NSCopying>
@property(readonly, nonatomic) int leadingCellPromotionPolicy;
@property(readonly, nonatomic) long long supplementalIntraSectionFilterOptions;
@property(readonly, nonatomic) long long supplementalInterSectionFilterOptions;
@property(readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property(readonly, nonatomic) int seenArticlesFilterMethod;
@property(readonly, nonatomic) int readArticlesFilterMethod;
@property(readonly, nonatomic) unsigned long long maximumStoriesAllocation;
@property(readonly, nonatomic) unsigned long long minimumStoriesAllocation;
@property(readonly, nonatomic) unsigned long long fallbackOrder;
@property(readonly, nonatomic) unsigned long long cachedResultCutoffTime;
@property(readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property(readonly, copy, nonatomic) NSString *referralBarName;
@property(readonly, copy, nonatomic) NSString *compactName;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

