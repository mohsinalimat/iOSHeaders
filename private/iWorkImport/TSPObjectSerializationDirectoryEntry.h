//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationDirectoryEntry : NSObject
{
    unsigned long long _offset;
    unsigned long long _size;
}

@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
- (id)initWithOffset:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (id)init;

@end

