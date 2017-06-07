//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject
{
    NSMutableDictionary *_entriesByURL;
    struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray>>>, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray>>>>> _entriesByDate;
    NSMutableArray *_orderedLastVisitedDays;
    _Bool itemLimitSet;
    int itemLimit;
    _Bool ageInDaysLimitSet;
    int ageInDaysLimit;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addVisitedLinksToVisitedLinkStore:(struct WebVisitedLinkStore *)arg1;
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;
- (id)data;
- (_Bool)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id *)arg3;
- (_Bool)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int *)arg2 collectDiscardedItemsInto:(id)arg3 error:(id *)arg4;
- (id)ageLimitDate;
- (int)historyItemLimit;
- (void)setHistoryItemLimit:(int)arg1;
- (int)historyAgeInDaysLimit;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (id)allItems;
- (id)itemForURL:(id)arg1;
- (_Bool)containsURL:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)orderedLastVisitedDays;
- (void)addItems:(id)arg1;
- (_Bool)removeAllItems;
- (_Bool)removeItems:(id)arg1;
- (_Bool)removeItem:(id)arg1;
- (void)rebuildHistoryByDayIfNeeded:(id)arg1;
- (_Bool)addItem:(id)arg1 discardDuplicate:(_Bool)arg2;
- (id)visitedURL:(id)arg1 withTitle:(id)arg2;
- (void)addItemToDateCaches:(id)arg1;
- (_Bool)removeItemForURLString:(id)arg1;
- (_Bool)removeItemFromDateCaches:(id)arg1;
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;
- (_Bool)findKey:(long long *)arg1 forDay:(double)arg2;
- (void)dealloc;
- (id)init;

@end

