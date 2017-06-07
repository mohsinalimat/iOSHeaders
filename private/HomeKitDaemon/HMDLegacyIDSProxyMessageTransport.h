//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDIDSProxyMessageTransport.h>

#import <HomeKitDaemon/_HMDLegacyWatchSessionDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface HMDLegacyIDSProxyMessageTransport : HMDIDSProxyMessageTransport <_HMDLegacyWatchSessionDelegate>
{
    NSMapTable *_clientSessions;
    NSMapTable *_serverSessions;
}

+ (_Bool)transportSupportsDevice:(id)arg1;
@property(readonly, nonatomic) NSMapTable *serverSessions; // @synthesize serverSessions=_serverSessions;
@property(readonly, nonatomic) NSMapTable *clientSessions; // @synthesize clientSessions=_clientSessions;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)watchSession:(id)arg1 receivedRequestToSendMessage:(id)arg2;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)_handleClientSessionInvalidationMessage:(id)arg1;
- (void)_handleReceivedServerMessage:(id)arg1;
- (void)_handleReceivedClientMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)awdTransportType;
- (id)initWithAccountRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

