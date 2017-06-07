//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKThreadsafeDictionary, NSError, NSString;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    NSError *_error;
    id result;
    int _sequence;
    _Bool _loggingEnabled;
    id _result;
}

+ (id)mainQueue;
+ (id)backgroundConcurrentQueue;
+ (id)defaultConcurrentQueue;
+ (id)dispatchGroup;
+ (id)dispatchGroupWithName:(id)arg1;
+ (void)waitUntilDone:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isLoggingEnabled) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property(retain) id result; // @synthesize result=_result;
@property(retain) NSError *error; // @synthesize error=_error;
@property NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (id)allValues;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)_values;
- (void)join:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_waitWithDispatchTimeout:(unsigned long long)arg1;
- (void)waitWithTimeout:(double)arg1;
- (void)wait;
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)leave;
- (void)enter;
- (void)perform:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end

