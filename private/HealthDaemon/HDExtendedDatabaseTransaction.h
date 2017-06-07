//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSUUID;
@protocol HDHealthDatabase, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface HDExtendedDatabaseTransaction : NSObject
{
    _Bool _pendingWorkDidSucceed;
    NSUUID *_transactionIdentifier;
    id <HDHealthDatabase> _healthDatabase;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_pendingWorkSemaphore;
    NSObject<OS_dispatch_source> *_automaticRollbackTimer;
    CDUnknownBlockType _pendingWork;
    unsigned long long _status;
    NSError *_lastError;
    double _transactionTimeout;
    double _continuationTimeout;
}

@property(readonly, nonatomic) double continuationTimeout; // @synthesize continuationTimeout=_continuationTimeout;
@property(readonly, nonatomic) double transactionTimeout; // @synthesize transactionTimeout=_transactionTimeout;
@property(nonatomic) _Bool pendingWorkDidSucceed; // @synthesize pendingWorkDidSucceed=_pendingWorkDidSucceed;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType pendingWork; // @synthesize pendingWork=_pendingWork;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *automaticRollbackTimer; // @synthesize automaticRollbackTimer=_automaticRollbackTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingWorkSemaphore; // @synthesize pendingWorkSemaphore=_pendingWorkSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore; // @synthesize completionSemaphore=_completionSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(readonly, nonatomic) __weak id <HDHealthDatabase> healthDatabase; // @synthesize healthDatabase=_healthDatabase;
@property(readonly, copy, nonatomic) NSUUID *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
- (void).cxx_destruct;
- (void)_transaction_runTransactionWithOptions:(unsigned long long)arg1;
- (void)_enableAutomaticRollbackTimer;
- (_Bool)rollbackWithError:(id *)arg1;
- (_Bool)commitWithError:(id *)arg1;
- (_Bool)performInTransactionWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initInDatabase:(id)arg1 options:(unsigned long long)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id *)arg5;

@end

