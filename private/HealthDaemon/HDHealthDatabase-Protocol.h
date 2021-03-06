//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDExtendedDatabaseTransaction, HDJournalEntry, NSArray, NSUUID;
@protocol HDDatabaseProtectedDataObserver;

@protocol HDHealthDatabase <NSObject>
@property(readonly, nonatomic, getter=isProtectedDataAvailable) _Bool protectedDataAvailable;
@property(readonly, nonatomic, getter=isDataProtectedByFirstUnlockAvailable) _Bool dataProtectedByFirstUnlockAvailable;
- (_Bool)performWithSecondaryJournal:(long long)arg1 error:(id *)arg2 block:(_Bool (^)(id *))arg3;
- (void)finalizeExtendedTransactionForIdentifier:(NSUUID *)arg1;
- (HDExtendedDatabaseTransaction *)extendedDatabaseTransactionForIdentifier:(NSUUID *)arg1;
- (HDExtendedDatabaseTransaction *)beginExtendedTransactionWithOptions:(unsigned long long)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id *)arg4;
- (void)removeProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (void)addProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (_Bool)addJournalEntries:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)addJournalEntry:(HDJournalEntry *)arg1 error:(id *)arg2;
- (_Bool)performJournalMergeWithOptions:(unsigned long long)arg1 error:(id *)arg2 block:(_Bool (^)(HDSQLiteDatabase *, id *))arg3;
- (void)performAsynchronously:(void (^)(void))arg1;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(void (^)(void))arg1;
- (_Bool)performTransactionWithOptions:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(_Bool (^)(HDSQLiteDatabase *, id *))arg3 inaccessibilityHandler:(_Bool (^)(NSError *, id *))arg4;
@end

