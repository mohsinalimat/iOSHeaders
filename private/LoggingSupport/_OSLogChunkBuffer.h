//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkBuffer : NSObject
{
    _Bool _allocated;
    const char *_data;
    unsigned long long _sz;
}

@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_sz;
@property(readonly, nonatomic) const char *data; // @synthesize data=_data;
- (void)dealloc;
- (id)initWithChunk:(struct tracev3_chunk_s *)arg1 subchunk:(struct catalog_subchunk_s *)arg2;

@end

