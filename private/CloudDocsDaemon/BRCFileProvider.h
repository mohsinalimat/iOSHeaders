//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSFileProvider-Protocol.h>

@class BRCAccountSession, NSMutableDictionary, NSOperationQueue, NSString, NSURL, brc_task_tracker;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFileProvider : NSObject <NSFileProvider>
{
    BRCAccountSession *_session;
    NSURL *_url;
    NSOperationQueue *_queue;
    NSMutableDictionary *_presentersIDsByKey;
    NSObject<OS_dispatch_queue> *_privQueue;
    brc_task_tracker *_tracker;
}

+ (id)prettyNameForFilePresenterID:(id)arg1;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_unregisterPresenterForKey:(id)arg1;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 name:(id)arg3 session:(id)arg4;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_pathForKey:(id)arg1;
- (id)_keyForURL:(id)arg1 andID:(id)arg2;
- (id)_keyForURL:(id)arg1;
@property(readonly) NSOperationQueue *_providedItemsOperationQueue;
@property(readonly, copy) NSURL *_providedItemsURL;
- (void)dumpToContext:(id)arg1;
- (void)suspend;
- (void)resume;
- (id)initWithURL:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *_fileReactorID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

