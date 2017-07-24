//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCache.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface ICCache : NSCache
{
    NSObject<OS_dispatch_source> *_memoryWarningEventSource;
}

+ (void)purgeAllCaches;
+ (id)cacheCollection;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource; // @synthesize memoryWarningEventSource=_memoryWarningEventSource;
- (void).cxx_destruct;
- (void)receivedMemoryWarning;
- (void)unregisterForMemoryWarnings;
- (void)registerForMemoryWarnings;
- (void)dealloc;
- (id)init;

@end

