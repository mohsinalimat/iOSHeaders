//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContinuousDialogManagerService/CDMSetupXPCListenerService-Protocol.h>

@class NSString, NSXPCConnection;

@interface CDMSetupXPCClient : NSObject <CDMSetupXPCListenerService>
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)invalidateClientFlowCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)getClientFlowStatusWithReply:(CDUnknownBlockType)arg1;
- (void)getNLAssetStatusForType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)_remoteObjectProxy;
- (void)_clearConnectionWithError:(id)arg1;
- (id)_connection;
- (void)disconnect;
- (void)connect;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

