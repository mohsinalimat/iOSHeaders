//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/SFUOutputStream-Protocol.h>

@class NSString;
@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mOutputStream;
    struct z_stream_s mDeflateStream;
    char *mOutBuffer;
}

- (id)inputStream;
- (_Bool)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
