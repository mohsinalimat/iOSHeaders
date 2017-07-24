//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCAccountSession, NSString, br_pacer, brc_task_tracker;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumerator : NSObject <BRCModule>
{
    BRCAccountSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_pacer;
    _Bool _readyForIndexing;
    unsigned long long _flushedNotifRank;
    brc_task_tracker *_tracker;
}

+ (void)dropRecentsForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)dropLegacyCoreSpotlightIndexIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)fileProviderManager;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isCancelled;
- (void)cancel;
- (void)close;
- (void)resume;
- (id)initWithAccountSession:(id)arg1;
- (void)_signalActiveSetDidChange;
- (void)_activeSetDidChange;
- (void)enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)maxNotifRankWasFlushed;
- (id)_deletedDocIdResultSetFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)changeTokenForNotifRank:(unsigned long long)arg1;
- (void)_readyForIndexingWithAckedRank:(unsigned long long)arg1;
- (void)garbageCollectRanksPreceding:(unsigned long long)arg1;
- (void)_deleteAllRanks;
- (void)fileObjectID:(id)arg1 isNoLongerIndexableForNotifRank:(unsigned long long)arg2 itemIsLive:(_Bool)arg3;
- (void)dropIndexForClientZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

