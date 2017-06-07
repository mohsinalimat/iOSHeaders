//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseStartUpMiddleware-Protocol.h>

@class NSString;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject <FCCKDatabaseStartUpMiddleware>
{
    id <FCCKDatabaseMigrator> _encryptionMigrator;
}

+ (id)secureSentinelRecordID;
+ (id)sentinelRecordID;
@property(retain, nonatomic) id <FCCKDatabaseMigrator> encryptionMigrator; // @synthesize encryptionMigrator=_encryptionMigrator;
- (void).cxx_destruct;
- (void)_createSentinelsForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchSentinelsWithDatabase:(id)arg1 createIfMissing:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_adoptSentinel:(id)arg1 secureSentinel:(id)arg2 forDatabase:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_postMigrationDeleteRecordIDs:(id)arg1 withSentinel:(id)arg2 secureSentinel:(id)arg3 database:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_migrateWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_tryToEnableEncryptionForDatabase:(id)arg1 onlyIfPreviouslyEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performStartUpForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithEncryptionMigrator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
