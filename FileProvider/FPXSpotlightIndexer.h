//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/CSSearchableIndexDelegate-Protocol.h>

@class CSSearchableIndex, FPXDomainContext, NSData, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPXSpotlightIndexer : NSObject <CSSearchableIndexDelegate>
{
    FPXDomainContext *_context;
    NSString *_indexName;
    NSString *_providerIdentifier;
    CSSearchableIndex *_index;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSData *_lastIndexState;
    unsigned long long _clientState;
    _Bool _initialIndexingDone;
    _Bool _isIndexingExtension;
    _Bool _isCanceled;
}

+ (id)_currentIndexerVersion;
@property(readonly, nonatomic) NSData *lastIndexState; // @synthesize lastIndexState=_lastIndexState;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak FPXDomainContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)dumpStateTo:(id)arg1;
- (void)_fetchClientStateIfNeeded;
- (void)_markClientStateResetDone;
- (_Bool)_clientStateResetNeeded;
- (void)markInitialIndexingDoneIfNeeded;
- (_Bool)_isInInitialIndexing;
- (_Bool)shouldSwizzleLastUsedDate;
- (void)indexItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dropIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dropIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)indexExtensionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)indexExtension;
- (void)_readyForIndexingWithAckedIndexState:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithIndexName:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
