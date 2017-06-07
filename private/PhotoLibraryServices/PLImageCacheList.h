//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLLoadRequestKey;
@protocol OS_dispatch_queue;

@interface PLImageCacheList : NSObject
{
    NSObject<OS_dispatch_queue> *_isolation;
    unsigned int _length;
    unsigned int _lastFailLocation;
    id *_keys;
    unsigned long long *_keyHashes;
    id *_images;
    PLLoadRequestKey *_dummy[1];
}

+ (id)newImageCacheList;
- (void)removeImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

