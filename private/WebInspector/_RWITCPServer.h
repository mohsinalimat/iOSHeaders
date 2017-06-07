//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPServer : NSObject
{
    id <_RWITCPServerDelegate> _delegate;
    int _listenSocket;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_source> *_serverSource;
    NSMutableArray *_connections;
}

@property(readonly, nonatomic) __weak id <_RWITCPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectionClosed:(id)arg1;
- (_Bool)_createListenDispatchSource;
- (_Bool)_listenOnLaunchdProvidedSocket:(const char *)arg1;
- (_Bool)_listenOnPort:(unsigned short)arg1;
- (void)dealloc;
- (id)initWithLaunchdSocketName:(const char *)arg1 delegate:(id)arg2;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;
- (id)_initWithDelegate:(id)arg1;

@end

