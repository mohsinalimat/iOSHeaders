//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface TIImageCacheClient : NSObject
{
    NSString *_path;
    NSString *_imagePath;
    _Bool _hasLocalAccess;
    int _remoteQueryCount;
    _Bool _shouldIdleWhenDone;
    NSCache *_cache;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSXPCConnection *_connection;
    _Bool _lockOnRead;
}

@property(nonatomic) _Bool lockOnRead; // @synthesize lockOnRead=_lockOnRead;
- (void)_setCacheVersion:(int)arg1;
- (int)_cacheVersion;
- (id)_versionPath;
- (void)purge;
- (unsigned long long)imageCount;
- (id)imagePath;
- (void)removeImagesInGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_idleIfNecessary:(_Bool)arg1;
- (void)idleAfter:(double)arg1;
- (void)setIdleWhenDone;
- (void)_createConnectionIfNecessary;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 item:(id)arg3;
- (struct _img)_imgForItem:(id)arg1;
- (void)_remoteStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (void)_localStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (_Bool)imageExistsForKey:(id)arg1 inGroup:(id)arg2;
- (unsigned int)memContentOffset;
- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;
- (id)cacheNumberForKey:(id)arg1;
@property(nonatomic) unsigned long long cacheItemLimit;
@property(readonly, nonatomic) int cacheVersion;
- (void)dealloc;
- (id)initWithLocalAccess:(_Bool)arg1;

@end

