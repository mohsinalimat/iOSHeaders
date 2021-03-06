//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SKUIToggleStateCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)_accountStoreChangeNotification:(id)arg1;
- (_Bool)updateItem:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (void)clearAll;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

