//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSUtility/TSUStreamReadChannel-Protocol.h>

@class NSString, TSUZipEntry;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSUZipReadChannel : NSObject <TSUStreamReadChannel>
{
    TSUZipEntry *_entry;
    id <TSUReadChannel> _archiveReadChannel;
    NSObject<OS_dispatch_queue> *_readQueue;
}

- (void).cxx_destruct;
- (void)close;
- (void)handleFailureWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (_Bool)processData:(id)arg1 CRC:(unsigned int *)arg2 isDone:(_Bool)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)readWithHeaderLength:(unsigned long long)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long *)arg2;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithEntry:(id)arg1 archiveReadChannel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
