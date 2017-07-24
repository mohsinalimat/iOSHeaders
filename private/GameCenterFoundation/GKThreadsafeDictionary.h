//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dictionary;
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)dictionaryCopy;
- (id)allKeys;
- (void)writeToDictionary:(CDUnknownBlockType)arg1;
- (void)readFromDictionary:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (id)allObjects;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

