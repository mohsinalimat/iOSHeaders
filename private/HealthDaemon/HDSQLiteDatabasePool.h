//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;
@protocol HDSQLiteDatabasePoolDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject>
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableSet *_cache;
    unsigned long long _cacheGeneration;
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSMapTable *_checkoutMap;
    NSObject<OS_dispatch_semaphore> *_readerSemaphore;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
    unsigned long long _cacheSize;
    int _backgroundReadersWaiting;
    int _writersWaiting;
    id <HDSQLiteDatabasePoolDelegate> _delegate;
    unsigned long long _maxConcurrentBackgroundReaders;
    unsigned long long _maxConcurrentWriters;
}

@property(readonly) unsigned long long maxConcurrentWriters; // @synthesize maxConcurrentWriters=_maxConcurrentWriters;
@property(readonly) unsigned long long maxConcurrentBackgroundReaders; // @synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders;
@property id <HDSQLiteDatabasePoolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)_didFlushDatabases:(id)arg1;
- (id)_semaphoreForDatabaseType:(long long)arg1 waitCounter:(int **)arg2;
- (id)_databaseWithType:(long long)arg1 error:(id *)arg2;
@property unsigned long long cacheSize;
- (void)flush;
- (void)checkInDatabase:(id)arg1 flushImmediately:(_Bool)arg2;
- (id)writerDatabaseWithError:(id *)arg1;
- (id)readerDatabaseWithPriority:(long long)arg1 error:(id *)arg2;
@property(readonly) unsigned long long writersWaiting;
@property(readonly) unsigned long long backgroundReadersWaiting;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

