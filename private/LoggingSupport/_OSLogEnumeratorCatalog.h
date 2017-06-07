//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _OSLogChunkStore, _OSLogIndex;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorCatalog : NSObject
{
    struct _NSRange _chunkRange;
    _OSLogIndex *_index;
    struct catalog_s *_catalog;
    struct tracev3_chunk_s *_fileHeader;
    _OSLogChunkStore *_store;
    unsigned long long _ot;
    unsigned long long _et;
}

@property(readonly, nonatomic) unsigned long long endTime; // @synthesize endTime=_et;
@property(readonly, nonatomic) unsigned long long oldestTime; // @synthesize oldestTime=_ot;
@property(readonly, nonatomic) _OSLogChunkStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) struct tracev3_chunk_s *fileHeader; // @synthesize fileHeader=_fileHeader;
@property(readonly, nonatomic) struct catalog_s *catalog; // @synthesize catalog=_catalog;
@property(readonly, nonatomic) __weak _OSLogIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)enumerateSubchunksUsingBlock:(CDUnknownBlockType)arg1;
- (long long)oldestTimeCompare:(id)arg1;
- (void)unionWithRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) const char *bootUUID;
- (void)dealloc;
- (id)initWithStore:(id)arg1 index:(id)arg2 fileHeader:(struct tracev3_chunk_s *)arg3 range:(struct _NSRange)arg4 chunk:(struct tracev3_chunk_s *)arg5;

@end

