//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCPQLConnection, CKServerChangeToken, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface BRCPendingChangesStream : NSObject
{
    NSURL *_databaseURL;
    NSError *_error;
    BRCPQLConnection *_db;
    CKServerChangeToken *_startingChangeToken;
    BRCAccountSession *_session;
}

- (void).cxx_destruct;
- (void)destroyDatabase;
- (_Bool)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6;
- (long long)_recordTypeFromRecordID:(id)arg1 isShare:(_Bool)arg2 isDelete:(_Bool)arg3;
- (_Bool)enumerateRecordsOfType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)fetchTokenState:(CDUnknownBlockType)arg1;
- (void)_openDB;
- (void)_createSchemaIfNecessary;
- (id)initWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2 session:(id)arg3;

@end

