//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLAttributeDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor
{
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)arg1;
- (unsigned long long)bufferIndex;
- (void)setFormat:(unsigned long long)arg1;
- (unsigned long long)format;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
