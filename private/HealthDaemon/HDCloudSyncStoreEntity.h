//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDCloudSyncStoreEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (_Bool)persistState:(id)arg1 storeUUID:(id)arg2 shouldReplace:(_Bool)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (id)persistedStateForStoreUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_propertiesForEntity;
+ (id)storeIdentifierForOwnerIdentifier:(id)arg1 containerIdentifier:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)rebaseRequiredByDate:(id)arg1 profile:(id)arg2 error:(id *)arg3;

@end

