//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/CUPairingDaemonXPCInterface-Protocol.h>

@class CUPairingDaemon, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUPairingXPCConnection : NSObject <CUPairingDaemonXPCInterface>
{
    CUPairingDaemon *_daemon;
    _Bool _pmEntitledDeleteIdentity;
    _Bool _pmEntitledRead;
    _Bool _pmEntitledRemovePeer;
    _Bool _pmEntitledWrite;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _monitoring;
    NSXPCConnection *_xpcCnx;
}

- (void).cxx_destruct;
- (void)startMonitoringWithOptions:(unsigned long long)arg1;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (int)_entitled:(id)arg1 state:(_Bool *)arg2 label:(id)arg3;
- (void)connectionInvalidated;

@end

