//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDCachePurger : NSObject
{
    _Bool _purged;
    NSArray *_oldCacheDirs;
}

+ (id)enumerateOldCachesForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachesPath:(id)arg4;
@property(nonatomic) _Bool purged; // @synthesize purged=_purged;
@property(readonly, nonatomic) NSArray *oldCacheDirs; // @synthesize oldCacheDirs=_oldCacheDirs;
- (void).cxx_destruct;
- (void)purgeOldCacheDirectories;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachePath:(id)arg4;

@end

