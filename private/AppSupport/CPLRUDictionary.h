//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject
{
    struct __CFDictionary *_dictionary;
    unsigned long long _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)allKeys;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (void)_addNodeToFront:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (id)objectForKeyWithoutAffectingLRU:(id)arg1;
- (id)allValuesInLRUOrder;
- (id)allKeysInLRUOrder;
- (unsigned long long)linkedListCount;

@end

