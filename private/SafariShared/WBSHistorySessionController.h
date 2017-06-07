//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WBSHistorySessionIntervalCache;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionController : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionCacheAccessQueue;
    NSMutableDictionary *_itemsBySession;
    NSArray *_orderedSessions;
    WBSHistorySessionIntervalCache *_intervalCache;
}

+ (id)sharedSessionController;
- (void).cxx_destruct;
- (void)_timeZoneDidChange:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyItemsWereAdded:(id)arg1;
- (void)_dispatchHistorySessionsDidChangeNotification;
- (void)_loadSessionCache;
- (void)_clearSessionCache;
- (void)_removeItemFromSessionCache:(id)arg1;
- (void)_addItemToSessionCache:(id)arg1;
- (void)_insertItem:(id)arg1 withSessionKey:(id)arg2;
- (_Bool)_getKey:(id *)arg1 forDate:(double)arg2;
- (id)_orderedSessionKeys;
- (id)sessionForItem:(id)arg1;
- (id)orderedSessions;
- (id)itemsLastVisitedInSession:(id)arg1;
- (unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
- (unsigned long long)numberOfSessions;
- (id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

