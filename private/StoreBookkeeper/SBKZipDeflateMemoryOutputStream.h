//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SBKZipDeflateMemoryOutputStream : NSObject
{
    NSMutableData *deflatedData;
    struct z_stream_s zstream;
    char *_outputBuffer;
    int _bufferingSize;
}

+ (id)dataByDeflatingData:(id)arg1;
- (void).cxx_destruct;
- (_Bool)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)close;
- (void)dealloc;
- (id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2;

@end

