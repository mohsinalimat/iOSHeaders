//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAccessQueue, NSMutableDictionary;
@protocol OS_xpc_object;

@interface AXUIClientConnection : NSObject
{
    _Bool _connected;
    NSObject<OS_xpc_object> *_xpcConnection;
    AXAccessQueue *_connectionAccessQueue;
    NSMutableDictionary *_registeredClients;
    AXAccessQueue *_registeredClientsAccessQueue;
}

+ (id)sharedClientConnection;
@property(retain, nonatomic) AXAccessQueue *registeredClientsAccessQueue; // @synthesize registeredClientsAccessQueue=_registeredClientsAccessQueue;
@property(retain, nonatomic) NSMutableDictionary *registeredClients; // @synthesize registeredClients=_registeredClients;
@property(retain, nonatomic) AXAccessQueue *connectionAccessQueue; // @synthesize connectionAccessQueue=_connectionAccessQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (id)_clientWithIdentifier:(id)arg1;
- (void)unregisterClient:(id)arg1 withIdentifier:(id)arg2;
- (void)registerClient:(id)arg1 withIdentifier:(id)arg2;
- (void)performBlockWithXPCConnection:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

