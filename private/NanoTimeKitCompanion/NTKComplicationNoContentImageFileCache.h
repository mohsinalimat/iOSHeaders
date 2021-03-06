//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKComplicationNoContentImageFileCache : NSObject
{
    NSMutableDictionary *_complicationNoContentImages;
    _Bool _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_flushCache;
- (void)_dirtyCache;
- (void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)arg1;
- (void)setNoContentImages:(id)arg1 forClientIdentifier:(id)arg2;
- (id)noContentImagesForClientIdentifier:(id)arg1;
- (void)setImage:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (id)imageForClientIdentifier:(id)arg1 family:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

