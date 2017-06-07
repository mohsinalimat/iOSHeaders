//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TSURemoteDefaults : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)URLRequest;
- (double)timeIntervalUntilNextUpdate;
- (void)checkForUpdate;
- (void)registerDefaults;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initInternal;

@end

