//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3LanguageResources;
@protocol OS_dispatch_queue;

@interface ML3LanguageResourceManager : NSObject
{
    ML3LanguageResources *_cachedResources;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedResourceManager;
- (void).cxx_destruct;
- (id)_buildLanguageResources;
- (void)_fetchLanguageResourcesFromMediaLibraryService:(CDUnknownBlockType)arg1;
- (void)invalidateCachedResources;
- (void)fetchLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

