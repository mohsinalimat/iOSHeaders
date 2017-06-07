//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogTracepointBuffer : NSObject
{
    struct {
        unsigned int _field1;
        unsigned long long _field2;
        union {
            struct {
                struct tracev3_chunk_s *_field1;
                struct tracev3_chunk_s *_field2;
                struct catalog_s *_field3;
                struct _firehose_unaligned_tracepoint_s *_field4;
            } _field1;
            struct {
                unsigned char _field1[16];
                struct os_timesync_time_entry_s _field2;
            } _field2;
            struct {
                unsigned char _field1[16];
                unsigned char _field2;
                _Bool _field3;
            } _field3;
        } _field3;
    } *_events;
    unsigned long long _cursor;
    unsigned long long _count;
    unsigned long long _size;
}

- (void)enumerateEventsFromTime:(unsigned long long)arg1 to:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)finishedInsertingTracepointsWithNextMajorTime:(unsigned long long)arg1;
- (void)insertTracepoints:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2 options:(unsigned int)arg3 startLimit:(unsigned long long)arg4;
- (void)insertStatedumpChunk:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2;
- (void)insertNonsparsePoint:(unsigned long long)arg1 uuid:(unsigned char [16])arg2 ttl:(unsigned char)arg3 inMemory:(_Bool)arg4;
- (void)insertTimesyncPoints:(struct _os_timesync_db_s *)arg1 forBoot:(unsigned char [16])arg2 oldestContinuousTime:(unsigned long long)arg3;
- (void)expandBufferAndTrimToTime:(unsigned long long)arg1;
- (_Bool)_isEmpty;
- (void)dealloc;
- (id)init;

@end

