//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSHistoryDatabaseAccessBroker;

@interface WBSHistoryDatabaseSchemaMigrator : NSObject
{
    WBSHistoryDatabaseAccessBroker *_databaseAccessBroker;
}

- (void).cxx_destruct;
- (_Bool)_setDatabaseSchemaVersion:(int)arg1 forDatabase:(id)arg2 error:(id *)arg3;
- (_Bool)_migrateDatabase:(id)arg1 fromSchemaVersion:(int)arg2 toSchemaVersion:(int)arg3 error:(id *)arg4;
- (_Bool)_createDatabaseSchema:(id)arg1 error:(id *)arg2;
- (void)migrateToCurrentSchemaVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDatabaseAccessBroker:(id)arg1;
- (id)init;

@end

