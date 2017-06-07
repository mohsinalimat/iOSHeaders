//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSProgress;

@interface BRTransfersStatusManager : NSObject
{
    NSMutableArray *_transfers;
    NSOperationQueue *_queue;
    NSProgress *_globalUploadProgress;
    NSProgress *_globalDownloadProgress;
    NSMutableArray *_coordinators;
    id _globalProgressSubscriber;
    unsigned long long _shouldHideGlobalDownloadProgressCount;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)insertTransfer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTransfer:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)downloadAndObserveItemAtURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopObservingItemDownloadProgress:(id)arg1;
- (id)startObservingItemDownloadProgressAtURL:(id)arg1;
- (void)resume;
- (void)_setGlobalProgress:(id)arg1 forIvar:(id *)arg2;
@property(readonly, copy) NSArray *transfers; // @synthesize transfers=_transfers;
- (id)init;

@end

