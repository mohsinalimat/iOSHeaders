//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface FMFMapImageCache : NSObject
{
    NSCache *__cache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *_cache; // @synthesize _cache=__cache;
- (void).cxx_destruct;
- (id)_imageForMap:(id)arg1;
- (id)_keyForHandles:(id)arg1;
- (id)_orientationKey;
- (id)cachedMapForHandles:(id)arg1;
- (void)cacheMap:(id)arg1 forHandles:(id)arg2;
- (void)dealloc;

@end

