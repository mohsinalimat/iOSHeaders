//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMapTable;

@interface GEORequestThrottler : NSObject
{
    NSMapTable *_throttleMap;
    NSLock *_lock;
}

+ (id)sharedThrottler;
- (id)_throttlePolicyForKey:(id)arg1;
- (double)throttleStateResetTimeRemainingForKey:(id)arg1;
- (unsigned long long)throttleStateLevelForKey:(id)arg1;
- (_Bool)allowRequestForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

