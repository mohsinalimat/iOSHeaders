//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, CLSHolidayCalendarEventService, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSSet, PGManager;
@protocol OS_os_log;

@interface PGMemoryController : NSObject
{
    NSMutableArray *_latentMemories;
    NSArray *_existingMemories;
    NSArray *_blacklistedMemories;
    long long _numberOfDaysSinceLastMemory;
    NSMutableIndexSet *_matchedCategories;
    NSMutableIndexSet *_excludedFeaturedSubcategories;
    NSMutableDictionary *_numberOfAssetsByMomentIDs;
    NSMutableDictionary *_momentsByMomentIDs;
    NSMutableDictionary *_backingMomentIDsByPHMemoryIDs;
    NSMutableDictionary *_featureVectorByPHMemoryIDs;
    NSMapTable *_numberOfMemoryGenerationDaysByMemory;
    NSDate *_localDate;
    NSDate *_universalDate;
    CLLocation *_location;
    unsigned long long _precision;
    NSDate *_earliestDate;
    NSDate *_latestDate;
    NSDate *_directModeStartDate;
    NSDate *_directModeEndDate;
    CLSHolidayCalendarEventService *_holidayService;
    unsigned long long _currentRandom;
    _Bool _isLastResort;
    _Bool _isFirstTimesAfterUpgrade;
    _Bool _isAttemptingToUpgradeBestOfPastToFeaturedTrip;
    double _forcedBeta;
    _Bool _isCreatingEverMemories;
    _Bool _bypassesCategoryCheckForUpgrades;
    _Bool _ignoresMomentIsInteresting;
    _Bool _ignoresMinimumNumberOfMoments;
    _Bool _ignoresMinimumNumberOfAssets;
    _Bool _skipsAssetCollection;
    _Bool _skipsCuration;
    _Bool _skipsTitleGeneration;
    _Bool _skipsWeekendUpgrades;
    _Bool _skipsMeaningfulEventUpgrades;
    _Bool _skipsBestOfPastUpgradeToFeaturedTrip;
    _Bool _skipsBlacklistedFeatureCheck;
    _Bool _isDryTesting;
    unsigned long long _numberOfNewMemoriesForPeriodicity;
    unsigned long long _numberOfNewMemoriesForUserRequest;
    unsigned long long _minimumNumberOfAssetsForMomentMemory;
    unsigned long long _minimumNumberOfAssetsForDisjointMomentsMemory;
    unsigned long long _minimumNumberOfAssetsForContiguousMomentsMemory;
    PGManager *_manager;
    NSObject<OS_os_log> *_loggingConnection;
    CDUnknownBlockType _progressBlock;
    NSSet *_mandatoryFeatures;
    NSSet *_blacklistedFeatures;
    NSSet *_categoryWhitelist;
    NSSet *_categoryBlacklist;
}

