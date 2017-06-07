//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnectionPool, ML3DatabaseStatementCache, NSMutableArray, NSString, NSUUID;
@protocol ML3DatabaseConnectionDelegate;

@interface ML3DatabaseConnection : NSObject
{
    struct sqlite3 *_sqlitedb;
    _Bool _isOpen;
    ML3DatabaseStatementCache *_statementCache;
    unsigned long long _statementsSinceLastCheckpoint;
    unsigned int _transactionLevel;
    _Bool _nestedTransactionWantsToRollback;
    NSMutableArray *_enqueuedTransactionCommitBlocks;
    ML3DatabaseConnectionPool *_owningPool;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    const void *_iTunesExtensions;
    int _profilingLevel;
    NSString *_lastTracedStatement;
    int _willDeleteDatabaseNotifyToken;
    _Bool _isHandlingIOError;
    _Bool _alreadyAttemptedCorruptionRecovery;
    _Bool _isReadOnly;
    _Bool _automaticCheckpointingEnabled;
    _Bool _logQueryPlans;
    id <ML3DatabaseConnectionDelegate> _connectionDelegate;
    NSString *_databasePath;
    unsigned long long _journalingMode;
    unsigned long long _protectionLevel;
    NSUUID *_currentTransactionID;
    NSUUID *_uniqueIdentifier;
    unsigned long long _checkpointStatementThreshold;
}

+ (void)_updateLastCorruptionRestoreAttemptDate;
+ (id)_lastCorruptionRestoreAttemptDate;
@property(nonatomic) _Bool logQueryPlans; // @synthesize logQueryPlans=_logQueryPlans;
@property(nonatomic) unsigned long long checkpointStatementThreshold; // @synthesize checkpointStatementThreshold=_checkpointStatementThreshold;
@property(nonatomic) _Bool automaticCheckpointingEnabled; // @synthesize automaticCheckpointingEnabled=_automaticCheckpointingEnabled;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSUUID *currentTransactionID; // @synthesize currentTransactionID=_currentTransactionID;
@property(nonatomic) unsigned long long protectionLevel; // @synthesize protectionLevel=_protectionLevel;
@property(nonatomic) unsigned long long journalingMode; // @synthesize journalingMode=_journalingMode;
@property(nonatomic, setter=setReadOnly:) _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) __weak id <ML3DatabaseConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
- (void).cxx_destruct;
- (void)_handleDatabaseProfileStatement:(const char *)arg1 executionTimeNS:(unsigned long long)arg2;
- (void)_handleDatabaseTraceStatement:(const char *)arg1;
- (_Bool)_handleZombieSQLiteConnection:(struct sqlite3 *)arg1;
- (_Bool)_handleConnectionErrorWhileOpening:(int)arg1;
- (void)_executeTransactionCommitBlocks:(_Bool)arg1;
- (void)_resetUnfinalizedStatements;
- (void)_finalizeAllStatements;
- (_Bool)_isSharedMediaLibraryDatabase;
- (void)_updateProfilingLevel;
- (void)_logDatabaseFileDebugInformation;
- (void)_logCurrentError;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2;
- (void)_createDatabaseFileIfNonexistent;
- (void)_createDatabaseDirectoryIfNonexistent;
- (_Bool)_databaseFilesAreWritable;
- (_Bool)_databaseFileExists;
- (id)_registeredModuleNamed:(id)arg1;
- (_Bool)_validatePreparedStatement:(id)arg1 error:(id *)arg2;
- (id)_shortDescription;
- (_Bool)_internalEndTransactionAndCommit:(_Bool)arg1;
- (_Bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (_Bool)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (void)_internalLogQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (_Bool)_executeStatement:(id)arg1 withError:(id *)arg2;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (void)_setAlreadyAttemptedCorruptionRecovery:(_Bool)arg1;
- (_Bool)_alreadyAttemptedCorruptionRecovery;
- (void)_setTransactionLevel:(unsigned long long)arg1;
- (unsigned long long)_transactionLevel;
- (id)_databaseFilePaths;
- (_Bool)_handleDiskIOError;
- (_Bool)_handleBusyLockWithNumberOfRetries:(int)arg1;
- (void)_handleDatabaseCorruption;
- (void)_ensureConnectionIsOpen;
- (struct sqlite3 *)_sqliteHandle;
- (void)_setOwningPool:(id)arg1;
- (id)_owningPool;
- (int)checkpointDatabase;
- (_Bool)deleteDatabase;
- (id)sqliteError;
- (long long)lastInsertionRowID;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(_Bool)arg4;
- (_Bool)removeModuleNamed:(id)arg1;
- (_Bool)registerModuleName:(id)arg1 moduleMethods:(struct sqlite3_module *)arg2;
- (_Bool)registerModule:(id)arg1;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)enqueueBlockForTransactionCommit:(CDUnknownBlockType)arg1;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1 usingBehaviorType:(unsigned long long)arg2;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)popToRootTransactionAndCommit:(_Bool)arg1;
- (_Bool)popTransactionAndCommit:(_Bool)arg1;
- (_Bool)pushTransactionUsingBehaviorType:(unsigned long long)arg1;
- (_Bool)pushTransaction;
@property(readonly, nonatomic) _Bool transactionMarkedForRollBack;
@property(readonly, nonatomic) _Bool isInTransaction;
- (_Bool)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)tableExists:(id)arg1;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeQuery:(id)arg1;
- (_Bool)databasePathExists;
- (void)flush;
- (_Bool)_closeAndFlushTransactionState:(_Bool)arg1;
- (_Bool)close;
- (_Bool)_openWithFlags:(int)arg1;
- (_Bool)open;
- (void)setCurrentTransactionID:(id)arg1;
@property(nonatomic) int profilingLevel;
@property(readonly, nonatomic) _Bool isOpen;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDatabasePath:(id)arg1;
- (id)init;
- (_Bool)_alterTableNamed:(id)arg1 withNewColumnDefinitions:(id)arg2 newColumnNames:(id)arg3 oldColumnNames:(id)arg4;
- (void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)schemaDeleteColumns:(id)arg1 inTable:(id)arg2;
- (_Bool)schemaDeleteColumn:(id)arg1 inTable:(id)arg2;
- (_Bool)schemaRenameColumn:(id)arg1 inTable:(id)arg2 toNewColumnName:(id)arg3;
- (_Bool)schemaInsertColumnDefinitions:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)schemaInsertColumnDefinition:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)schemaAddColumnDefinition:(id)arg1 toTable:(id)arg2;

@end

