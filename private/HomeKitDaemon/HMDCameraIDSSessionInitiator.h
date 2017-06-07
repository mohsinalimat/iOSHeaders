//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>

#import <HomeKitDaemon/HMDCameraPowerAssertionProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraRemoteStreamSenderProtocol-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class AVCPacketRelay, HAPOSTransaction, HMDCameraNetworkConfig, HMDCameraSessionID, NSNumber, NSObject, NSString;
@protocol HMDCameraIDSSessionInitiatorDelegate, OS_dispatch_queue;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <IDSServiceDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol, HMDCameraPowerAssertionProtocol>
{
    id <HMDCameraIDSSessionInitiatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_destinationID;
    HMDCameraNetworkConfig *_localNetworkConfig;
    AVCPacketRelay *_packetRelay;
    HAPOSTransaction *_packetRelayTransaction;
}

+ (id)logCategory;
@property(retain, nonatomic) HAPOSTransaction *packetRelayTransaction; // @synthesize packetRelayTransaction=_packetRelayTransaction;
@property(retain, nonatomic) AVCPacketRelay *packetRelay; // @synthesize packetRelay=_packetRelay;
@property(readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig; // @synthesize localNetworkConfig=_localNetworkConfig;
@property(readonly, copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <HMDCameraIDSSessionInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_callSessionEnded:(id)arg1;
- (void)_callSessionStarted:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)_sendInvitation;
- (void)openRelaySession;
- (void)dealloc;
@property(readonly, nonatomic) NSNumber *mtu;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 localNetworkConfig:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID;
@property(readonly) Class superclass;

@end

