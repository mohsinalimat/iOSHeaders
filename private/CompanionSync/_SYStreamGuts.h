//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSStreamDelegate, OS_dispatch_queue;

@interface _SYStreamGuts : NSObject
{
    struct __CFRunLoopSource *_runloopSource;
    unsigned int _port;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    id <NSStreamDelegate> _delegate;
    NSError *_error;
    unsigned long long _status;
}

- (void).cxx_destruct;
- (void)postStreamEvent:(unsigned long long)arg1 forStream:(id)arg2;
- (void)createRunloopSourceForStream:(id)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)dealloc;

@end