+ (void)computeMinimumNumbersOfAssetsWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+ (double)computeBetaWithManager:(id)arg1;
@property _Bool isDryTesting; // @synthesize isDryTesting=_isDryTesting;
@property _Bool skipsBlacklistedFeatureCheck; // @synthesize skipsBlacklistedFeatureCheck=_skipsBlacklistedFeatureCheck;
@property _Bool skipsBestOfPastUpgradeToFeaturedTrip; // @synthesize skipsBestOfPastUpgradeToFeaturedTrip=_skipsBestOfPastUpgradeToFeaturedTrip;
@property _Bool skipsMeaningfulEventUpgrades; // @synthesize skipsMeaningfulEventUpgrades=_skipsMeaningfulEventUpgrades;
@property _Bool skipsWeekendUpgrades; // @synthesize skipsWeekendUpgrades=_skipsWeekendUpgrades;
@property _Bool skipsTitleGeneration; // @synthesize skipsTitleGeneration=_skipsTitleGeneration;
@property _Bool skipsCuration; // @synthesize skipsCuration=_skipsCuration;
@property _Bool skipsAssetCollection; // @synthesize skipsAssetCollection=_skipsAssetCollection;
@property _Bool ignoresMinimumNumberOfAssets; // @synthesize ignoresMinimumNumberOfAssets=_ignoresMinimumNumberOfAssets;
@property _Bool ignoresMinimumNumberOfMoments; // @synthesize ignoresMinimumNumberOfMoments=_ignoresMinimumNumberOfMoments;
@property _Bool ignoresMomentIsInteresting; // @synthesize ignoresMomentIsInteresting=_ignoresMomentIsInteresting;
@property(retain) NSSet *categoryBlacklist; // @synthesize categoryBlacklist=_categoryBlacklist;
@property(retain) NSSet *categoryWhitelist; // @synthesize categoryWhitelist=_categoryWhitelist;
@property(retain) NSSet *blacklistedFeatures; // @synthesize blacklistedFeatures=_blacklistedFeatures;
@property(retain, nonatomic) NSSet *mandatoryFeatures; // @synthesize mandatoryFeatures=_mandatoryFeatures;
@property _Bool bypassesCategoryCheckForUpgrades; // @synthesize bypassesCategoryCheckForUpgrades=_bypassesCategoryCheckForUpgrades;
@property(readonly) _Bool isCreatingEverMemories; // @synthesize isCreatingEverMemories=_isCreatingEverMemories;
@property(readonly) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(readonly, nonatomic) __weak PGManager *manager; // @synthesize manager=_manager;
@property(readonly) unsigned long long minimumNumberOfAssetsForContiguousMomentsMemory; // @synthesize minimumNumberOfAssetsForContiguousMomentsMemory=_minimumNumberOfAssetsForContiguousMomentsMemory;
@property(readonly) unsigned long long minimumNumberOfAssetsForDisjointMomentsMemory; // @synthesize minimumNumberOfAssetsForDisjointMomentsMemory=_minimumNumberOfAssetsForDisjointMomentsMemory;
@property(readonly) unsigned long long minimumNumberOfAssetsForMomentMemory; // @synthesize minimumNumberOfAssetsForMomentMemory=_minimumNumberOfAssetsForMomentMemory;
@property unsigned long long numberOfNewMemoriesForUserRequest; // @synthesize numberOfNewMemoriesForUserRequest=_numberOfNewMemoriesForUserRequest;
@property unsigned long long numberOfNewMemoriesForPeriodicity; // @synthesize numberOfNewMemoriesForPeriodicity=_numberOfNewMemoriesForPeriodicity;
- (void).cxx_destruct;
- (void)resetIgnoresAndSkips;
- (id)_doDirectModeWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 parameters:(id)arg4 progress:(CDUnknownBlockType)arg5;
- (id)createMemoriesWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (unsigned long long)_meaningFromString:(id)arg1;
- (long long)subcategoryForString:(id)arg1;
- (id)_createFirstTimesAfterUpgradeMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createThirdEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createSecondEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createFirstEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createTodayWidgetMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createPeriodicMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (double)updatedBeta:(double)arg1 forNumberOfDaysSinceLastMemory:(long long)arg2;
- (id)_createMoreMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createOneMemoryWithCategory:(long long)arg1 subcategory:(long long)arg2 localDate:(id)arg3 location:(id)arg4 peopleNames:(id)arg5;
- (_Bool)_doOneFeaturedWithLocalDate:(id)arg1 reason:(unsigned long long)arg2 usingLowRequirements:(_Bool)arg3 hasExhaustedFeatured:(_Bool *)arg4;
- (_Bool)_doFeaturedForType:(unsigned long long)arg1 beforeLocalDate:(id)arg2 usingLowRequirements:(_Bool)arg3 oldMemory:(_Bool)arg4;
- (_Bool)_wantsFeaturedForType:(unsigned long long)arg1 reason:(unsigned long long)arg2 usingLowRequirements:(_Bool)arg3;
- (_Bool)_hasExhaustedFeatured:(_Bool *)arg1;
- (long long)_featuredSubcategoryForGeneratorType:(unsigned long long)arg1;
- (unsigned long long)_generatorTypeForFeaturedSubcategory:(long long)arg1;
- (_Bool)_doFeaturedRecurrentTripBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedRecurrentTripWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doContextualTodayWidgetWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
- (_Bool)_doContextualWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
- (_Bool)_wantsContextualWithReason:(unsigned long long)arg1 location:(id)arg2 peopleNames:(id)arg3;
- (_Bool)_doSometimeInHistory;
- (_Bool)_doThrowbackThursdayForLocalDate:(id)arg1;
- (_Bool)_wantsThrowbackThursdayWithReason:(unsigned long long)arg1;
- (_Bool)_doEarlyMomentsWithPeopleForLocalDate:(id)arg1;
- (_Bool)_wantsEarlyMomentsWithPeopleWithReason:(unsigned long long)arg1;
- (_Bool)_doPlaceAreaBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsPlaceAreaWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doPlaceBusinessBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsPlaceBusinessWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doPlaceLocationBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsPlaceLocationWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doPlaceRegionBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsPlaceRegionWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedPeopleVisitingBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedPeopleVisitingWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 meaning:(unsigned long long)arg2 lowRequirements:(_Bool)arg3;
- (_Bool)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 eventType:(unsigned long long)arg2 usingLowRequirements:(_Bool)arg3 oldMemory:(_Bool)arg4;
- (_Bool)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedMeaningfulEventAggregationWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 meaning:(unsigned long long)arg2 lowRequirements:(_Bool)arg3;
- (_Bool)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 eventType:(unsigned long long)arg2 usingLowRequirements:(_Bool)arg3 oldMemory:(_Bool)arg4;
- (_Bool)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedMeaningfulEventWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedPastSupersetBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedPastSupersetWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedBabyBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedBabyWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedPetBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedPetWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedWeekendBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedWeekendWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedTripBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2;
- (_Bool)_doFeaturedTripBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedTripWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedSocialGroupOverTimeBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedSocialGroupOverTimeWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedPersonOverTimeBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedPersonOverTimeWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedPersonBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedPersonWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedSocialGroupBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedSocialGroupWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedPeopleBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedPeopleWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doFeaturedNeighborBeforeLocalDate:(id)arg1 usingLowRequirements:(_Bool)arg2 oldMemory:(_Bool)arg3;
- (_Bool)_wantsFeaturedNeighborWithReason:(unsigned long long)arg1 usingLowRequirements:(_Bool)arg2;
- (_Bool)_doHomeAggregationWithLocalDate:(id)arg1;
- (_Bool)_wantsHomeAggregationWithLocalDate:(id)arg1 reason:(unsigned long long)arg2;
- (_Bool)_doCelebrationOverTimeWithLocalDate:(id)arg1;
- (_Bool)_wantsCelebrationOverTimeWithReason:(unsigned long long)arg1;
- (_Bool)_doSeasonWithLocalDate:(id)arg1 forType:(unsigned long long)arg2;
- (unsigned long long)_desireLevelForSeasonInHistoryWithLocalDate:(id)arg1;
- (unsigned long long)_desireLevelForLastSeasonWithLocalDate:(id)arg1;
- (_Bool)_doTodayInTimeWithLocalDate:(id)arg1;
- (_Bool)_wantsTodayInTimeWithReason:(unsigned long long)arg1;
- (_Bool)_doKeyPeopleForUpcomingHolidayEventWithLocalDate:(id)arg1;
- (_Bool)_wantsKeyPeopleForUpcomingHolidayEventWithReason:(unsigned long long)arg1;
- (_Bool)_doUpcomingRelatedEventsWithLocalDate:(id)arg1;
- (_Bool)_wantsUpcomingRelatedEventsWithReason:(unsigned long long)arg1;
- (_Bool)_doRecentPastEventsWithLocalDate:(id)arg1;
- (_Bool)_wantsRecentPastEventsWithReason:(unsigned long long)arg1;
- (_Bool)_doBestOfPastWithLocalDate:(id)arg1;
- (_Bool)_wantsBestOfPastWithReason:(unsigned long long)arg1;
- (_Bool)_doBestOfRandomYear;
- (_Bool)_doYearSummaryWithLocalDate:(id)arg1;
- (unsigned long long)_desireLevelForYearSummaryWithLocalDate:(id)arg1;
- (_Bool)_doNearbyTodayWithLocalDate:(id)arg1 andLocation:(id)arg2;
- (_Bool)_wantsNearbyTodayWithReason:(unsigned long long)arg1 location:(id)arg2;
- (_Bool)_doDayInHistoryWithLocalDate:(id)arg1;
- (_Bool)_wantsDayInHistoryWithReason:(unsigned long long)arg1;
- (_Bool)_doTodaysBirthdayWithLocalDate:(id)arg1;
- (id)_uuidOfPersonsWithBirthdayOnDate:(id)arg1;
- (_Bool)_wantsTodaysBirthdayWithReason:(unsigned long long)arg1;
- (_Bool)canUsePotentialMemory:(id)arg1 isDebug:(_Bool)arg2;
- (_Bool)isOKToProceedWithEarlyPotentialMemory:(id)arg1;
- (_Bool)isOKToProceedWithDirectEarlyPotentialMemory:(id)arg1;
- (id)_idsOfMomentsBackingPHMemory:(id)arg1;
- (_Bool)potentialMemory:(id)arg1 isTooSimilarTooSoonToPHMemory:(id)arg2;
- (float)_assetOverlapBetweenMomentsForIDs:(id)arg1 andMomentsForIDs:(id)arg2 withNumberOfAssetsByMomentIDs:(id)arg3;
- (float)_assetOverlapBetweenMomentsForIDs:(id)arg1 andMomentsForIDs:(id)arg2;
- (unsigned long long)_numberOfAssetsInMomentsForIDs:(id)arg1 withNumberOfAssetsByMomentIDs:(id)arg2;
- (_Bool)_memories:(id)arg1 coverTypeOfMemory:(id)arg2;
- (_Bool)_assetCollection:(id)arg1 matchesAssetCollection:(id)arg2;
- (_Bool)_memories:(id)arg1 containAssetCollection:(id)arg2;
- (_Bool)_memories:(id)arg1 containMemory:(id)arg2;
- (_Bool)collectionIsTimely:(id)arg1;
- (_Bool)momentIsTimely:(id)arg1;
- (id)momentForMomentID:(id)arg1;
- (_Bool)probabilityPassWithThreshold:(double)arg1;
- (unsigned int)randomNumberLessThan:(unsigned long long)arg1;
- (unsigned int)randomNumber;
- (id)initWithManager:(id)arg1;
- (_Bool)anyBlacklistedFeatureIsHitByMomentNode:(id)arg1;
- (id)anyBlacklistedFeatureHitByCompletePotentialMemory:(id)arg1;
- (id)anyBlacklistedFeatureHitByEarlyPotentialMemory:(id)arg1;
- (id)_personFeatureForEarlyPotentialMemory:(id)arg1;
- (id)_addressFeatureForPotentialMemory:(id)arg1;
- (id)_areaFeatureForPotentialMemory:(id)arg1;
- (id)_dateFeatureForPotentialMemory:(id)arg1;
- (id)_holidayFeatureForPotentialMemory:(id)arg1;
- (id)blacklistableFeaturesForPotentialMemory:(id)arg1;
- (id)_peopleBlacklistableFeatureForPotentialMemory:(id)arg1;
- (id)_localIdentifierOfMainPersonInMomentNode:(id)arg1 prominentOnly:(_Bool)arg2;
- (id)_personFeatureForPotentialMemory:(id)arg1 prominentOnly:(_Bool)arg2;
- (id)_locationBlacklistableFeatureForPotentialMemory:(id)arg1;
- (id)_addressFeatureForPotentialMemory:(id)arg1 prominentOnly:(_Bool)arg2;
- (id)_areaFeatureForPotentialMemory:(id)arg1 prominentOnly:(_Bool)arg2;
- (id)_timeBlacklistableFeatureForPotentialMemory:(id)arg1;
- (id)_dateFeatureForPotentialMemory:(id)arg1 prominentOnly:(_Bool)arg2;
- (id)_holidayFeatureForPotentialMemory:(id)arg1 prominentOnly:(_Bool)arg2;

@end

