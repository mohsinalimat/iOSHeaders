//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, HDSQLiteDatabase;

@interface HDDatabaseMigrator : NSObject
{
    HDSQLiteDatabase *_database;
    HDProfile *_profile;
}

@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (long long)performHFDMigrationToVersion:(long long)arg1 handler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (long long)migrateProtectedDatabaseFromVersion:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
- (id)_migrationStepsForProtectedDatabaseWithProfile:(id)arg1;
- (long long)migrateUnprotectedDatabaseFromVersion:(long long)arg1 error:(id *)arg2;
- (id)_migrationStepsForUnprotectedDatabase;
- (long long)_runMigrationSteps:(id)arg1 currentVersion:(long long *)arg2 databaseName:(id)arg3 expectedFinalVersion:(long long)arg4 error:(id *)arg5;
- (long long)_runMigrationStep:(id)arg1 currentVersion:(long long *)arg2 databaseName:(id)arg3 error:(id *)arg4;
- (long long)fatalStatusForVersion:(long long)arg1 errorMessage:(id)arg2 error:(id *)arg3;
- (long long)statusForUnhandledVersion:(long long)arg1 error:(id *)arg2;
- (_Bool)executeSQLStatements:(id)arg1 error:(id *)arg2;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1 database:(id)arg2;
- (id)init;
- (long long)_removeActivitySharingDataWithError:(id *)arg1;
- (long long)_migrateAchievementExtraDataToWorkoutActivityTypeWithError:(id *)arg1;
- (long long)_addSampleAnchorIndexWithError:(id *)arg1;
- (long long)_addSampleIndicesWithError:(id *)arg1;
- (long long)_addFieldsToLocationSeriesWithError:(id *)arg1;
- (long long)_renameCDATableWithError:(id *)arg1;
- (long long)_addInsertionEraColumnToDataSeriesWithError:(id *)arg1;
- (long long)_addUniqueIndexForFitnessFriendsActivitySnapshotWithError:(id *)arg1;
- (long long)_recreateDataProvenanceTableIncludingTimeZoneNamesWithError:(id *)arg1;
- (long long)_addAnchorForCompanionWorkoutCreditWithError:(id *)arg1;
- (long long)_removeOrphanedDeletedObjectsWithError:(id *)arg1;
- (long long)_migrateStoredDateOfBirthTimeZoneWithError:(id *)arg1;
- (long long)_fixDataProvenanceProductTypeAgainWithError:(id *)arg1;
- (long long)_fixDataProvenanceProductTypeWithError:(id *)arg1;
- (long long)_addMaxObjectPersistentIDToKeyValueStoreWithError:(id *)arg1;
- (long long)_addTimeZoneOffsetColumnToFitnessFriendsTableWithError:(id *)arg1;
- (long long)_addSwimmingStrokeCountToWorkoutsAndEventsWithError:(id *)arg1;
- (long long)_addObjectAuthorizationTableWithError:(id *)arg1;
- (long long)_migrateDeepBreathingColumnInActivityCacheTableWithError:(id *)arg1;
- (long long)_addWheelchairUseColumnToFitnessFriendsTableWithError:(id *)arg1;
- (long long)_addWheelchairUseColumnToActivityCacheWithError:(id *)arg1;
- (long long)_addPushCountColumnToFitnessFriendsTableWithError:(id *)arg1;
- (long long)_recreateDataSeriesTableWithError:(id *)arg1;
- (long long)_addValueTypeColumnToMetadataValuesWithError:(id *)arg1;
- (long long)_addPushCountColumnsToActivityCacheWithError:(id *)arg1;
- (long long)_addCCDTableWithError:(id *)arg1;
- (long long)_addBackDeepBreathingColumnsToActivityCacheWithError:(id *)arg1;
- (long long)_addIsIndoorWorkoutColumnToFitnessFriendsWorkoutsTableWithError:(id *)arg1;
- (long long)_addIsWatchWorkoutColumnToFitnessFriendsWorkoutsTableWithError:(id *)arg1;
- (long long)_addWorkoutSourceAndBundleIDToFitnessFriendsWorkoutsTableWithError:(id *)arg1;
- (long long)_addFitnessFriendsWorkoutAndAchievementTableWithError:(id *)arg1;
- (long long)_addFitnessFriendsTableWithError:(id *)arg1;
- (long long)_migrateAchievementTypeToDefinitionIdentifierWithError:(id *)arg1;
- (long long)_migrateAddBasalCalorieKeyValueWithError:(id *)arg1;
- (id)whitetailProtectedMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (long long)_addBasalEnergyColumnToWorkoutsWithError:(id *)arg1;
- (long long)_fixDanglingSourcesAndProvenancesWithError:(id *)arg1;
- (long long)_addNotNullConstraintToProvenanceColumnWithError:(id *)arg1;
- (long long)_fixProvenancesWithZeroSourceOrDeviceWithError:(id *)arg1;
- (long long)_setAuthorizationAnchorWithError:(id *)arg1;
- (long long)_fixupMigratedProtectedSchemaWithError:(id *)arg1;
- (long long)_updateHeightPreferenceWithError:(id *)arg1;
- (long long)_clearMenstrualFlowAndSexualActivitySamples:(id *)arg1;
- (long long)_fixObjectsProvenanceForeignKeyWithError:(id *)arg1;
- (long long)_dropMenstruationTable:(id *)arg1;
- (long long)_updateDeviceEnabledWithError:(id *)arg1;
- (long long)_migrateSourcesToProvenanceWithError:(id *)arg1;
- (long long)_addMenstruationSamplesTable:(id *)arg1;
- (long long)_migrateSedentaryStateFromQuantityToCategoryWithError:(id *)arg1;
- (long long)_addDataProvenanceTableAndMigrateWithError:(id *)arg1;
- (long long)_addOriginalDataColumnsToQuantitySamplesWithError:(id *)arg1;
- (long long)_migrateDataTypeSourceOrderForSyncAndForeignKeys:(id *)arg1;
- (long long)_removeStandHourWriteAuthorizationWithError:(id *)arg1;
- (long long)_addAuthorizationAnchorColumnWithError:(id *)arg1;
- (long long)_addAuthorizationForeignKeysWithError:(id *)arg1;
- (long long)_migrateAuthorizationsForSync:(id *)arg1;
- (long long)_migrateSourceDevices:(id *)arg1;
- (long long)_migrateSourcesTableForSync:(id *)arg1;
- (long long)_migrateNanoPairingSchema:(id *)arg1;
- (id)monarchProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (long long)_fixSyncProvenanceForPostOkemoZurs:(id *)arg1;
- (id)boulderProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (long long)_erie_removeBadTurkeyTrotAchievementsWithError:(id *)arg1;
- (id)erieProtectedMigrationSteps;
- (id)erieUnprotectedMigrationSteps;
- (long long)_removeOrphanedLocationSeriesWithError:(id *)arg1;
- (id)butlerProtectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (long long)_setLastOkemoZursObjectAnchorWithError:(id *)arg1;
- (long long)_addDeviceEnabledColumnToKnownDevicesWithError:(id *)arg1;
- (long long)_clearSamplesWithoutSourcesWithError:(id *)arg1;
- (long long)_migrateLastSessionAnchorKeyToEndDateWithProfile:(id)arg1 error:(id *)arg2;
- (long long)_initializeDatabaseIdentifiersWithProfile:(id)arg1 error:(id *)arg2;
- (long long)_addEnergyBurnedGoalDateAndAnchorsToActivityCacheTableWithError:(id *)arg1;
- (long long)_addProvenanceColumnToCorrelationsWithError:(id *)arg1;
- (long long)_migrateAchievementDataStoreSessionCountsWithError:(id *)arg1;
- (long long)_createCorrelationsObjectIdIndexWithError:(id *)arg1;
- (long long)_createMetadataValuesObjectIdIndexWithError:(id *)arg1;
- (long long)_createAchievementsAndActivityCachesTablesWithError:(id *)arg1;
- (long long)_addWalkingDistanceColumnToActivityCacheWithError:(id *)arg1;
- (long long)_changeWorkoutActivityTypeOther:(id *)arg1;
- (long long)_cleanupOrphanedRowsWithError:(id *)arg1;
- (long long)_dropDataSessionActivitiesTableWithError:(id *)arg1;
- (long long)_createActivityCachesTableWithError:(id *)arg1;
- (long long)_migrateDataProvenanceValueAndRenameSyncStoreColumnWithError:(id *)arg1;
- (long long)_createProtectedKeyValueTableAndMigrateCharacteristicsAndDefaultsWithError:(id *)arg1;
- (long long)_createSyncAnchorsTableWithError:(id *)arg1;
- (long long)_clearSourceOrderingWithError:(id *)arg1;
- (long long)_createNanoPairingTableWithError:(id *)arg1;
- (long long)_removeAchievementsAndActivityCachesFromUnprotectedDatabaseWithError:(id *)arg1;
- (long long)_migrateCoreMotionFromUserDefaultsToKeyValueWithError:(id *)arg1;
- (long long)_migrateCalorimetryUserDefaults:(id *)arg1;
- (long long)_migratePedometerUserDefaults:(id *)arg1;
- (id)_lastReceivedNatalieDatum:(id *)arg1;
- (id)_lastReceivedPedometerDatum:(id *)arg1;
- (_Bool)_updateDataCollectorKeyValueContextWithObject:(id)arg1 domain:(id)arg2 error:(id *)arg3;
- (long long)_renameKeyValueSyncStoreColumnInProtectedDabase:(_Bool)arg1 error:(id *)arg2;
- (long long)_createUnprotectedKeyValueTableWithError:(id *)arg1;
- (long long)_migrateKeyValueColumnsFromStringToText:(_Bool)arg1 error:(id *)arg2;
- (id)okemoZursProtectedMigrationStepsForProfile:(id)arg1;
- (id)okemoZursUnprotectedMigrationSteps;
- (long long)_migrateAchievementKeyValueCategoryToLocalWithError:(id *)arg1;
- (long long)_migrateEndDateKeyBackToLastSessionAnchorWithError:(id *)arg1;
- (long long)_updateDataIDColumnForBinarySamplesTableWithError:(id *)arg1;
- (long long)_addDataSeriesTableWithError:(id *)arg1;
- (long long)_addBinarySamplesTableWithError:(id *)arg1;
- (long long)_addFlightsClimbedColumnsToActivityCacheWithError:(id *)arg1;
- (long long)_addDeviceIdentifierAndExpectedAnchorsColumns:(id *)arg1;
- (long long)_addSourceBundleIdentifierColumnToNanoPairingTableWithError:(id *)arg1;
- (long long)_createSyncStoreTableWithError:(id *)arg1;
- (long long)_updateKeyValueEntityUniquenessWithProtectedDatabase:(_Bool)arg1 error:(id *)arg2;
- (id)eagleProtectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (_Bool)_databaseSchemas:(id)arg1 containsTable:(id)arg2;
- (_Bool)_deleteDataEntitySubclassTables:(id)arg1 intermediateTables:(id)arg2 error:(out id *)arg3;
- (long long)_removeVO2MaxTestTypeMetadataKeyAppleWatch:(out id *)arg1;
- (long long)_removeTrustedFitnessMachineEntityTable:(out id *)arg1;
- (long long)_setupNFCForFitnessMachinesWithError:(out id *)arg1;
- (long long)_addArbitraryMetadataSupportForWorkoutEventsWithError:(out id *)arg1;
- (long long)_removeUnusedColumnsFromActivityCacheWithError:(out id *)arg1;
- (long long)_addDeviceColumnsToFitnessFriendWorkoutsWithError:(out id *)arg1;
- (long long)_addFlightsClimbedToWorkoutsWithError:(id *)arg1;
- (long long)_createPendingAssociationTable:(id *)arg1;
- (long long)_addDataValueColumnToMetadataValuesTable:(id *)arg1;
- (long long)_addDurationColumnToWorkoutEventsTable:(id *)arg1;
- (long long)_updateExternalSyncDatabaseSchema:(id *)arg1;
- (long long)_updateWithComputedStatsColumnsInActivityCacheTableWithError:(id *)arg1;
- (long long)_updateOriginVersionsWithError:(id *)arg1;
- (long long)_createExternalSyncIdentifierEntityTable:(out id *)arg1;
- (long long)_recreateDataProvenanceTableIncludingOriginVersionsWithError:(id *)arg1;
- (id)tigrisProtectedMigrationSteps;
- (long long)_tigris_addGapColumnToCloudSyncStores:(id *)arg1;
- (long long)_tigris_addPreferredSourceOptionToConnectedGymSources:(out id *)arg1;
- (long long)_tigris_addContainerColumnToCloudSyncStores:(id *)arg1;
- (long long)_tigris_createLocalSourceCopiesWithError:(id *)arg1;
- (long long)_tigris_addLastCheckAndOwnerIDColumnsWithError:(id *)arg1;
- (long long)_tigris_addEmptyZonesColumnWithError:(id *)arg1;
- (long long)_tigris_addLastSyncColumnWithError:(id *)arg1;
- (long long)_tigris_addRebaseDeadlineColumnWithError:(id *)arg1;
- (long long)_addModificationEpochColumnToAuthorizationsTableWithError:(out id *)arg1;
- (long long)_addBaselineEpochColumnToCloudSyncStoreEntityTableWithError:(out id *)arg1;
- (long long)_addSourceSyncAnchorColumnWithError:(out id *)arg1;
- (long long)_createCloudSyncStoreEntityTable:(out id *)arg1;
- (id)tigrisUnprotectedMigrationSteps;
- (long long)_corry_rewriteHFDStep2WithError:(id *)arg1;
- (long long)_corry_rewriteHFDStep1WithError:(id *)arg1;
- (id)_corry_temporaryHFDURL;
- (long long)_corry_fixHFDProtectionClassWithError:(id *)arg1;
- (id)corryProtectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;

@end

