//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DDictionaryOfDictionary : NSObject
{
    NSMutableDictionary *mDictionary;
}

- (void)addEntriesFromDictionaryOfDictionary:(id)arg1;
- (void)removeObjectForFirstLevelKey:(id)arg1 secondLevelKey:(id)arg2;
- (id)objectForFirstLevelKey:(id)arg1 secondLevelKey:(id)arg2;
- (void)setObject:(id)arg1 forFirstLevelKey:(id)arg2 secondLevelKey:(id)arg3;
- (id)description;
- (void)dealloc;
- (id)init;

@end
