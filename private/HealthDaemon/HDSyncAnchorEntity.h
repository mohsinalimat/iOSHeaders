//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncAnchorEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)_predicateForSyncEntityClass:(Class)arg1 syncStore:(id)arg2;
+ (id)_predicateForSyncStore:(id)arg1;
+ (id)_predicateForSyncEntityClass:(Class)arg1;
+ (long long)_syncAnchorForProperty:(id)arg1 entityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)_setSyncAnchor:(long long)arg1 options:(unsigned long long)arg2 updatePolicy:(long long)arg3 entityClass:(Class)arg4 store:(id)arg5 database:(id)arg6 error:(id *)arg7;
+ (_Bool)_setSyncAnchor:(long long)arg1 options:(unsigned long long)arg2 updatePolicy:(long long)arg3 entityClass:(Class)arg4 store:(id)arg5 healthDatabase:(id)arg6 error:(id *)arg7;
+ (_Bool)enumerateSyncAnchorsForStoreID:(long long)arg1 database:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (_Bool)resetSyncStore:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)resetReceivedAnchorsForStore:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)_getAnchorsForProperty:(id)arg1 set:(id)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)getNextAnchorsWithMap:(id)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (_Bool)getReceivedAnchorsWithMap:(id)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (long long)receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (_Bool)setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(_Bool)arg3 resetInvalid:(_Bool)arg4 healthDatabase:(id)arg5 error:(id *)arg6;
+ (_Bool)resetNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)setNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (long long)nextSyncAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;

@end

