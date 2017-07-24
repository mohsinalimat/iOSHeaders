//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SKXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _disconnectBlock;
    CDUnknownBlockType _messageBlock;
}

- (void)_reloadEventHandler;
@property(copy) CDUnknownBlockType messageBlock;
@property(copy) CDUnknownBlockType disconnectBlock;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1;
- (id)createXPCEndpoint;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)init;
- (id)_initSKXPCConnection;

@end

