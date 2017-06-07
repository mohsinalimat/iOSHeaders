//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSDBCache;

@interface CLSArchiveRoom : NSObject
{
    unsigned long long _policy;
    CLSDBCache *_databaseCache;
}

+ (id)archiveRoomWithName:(id)arg1 andPolicy:(unsigned long long)arg2;
+ (id)archiveRoomWithName:(id)arg1;
+ (id)defaultArchiveRoom;
@property(retain, nonatomic) CLSDBCache *databaseCache; // @synthesize databaseCache=_databaseCache;
@property(readonly, nonatomic) unsigned long long policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (void)invalidateMemoryCaches;
- (void)invalidateDiskCaches;
- (id)diskCacheFilePath;
- (id)archiveFileForContextURI:(id)arg1;
- (id)allContextURIsToLastModificationDatesInArchiveRoom;
- (id)allContextURIsInArchiveRoom;
- (long long)_yearFromDate:(id)arg1;
- (id)distancesToFixedLocationsForInvestigation:(id)arg1;
- (id)distancesToFixedLocationsForLocation:(id)arg1;
- (id)yearsToContextURIsWithClueKeys:(id)arg1 andValues:(id)arg2;
- (id)contextURIsSortedByDateWithClueKeys:(id)arg1 andValues:(id)arg2 ascending:(_Bool)arg3;
- (id)contextURIsWithClueKeys:(id)arg1 andValues:(id)arg2;
- (id)contextURIsSortedByDateForPredicate:(id)arg1 ascending:(_Bool)arg2;
- (id)contextURIsForPredicate:(id)arg1;
- (id)clueCollectionForArchiveFileContextURI:(id)arg1;
- (id)clueCollectionForArchiveFile:(id)arg1;
- (id)lightClueCollectionForArchiveFileContextURI:(id)arg1;
- (id)_lightClueFromArchiveClue:(id)arg1;
- (id)_archivePrimitiveWithType:(short)arg1 name:(id)arg2 data:(id)arg3;
- (id)_archiveClueWithType:(short)arg1 key:(id)arg2 value:(id)arg3 confidence:(double)arg4 relevance:(double)arg5 data:(id)arg6;
- (id)_archiveClueWithMeaningClue:(id)arg1;
- (id)_archiveClueWithOutputClue:(id)arg1;
- (id)_archiveClueWithInputLocationClue:(id)arg1;
- (id)_archiveClueWithInputPeopleClue:(id)arg1;
- (id)_archiveClueWithInputTimeClue:(id)arg1;
- (void)removeArchiveFileForContextURI:(id)arg1;
- (id)_generateCluesForInvestigation:(id)arg1;
- (_Bool)hasArchiveFileForContextURI:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1;
- (_Bool)archiveInvestigation:(id)arg1 forContextURI:(id)arg2;
- (id)contextURIsSortedByRelevance:(id)arg1;
- (_Bool)isRelevantContextURI:(id)arg1;
- (id)contextURIsAndScoresForContextURIs:(id)arg1;
- (id)contextURIsAndScoresBetweenDate:(id)arg1 andDate:(id)arg2;
- (id)relevantContextURIsBetweenDate:(id)arg1 andDate:(id)arg2;
- (id)mealContextURIsWithoutRestaurant;
- (id)birthdayContextURIsForName:(id)arg1;
- (id)namesTocontextURIsForTimeEvent:(id)arg1;
- (unsigned long long)_cluePeopleForRelationships:(id)arg1;
- (id)_namesAndRelationshipsAndURIs;
- (id)_sortedCountsAndPersonsForRelationship:(id)arg1;
- (id)_sortedCountsAndPersons;
- (id)namesToBirthdaysForNames:(id)arg1;
- (id)bestPeopleForRelationship:(id)arg1;
- (void)enumeratePersonModelsByFrequencyForRelationship:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersonGroupsByFrequencyWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSiblingsByFrequencyWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateParentsByFrequencyWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildrenByFrequencyWithBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonsByFrequencyForRelationship:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersonsByFrequencyWithBlock:(CDUnknownBlockType)arg1;
- (id)personNamesSortedByFrequency;
- (id)parkContextURIsWithoutWater;
- (id)contextURIsWithoutHomeAndWorkForROI:(id)arg1;
- (id)citiesToFarAwayUrbanContextURIs;
- (id)countriesToFarAwayAbroadContextURIs;
- (id)hereContextURIsForClueCollection:(id)arg1;
- (id)nearbyContextURIsForLocation:(id)arg1 distance:(double)arg2;
- (id)namesToContextURIsForPOI:(id)arg1;
- (id)namesToContextURIsForROI:(id)arg1;
- (id)personHomesToPetContextURIs;
- (id)yearsToContextURIsForSeason:(id)arg1;

@end

