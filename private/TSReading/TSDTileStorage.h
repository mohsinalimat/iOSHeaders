//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCacheDelegate-Protocol.h>

@class NSCache, NSMutableDictionary, NSString, TSUPointerKeyDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDTileStorage : NSObject <NSCacheDelegate>
{
    NSCache *mCache;
    TSUPointerKeyDictionary *mReverseCacheKeys;
    NSObject<OS_dispatch_semaphore> *mReverseCacheKeysLock;
    NSObject<OS_dispatch_queue> *mCacheKeysQueue;
    NSMutableDictionary *mCacheKeysByBucket;
}

- (id)p_cacheKeyForImageInRect:(struct CGRect)arg1 contentsScale:(double)arg2 tileLocation:(CDStruct_73b5d383)arg3;
- (void)removeAllContents;
- (void)removeImagesInBucket:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)contentsInRect:(struct CGRect)arg1 contentsScale:(double)arg2 forTileAtLocation:(CDStruct_73b5d383)arg3 inBucket:(id)arg4;
- (void)storeContents:(id)arg1 inRect:(struct CGRect)arg2 contentsScale:(double)arg3 forTileAtLocation:(CDStruct_73b5d383)arg4 inBucket:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

