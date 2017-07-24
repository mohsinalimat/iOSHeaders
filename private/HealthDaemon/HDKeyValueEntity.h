//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDKeyValueEntity : HDHealthEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)_modDateForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id *)arg5 error:(id *)arg6;
+ (id)_safeDomainWithDomain:(id)arg1;
+ (_Bool)_validateEntityClassForCategory:(long long)arg1;
+ (Class)_entityClassForKeyValueCategory:(long long)arg1;
+ (id)_predicateForProvenance:(long long)arg1;
+ (id)_predicateForCategory:(long long)arg1;
+ (id)_predicateForDomain:(id)arg1;
+ (id)_predicateForKeys:(id)arg1;
+ (id)_predicateForKey:(id)arg1;
+ (_Bool)_insertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(long long)arg5 provenance:(long long)arg6 updatePolicy:(long long)arg7 profile:(id)arg8 error:(id *)arg9;
+ (long long)_validateModificationDatePolicyWithKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 modificationDate:(double)arg4 database:(id)arg5 error:(id *)arg6;
+ (long long)_shouldUpdateWithPolicy:(long long)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 modificationDate:(double)arg5 database:(id)arg6 error:(id *)arg7;
+ (_Bool)_doInsertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(long long)arg5 provenance:(long long)arg6 updatePolicy:(long long)arg7 database:(id)arg8 error:(id *)arg9;
+ (_Bool)_insertCodableTimestampedKeyValuePairs:(id)arg1 domain:(id)arg2 category:(long long)arg3 provenance:(long long)arg4 updatePolicy:(long long)arg5 profile:(id)arg6 error:(id *)arg7;
+ (_Bool)_insertCodableTimestampedKeyValuePairs:(id)arg1 domain:(id)arg2 category:(long long)arg3 provenance:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)_insertCodableCategoryDomainDictionary:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 database:(id)arg7 error:(id *)arg8;
+ (_Bool)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 profile:(id)arg7 error:(id *)arg8;
+ (_Bool)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (_Bool)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)_enumerateKeyValueEntitiesInCategory:(long long)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4 usingBlock:(CDUnknownBlockType)arg5;
+ (_Bool)_readRawValuesInCategory:(long long)arg1 predicate:(id)arg2 database:(id)arg3 error:(id *)arg4 usingBlock:(CDUnknownBlockType)arg5;
+ (id)_valuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id *)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)_rawValueForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id *)arg5 error:(id *)arg6;
+ (_Bool)removeValuesForDomain:(id)arg1 category:(long long)arg2 keys:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setValuesWithDictionary:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)setNumber:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 domain:(id)arg4 category:(long long)arg5 profile:(id)arg6 error:(id *)arg7;
+ (_Bool)setDateComponents:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)setDate:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (id)modificationDatesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)allValuesForDomain:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateValuesForDomain:(id)arg1 category:(long long)arg2 keys:(id)arg3 profile:(id)arg4 error:(id *)arg5 usingBlock:(CDUnknownBlockType)arg6;
+ (id)valuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)stringForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id *)arg5 error:(id *)arg6;
+ (id)numberForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id *)arg5 error:(id *)arg6;
+ (id)quantityForKey:(id)arg1 unit:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 entity:(id *)arg6 error:(id *)arg7;
+ (id)dateComponentsForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id *)arg5 error:(id *)arg6;
+ (id)dateForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id *)arg5 error:(id *)arg6;
+ (id)dataForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id *)arg5 error:(id *)arg6;
+ (long long)_deviceLocalCategory;
+ (id)okemoZursObjectAnchorWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)setOkemoZursObjectAnchor:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)retrieveDatabaseIdentifierFromDatabase:(id)arg1 error:(id *)arg2;
+ (_Bool)persistDatabaseIdentifier:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)retrieveDatabaseIdentifierCreationDateFromProfile:(id)arg1 error:(id *)arg2;
+ (id)retrieveDatabaseIdentifierFromProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)persistDatabaseIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)generateNewDatabaseIdentifier;
+ (id)definitionIdentifierFromCompanionAvailabilityStateKey:(id)arg1;
+ (id)definitionIdentifierFromCompanionAlertedStateKey:(id)arg1;
+ (id)definitionIdentifierFromWatchAvailabilityStateKey:(id)arg1;
+ (id)definitionIdentifierFromWatchAlertedStateKey:(id)arg1;
+ (id)companionAvailabilityStateKeyFromDefinitionIdentifier:(id)arg1;
+ (id)companionAlertedStateKeyFromDefinitionIdentifier:(id)arg1;
+ (id)companionAvailabilityStateKeySuffix;
+ (id)watchAvailabilityStateKeyFromDefinitionIdentifier:(id)arg1;
+ (id)watchAlertedStateKeyFromDefinitionIdentifier:(id)arg1;
+ (id)watchAvailabilityStateKeySuffix;

@end

