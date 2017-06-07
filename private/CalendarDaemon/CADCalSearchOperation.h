//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <CalendarDaemon/CalSearchDataSink-Protocol.h>

@class CalSearch, ClientConnection, NSObject, NSString;
@protocol NSObject, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CADCalSearchOperation : NSOperation <CalSearchDataSink>
{
    ClientConnection *_connection;
    CalSearch *_search;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    unsigned int _replyID;
    long long _lastIndex;
    id <NSObject> _boostToken;
}

+ (id)operationWithConnection:(id)arg1 filter:(struct CalFilter *)arg2 replyID:(unsigned int)arg3;
- (void).cxx_destruct;
- (void)_completeOperation;
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (_Bool)calSearchShouldStopSearching:(id)arg1;
- (void)calSearchComplete:(id)arg1;
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;
- (void)cancel;
- (id)search;
- (void)main;
- (unsigned int)replyID;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 filter:(struct CalFilter *)arg2 replyID:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

