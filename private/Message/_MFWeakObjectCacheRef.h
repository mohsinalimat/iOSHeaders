//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFWeakObjectCache;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface _MFWeakObjectCacheRef : NSObject
{
    id <NSCopying> _key;
    MFWeakObjectCache *_cache;
}

@property(nonatomic) __weak MFWeakObjectCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) id <NSCopying> key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)dealloc;

@end

