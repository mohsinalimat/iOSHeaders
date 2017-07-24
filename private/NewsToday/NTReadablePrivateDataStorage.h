//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTReadablePrivateDataStorage-Protocol.h>

@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString;

@interface NTReadablePrivateDataStorage : NSObject <NTReadablePrivateDataStorage>
{
    FCFileCoordinatedTodayDropbox *_dropbox;
    FCFileCoordinatedTodayPrivateDataTransactionQueue *_transactionQueue;
}

@property(retain, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) FCFileCoordinatedTodayDropbox *dropbox; // @synthesize dropbox=_dropbox;
- (void).cxx_destruct;
- (void)readPrivateDataWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
