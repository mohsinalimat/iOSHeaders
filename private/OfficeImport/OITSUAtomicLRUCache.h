//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OITSULRUCache.h>

__attribute__((visibility("hidden")))
@interface OITSUAtomicLRUCache : OITSULRUCache
{
}

- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (id)allKeys;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

