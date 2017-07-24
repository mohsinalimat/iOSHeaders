//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, CALayer, NSDictionary, NSMutableDictionary, NSTimer;
@protocol AVConferenceDelegate, OS_dispatch_queue;

@interface AVConference : NSObject
{
    AVConferenceXPCClient *connection;
    id opaqueConf;
    _Bool useServer;
    id _delegate;
    NSDictionary *serverBag;
    _Bool _isUsingFrontCamera;
    _Bool _microphoneMuted;
    NSMutableDictionary *_stateCacheForCallID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    _Bool shouldDisplayNetworkQualityGraph_;
    NSTimer *networkQualityUpdateTimer_;
    CALayer *networkQualityGraphLayer_;
}

+ (unsigned int)doBlockingConnectionCheck:(_Bool)arg1;
+ (unsigned int)doBlockingConnectionCheck;
+ (_Bool)hasActiveAudioSession;
+ (void)stopAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)startAudioSession;
+ (void)setAudioSessionProperties:(id)arg1;
+ (id)externalAddressForSelfConnectionBlob:(id)arg1;
+ (short)addressPointerFromBlob:(id)arg1;
+ (void)refreshLoggingParameters;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted; // @synthesize microphoneMuted=_microphoneMuted;
@property(retain) CALayer *networkQualityGraphLayer; // @synthesize networkQualityGraphLayer=networkQualityGraphLayer_;
@property(retain) NSTimer *networkQualityUpdateTimer; // @synthesize networkQualityUpdateTimer=networkQualityUpdateTimer_;
@property _Bool shouldDisplayNetworkQualityGraph; // @synthesize shouldDisplayNetworkQualityGraph=shouldDisplayNetworkQualityGraph_;
- (void)setPeerProtocolVersion:(unsigned int)arg1 forCallID:(long long)arg2;
- (void)setConferenceVisualRectangle:(struct CGRect)arg1 forCallID:(long long)arg2;
- (void)setConferenceState:(unsigned int)arg1 forCallID:(long long)arg2;
- (void)shouldSendBlackFrames:(_Bool)arg1 callID:(long long)arg2;
- (void)processCancelRelayRequest:(long long)arg1 cancelDict:(id)arg2 didOriginateRequest:(_Bool)arg3;
- (void)processRelayUpdate:(long long)arg1 updateDict:(id)arg2 didOriginateRequest:(_Bool)arg3;
- (void)processRelayRequestResponse:(long long)arg1 responseDict:(id)arg2 didOriginateRequest:(_Bool)arg3;
- (void)videoConference:(id)arg1 closeConnectionForCallID:(long long)arg2;
- (void)videoConference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 localAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 remoteAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(_Bool)arg3;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(_Bool)arg2;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 remoteMediaStalled:(_Bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 withCallID:(long long)arg2 didPauseVideo:(_Bool)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (unsigned int)doBlockingConnectionCheck;
- (void)setLocalScreenAttributes:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (_Bool)setServerInfo:(id)arg1;
- (id)capabilitiesForCallID:(long long)arg1;
- (void)updateCapabilities:(id)arg1 forCallID:(long long)arg2;
- (_Bool)setPauseVideo:(_Bool)arg1 callID:(long long)arg2 error:(id *)arg3;
- (_Bool)setPauseAudio:(_Bool)arg1 callID:(long long)arg2 error:(id *)arg3;
@property(readonly) unsigned int natType;
@property(getter=isSpeakerPhoneEnabled) _Bool enableSpeakerPhone;
- (id)statsForCallID:(long long)arg1;
- (double)roundTripTimeForCallID:(long long)arg1;
- (double)localPacketLossRateForCallID:(long long)arg1;
- (double)remotePacketLossRateForCallID:(long long)arg1;
- (int)remoteFrameWidthForCallID:(long long)arg1;
- (int)remoteFrameHeightForCallID:(long long)arg1;
@property(readonly) int localFrameWidth;
@property(readonly) int localFrameHeight;
- (double)remoteBitrateForCallID:(long long)arg1;
- (double)remoteFramerateForCallID:(long long)arg1;
- (double)localBitrateForCallID:(long long)arg1;
- (double)localFramerateForCallID:(long long)arg1;
- (long long)videoStreamTokenForCallID:(long long)arg1;
- (void)setRemoteVideoBackLayer:(void *)arg1;
- (void)setRemoteVideoLayer:(void *)arg1;
- (void *)remoteVideoBackLayer;
- (void *)remoteVideoLayer;
- (void)stopNetworkQualityUpdateTimer;
- (void)startNetworkQualityUpdateTimer;
- (_Bool)updateNetworkQualityGraph;
- (float)networkQuality;
- (_Bool)setAudioOutputDevice:(id)arg1;
- (_Bool)setAudioInputDevice:(id)arg1;
- (id)currentAudioOutputDevice;
- (id)currentAudioInputDevice;
@property(readonly) float inputMeterLevel;
- (_Bool)getIsVideoPaused:(_Bool *)arg1 callID:(long long)arg2 error:(id *)arg3;
- (_Bool)getIsAudioPaused:(_Bool *)arg1 callID:(long long)arg2 error:(id *)arg3;
@property(readonly) float outputMeterLevel;
@property(nonatomic, getter=isOutputFrequencyMeteringEnabled) _Bool outputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputFrequencyMeteringEnabled) _Bool inputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property(nonatomic, getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
- (void)processRemoteIPChange:(id)arg1 callID:(long long)arg2;
- (void)setLastActiveCallID:(long long)arg1;
- (long long)lastActiveCallID;
- (_Bool)setActive:(_Bool)arg1;
- (void)setCallReport:(long long)arg1 withReport:(id)arg2;
- (void)sendProtobuf:(id)arg1 withType:(long long)arg2 forCallID:(long long)arg3;
- (void)remoteCancelledCallID:(long long)arg1;
- (void)cancelCallID:(long long)arg1;
- (void)stopCallID:(long long)arg1;
- (_Bool)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(_Bool)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(_Bool)arg5 capabilities:(id)arg6 error:(id *)arg7;
- (_Bool)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(_Bool)arg6 capabilities:(id)arg7 error:(id *)arg8;
- (_Bool)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(_Bool)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(_Bool)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 error:(id *)arg8;
- (_Bool)startConnectionWithCallID:(long long)arg1 inviteData:(id)arg2 isCaller:(_Bool)arg3 capabilities:(id)arg4 destination:(id)arg5 error:(id *)arg6;
- (_Bool)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(_Bool)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id *)arg9;
- (_Bool)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(_Bool)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id *)arg10;
- (id)convertBlobtoNewBlob:(id)arg1;
- (id)convertBlobtoOldBlob:(id)arg1;
@property(nonatomic) _Bool requiresWifi;
- (double)networkQualityForCallID:(long long)arg1;
- (void)setSessionID:(id)arg1 callID:(long long)arg2;
- (void)setPeerCN:(id)arg1 callID:(long long)arg2;
- (id)callMetadataForCallID:(long long)arg1;
- (void)inviteDictionaryForCallID:(long long)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (id)newRandomParticipantID;
- (void)sendData:(id)arg1 forCallID:(long long)arg2 encrypted:(_Bool)arg3;
- (void)sendARPLData:(id)arg1 toCallID:(long long)arg2;
- (void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2;
- (void)setSetSessionID:(id)arg1 forCallID:(long long)arg2;
@property(getter=isUsingViceroyBlobFormat) _Bool useViceroyBlobFormat;
- (void)dealloc;
- (void)warmupForCall;
- (long long)initializeNewCallWithDeviceRole:(int)arg1;
- (long long)initializeNewCall;
@property(nonatomic) NSObject<AVConferenceDelegate> *delegate;
- (id)initWithClientUUID:(id)arg1 transportType:(unsigned int)arg2;
- (id)initWithClientUUID:(id)arg1;
- (id)init;
- (void)handleGKSConnectivitySettingsUpdate:(id)arg1;
- (void)updateGKSConnectivitySettings;
- (void)stopListeningForNotifications;
- (void)listenForNotifications;
- (void)setCallState:(id)arg1 forCallID:(id)arg2;
- (id)callStateForCallID:(id)arg1;
- (void)serverDied;
- (void)serverReconnected;
- (void)deregisterBlocksForVCNotifications;
- (void)registerBlocksForVCNotifications;

@end

