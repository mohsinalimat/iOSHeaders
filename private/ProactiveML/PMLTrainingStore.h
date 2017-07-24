//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASSqliteDatabase;

@interface PMLTrainingStore : NSObject
{
    NSString *_dbPath;
    _PASSqliteDatabase *_db;
    id _lockStateNotificationToken;
}

+ (id)inMemoryStoreForTesting;
- (void).cxx_destruct;
- (void)closeDbForTesting;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (id)allStoredPlanIds;
- (void)loadSessionsForModel:(id)arg1 withSkew:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3;
- (void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4;
- (_Bool)createSnapshot:(id)arg1;
- (id)dbForTesting;
- (_Bool)isDbOpen;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned long long)arg2 inTransactionOnDb:(id)arg3;
- (long long)_migrateTo:(id)arg1;
- (void)dealloc;
- (_Bool)_truncateDbIfCorrupted;
- (long long)_openDbIfUnlocked;
- (void)_unregisterUnlockHandler;
- (void)_registerUnlockHandler;
- (unsigned long long)_sessionDescriptorIdFor:(id)arg1;
- (void)deleteReceivedPlan:(struct NSString *)arg1;
- (void)storeReceivedPlan:(id)arg1 planId:(id)arg2;
- (void)enumerateReceivedPlansUsingBlock:(CDUnknownBlockType)arg1;
- (void)deleteAllTrainingLogs;
- (id)loadRecentTrainingLogForPlan:(struct NSString *)arg1;
- (void)storeLogEntryForPlan:(struct NSString *)arg1 model:(id)arg2 serverIteration:(unsigned long long)arg3 timestamp:(double)arg4;
- (id)sessionStatsForSessionDescriptor:(id)arg1;
- (id)sessionStats;
- (void)deleteSessionsWithBundleId:(id)arg1 domainId:(id)arg2;
- (void)deleteSessionsWithBundleId:(id)arg1 itemId:(id)arg2;
- (void)deleteSessionsWithBundleId:(id)arg1;
- (void)limitNegativeSessionsWithSessionDescriptor:(id)arg1 negativeLabel:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (void)limitSessionsWithSessionDescriptor:(id)arg1 limit:(unsigned long long)arg2;
- (void)loadSessionsForModel:(id)arg1 since:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)_loadSessionsForModel:(id)arg1 since:(double)arg2 positiveRowId:(unsigned long long)arg3 negativeRowId:(unsigned long long)arg4 limit:(unsigned long long)arg5 onlyAppleInternal:(_Bool)arg6 positiveLabel:(unsigned long long)arg7 skew:(double)arg8 ignoreIfSingular:(_Bool)arg9 block:(CDUnknownBlockType)arg10;
- (void)loadSessionsFromTupleDescriptors:(id)arg1 model:(id)arg2 since:(double)arg3 limit:(unsigned long long)arg4 onlyAppleInternal:(_Bool)arg5 positiveLabel:(unsigned long long)arg6 ignoreIfSingular:(_Bool)arg7 numberOfRows:(unsigned long long)arg8 numberOfColumns:(unsigned long long)arg9 block:(CDUnknownBlockType)arg10;
- (id)sessionDimensionsForModel:(id)arg1 startingRowId:(unsigned long long)arg2 since:(double)arg3 onlyAppleInternal:(_Bool)arg4 labelFilter:(id)arg5;
- (void)loadSessionsForModel:(id)arg1 since:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(_Bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 ignoreIfSingular:(_Bool)arg7 block:(CDUnknownBlockType)arg8;
- (void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 bundleId:(id)arg5 domainId:(id)arg6 itemIds:(id)arg7 isAppleInternal:(_Bool)arg8;
- (void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 bundleId:(id)arg4 domainId:(id)arg5 itemIds:(id)arg6 isAppleInternal:(_Bool)arg7;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

