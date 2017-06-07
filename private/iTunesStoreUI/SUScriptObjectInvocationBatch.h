//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, SUScriptObject;

@interface SUScriptObjectInvocationBatch : NSObject
{
    NSMutableArray *_invocationQueue;
    NSLock *_lock;
    struct __CFDictionary *_proxies;
    SUScriptObject *_rootObject;
}

@property SUScriptObject *rootObject;
- (void)enqueueInvocation:(id)arg1;
- (void)_delayedDequeueInvocations;
- (void)dequeueInvocations;
- (id)copyQueuedInvocationsForObject:(id)arg1;
- (void)checkOutBatchTarget:(id)arg1;
- (id)batchProxyForObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

