//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSDispatchSource, BSMachPortSendRight;
@protocol OS_dispatch_queue;

@interface BSPortDeathWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BSDispatchSource *_source;
    BSMachPortSendRight *_sendRight;
    CDUnknownBlockType _handler;
}

@property(readonly, copy, nonatomic) BSMachPortSendRight *sendRight; // @synthesize sendRight=_sendRight;
- (void)invalidate;
- (void)queue_handlePortDeathEvent;
- (void)dealloc;
- (id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;
- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;

@end

