//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEONSURLSharedSession, GEOTileKeyMap, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface GEOSimpleTileRequester : GEOTileRequester <NSURLSessionDataDelegate>
{
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    GEOTileKeyMap *_keysToBaseOps;
    _Bool _cancelled;
    _Bool _subclassImplementsTileEdition;
    NSMutableArray *_errors;
    NSOperationQueue *_delegateQueue;
    GEONSURLSharedSession *_session;
}

+ (long long)eTagType;
- (id)_runningOperationForTask:(id)arg1;
- (void)dealloc;
- (_Bool)_verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;
- (void)_reprioritizeKey:(struct _GEOTileKey)arg1 newPriority:(unsigned int)arg2;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)_cancelKey:(struct _GEOTileKey)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)_cancel;
- (void)cancel;
- (void)_releaseEverything;
- (void)_cleanup;
- (unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg1;
- (void)start;
- (_Bool)isRunning;
- (void)_startNextPendingOperation:(id)arg1;
- (id)_nextPendingOperation;
- (void)_doWorkOrFinish;
- (void)_operationFinished:(id)arg1;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (id)editionHeader;
- (id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
- (id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
- (int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey *)arg1;
- (id)localizationURLForTileKey:(struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(struct _GEOTileKey *)arg1;
- (_Bool)allowsCookies;
- (id)_delegateGCDQueue;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

