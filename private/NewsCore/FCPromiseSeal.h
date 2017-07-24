//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCMutexLock, NSError, NSMutableArray;

@interface FCPromiseSeal : NSObject
{
    id _value;
    NSError *_error;
    unsigned long long _state;
    NSMutableArray *_handlers;
    FCMutexLock *_lock;
}

@property(readonly, nonatomic) FCMutexLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)seal:(id)arg1 error:(id)arg2 resolution:(unsigned long long)arg3;
- (void)registerHandler:(CDUnknownBlockType)arg1;
- (void)alwaysOn:(id)arg1 always:(CDUnknownBlockType)arg2;
- (void)resolveOn:(id)arg1 reject:(CDUnknownBlockType)arg2 resolve:(CDUnknownBlockType)arg3;
- (void)reject:(id)arg1;
- (void)resolve:(id)arg1;
- (void)dealloc;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

