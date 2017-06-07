//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString, SBKTaskAssertion;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SBKAsynchronousTask : NSObject
{
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    _Bool _taskInvalidationDisabled;
    double _timeout;
    int _cancelType;
    id _result;
    NSError *_error;
    CDUnknownBlockType _expirationHandler;
    CDUnknownBlockType _finishedHandler;
    SBKTaskAssertion *_taskAssertion;
    NSMutableArray *_completions;
}

@property(retain) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain) SBKTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
- (void).cxx_destruct;
- (void)invokeTaskCompletionBlocksWithBlock:(CDUnknownBlockType)arg1;
- (void)addTaskCompletionBlock:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_invalidateAssertion:(_Bool)arg1;
- (void)endTaskOperation;
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;
- (void)beginTaskOperation;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id result; // @synthesize result=_result;
@property int cancelType; // @synthesize cancelType=_cancelType;
- (void)_onQueueFireExpirationHandlerIfNecesary;
@property(copy) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
- (id)description;
- (void)_invalidateTimer;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;

@end

