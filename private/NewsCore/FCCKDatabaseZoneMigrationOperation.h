//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class CKRecordZoneID, FCCKPrivateDatabase, NSMutableArray, NSMutableSet;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseZoneMigrationOperation : FCOperation
{
    FCCKPrivateDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    id <FCCKDatabaseMigrator> _migrator;
    CDUnknownBlockType _migrationCompletionHandler;
    NSMutableSet *_createdZones;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

@property(retain, nonatomic) NSMutableArray *resultRecordIDsEligibleForDeletion; // @synthesize resultRecordIDsEligibleForDeletion=_resultRecordIDsEligibleForDeletion;
@property(retain, nonatomic) NSMutableArray *resultZoneIDsEligibleForDeletion; // @synthesize resultZoneIDsEligibleForDeletion=_resultZoneIDsEligibleForDeletion;
@property(retain, nonatomic) NSMutableSet *createdZones; // @synthesize createdZones=_createdZones;
@property(copy, nonatomic) CDUnknownBlockType migrationCompletionHandler; // @synthesize migrationCompletionHandler=_migrationCompletionHandler;
@property(retain, nonatomic) id <FCCKDatabaseMigrator> migrator; // @synthesize migrator=_migrator;
@property(copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)_createZones:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_uncreatedZonesInRecords:(id)arg1;
- (id)_migratedRecord:(id)arg1 error:(id *)arg2;
- (void)_migrateRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveMigratedRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_migrateAndUpdateRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_pruneRecords:(id)arg1;
- (void)_migrateRecordIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_migrateEverythingWithPreviousServerChangeToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end

