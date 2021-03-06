//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEODataRequestThrottler : NSObject
{
    NSObject<OS_dispatch_queue> *_isolation;
    NSMutableDictionary *_throttlers;
}

+ (id)sharedThrottler;
- (void).cxx_destruct;
- (id)description;
- (void)withThrottlerForKey:(struct GEOThrottleKey)arg1 do:(CDUnknownBlockType)arg2;
- (_Bool)isCloseToThrottlingForKey:(struct GEOThrottleKey)arg1;
- (_Bool)allowRequestForKey:(struct GEOThrottleKey)arg1;
- (id)_init;
- (id)init;
- (_Bool)allowRequestForRequestKind:(int)arg1;
- (_Bool)allowRequestForPlaceRequestType:(int)arg1;

@end

