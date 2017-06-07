//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSMutableSet, TSUZipWriterEntry;
@protocol OS_dispatch_data, OS_dispatch_queue, TSURandomWriteChannel;

@interface TSUZipWriter : NSObject
{
    NSMutableArray *_entries;
    NSMutableSet *_entryNames;
    TSUZipWriterEntry *_currentEntry;
    _Bool _calculateSize;
    _Bool _calculateCRC;
    unsigned short _entryTime;
    unsigned short _entryDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    unsigned long long _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)initEntryTime;
- (void)handleWriteError:(id)arg1;
@property(readonly, nonatomic) unsigned long long archiveLength;
@property(readonly, nonatomic) id <TSURandomWriteChannel> writeChannel;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1;
- (id)endOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2;
- (id)centralFileHeaderDataForEntry:(id)arg1;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)writeCentralDirectory;
- (void)closeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeEntryWithName:(id)arg1 fromReadChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)writeEntryWithName:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3 fromReadChannel:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)finishEntry;
- (void)flushEntryData;
- (void)addDataImpl:(id)arg1;
- (void)addData:(id)arg1;
- (void)beginEntryWithNameImpl:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3;
- (void)beginEntryWithName:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3;
- (void)beginEntryWithName:(id)arg1;
- (id)init;

@end
