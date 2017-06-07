//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionDataSource-Protocol.h>

@class NSString, WBSURLCompletionDatabase;
@protocol OS_dispatch_queue;

@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource>
{
    NSObject<OS_dispatch_queue> *_completionDatabaseQueue;
    WBSURLCompletionDatabase *_completionDatabase;
    unique_ptr_89909796 _items;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_matchSnapshotForCompletionMatch:(id)arg1;
- (id)initWithItems:(unique_ptr_89909796)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

