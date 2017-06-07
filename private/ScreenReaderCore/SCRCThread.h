//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSThread, SCRCStackQueue;

@interface SCRCThread : NSObject
{
    SCRCStackQueue *_queue;
    SCRCStackQueue *_waitingQueue;
    id _queueLock;
    struct __CFRunLoopSource *_source;
    struct __CFRunLoop *_runLoop;
    _Bool _isInvalid;
    _Bool _isRegistered;
    _Bool _isTimerSet;
    NSString *_description;
    _Bool _descriptionChanged;
    NSThread *_nsThread;
    _Bool _shouldStop;
    _Bool _isWaitingForStoppingThread;
    id __key;
    double _lastStartTime;
}

+ (void)postStopNotification;
+ (void)invalidateForKey:(id)arg1;
+ (double)lastStartTimeForKey:(id)arg1;
+ (double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned int)arg5 count:(unsigned int)arg6 firstObject:(id)arg7 moreObjects:(struct __va_list_tag [1])arg8;
+ (long long)activeThreadCount;
+ (id)activity;
+ (void)initialize;
+ (_Bool)_removeThreadFromRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (_Bool)_addThreadToRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
@property(nonatomic, setter=_setLastStartTime:) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(nonatomic, setter=_setKey:) id _key; // @synthesize _key=__key;
- (void)_processQueue;
- (void)_processQueueFromTimer;
- (void)_enqueueTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (_Bool)_isWaitingForStoppingThread;
- (void)_setIsWaitingForStoppingThread:(_Bool)arg1;
- (_Bool)isInvalid;
- (_Bool)_shouldStop;
- (void)setIsInvalid:(_Bool)arg1;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 objects:(id)arg5;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;
- (void)dealloc;
- (void)_threadDidStop;
- (void)_runThread:(id)arg1;
- (void)_setName:(id)arg1;
- (void)setName:(id)arg1;
- (id)_initWithKey:(id)arg1 task:(id)arg2;
- (id)init;

@end

