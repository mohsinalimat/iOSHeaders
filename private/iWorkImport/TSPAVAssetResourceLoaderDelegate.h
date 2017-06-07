//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSString, TSPData;
@protocol OS_dispatch_queue, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    TSPData *_data;
    long long _dataLength;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_requestHandlingQueue;
    id <TSUReadChannel> _readChannel;
}

- (void).cxx_destruct;
- (void)_provideNextDataBlockToLoadingRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_provideDataToLoadingRequest:(id)arg1;
- (void)_provideContentInformationToLoadingRequest:(id)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)delegateQueue;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

