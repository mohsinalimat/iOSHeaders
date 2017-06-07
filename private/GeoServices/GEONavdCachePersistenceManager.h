//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEONavdCacheDBReader, GEONavdCacheDBWriter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdCachePersistenceManager : NSObject
{
    GEONavdCacheDBWriter *_writer;
    GEONavdCacheDBReader *_reader;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_removeAllEntries;
- (long long)_numberOfEntries;
- (void)_enumerateAllForCacheEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)_enumerateAllEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)_deleteFromDiskWithKey:(id)arg1;
- (void)_deleteRowWithRowId:(long long)arg1;
- (id)_readValueWithKey:(id)arg1;
- (long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2;
- (id)_entryWithRowId:(long long)arg1;
- (long long)_rowIdOfKey:(id)arg1;
- (long long)_threadUnsafeRowIdOfKey:(id)arg1;
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1;
- (double)_nextTimeStampForRefreshTimer;
- (void)_removeOldFormatCache;
- (id)initWithPath:(id)arg1;

@end

