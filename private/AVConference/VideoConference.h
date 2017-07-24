//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/GKNATObserverDelegate-Protocol.h>
#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>
#import <AVConference/VCAudioPowerLevelMonitorDelegate-Protocol.h>
#import <AVConference/VCCallSessionDelegate-Protocol.h>
#import <AVConference/VCMomentTransportDelegate-Protocol.h>
#import <AVConference/VCVideoCaptureClient-Protocol.h>

@class FFTMeter, GKNATObserver, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, VCAudioIO, VCAudioPowerLevelMonitor, VCCallSession, VCMoments, VCVideoRule, VideoConferenceManager;
@protocol OS_dispatch_queue, VideoConferenceChannelQualityDelegate, VideoConferenceDelegate, VideoConferenceSpeakingDelegate;

@interface VideoConference : NSObject <VCCallSessionDelegate, VCVideoCaptureClient, GKNATObserverDelegate, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate, VCAudioPowerLevelMonitorDelegate, VCMomentTransportDelegate>
{
    int _clientPid;
    id delegate;
    id _captionsDelegate;
    VCAudioIO *_audioIO;
    struct opaqueVCAudioBufferList *_sourceBuffer;
    struct opaqueVCAudioBufferList *_sinkBuffer;
    struct opaqueVCAudioBufferList *_sinkBufferMix;
    VideoConferenceManager *manager;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableDictionary *sessionDict;
    NSArray *sessionArray;
    NSMutableArray *_startedSessions;
    _Bool outputMeteringEnabled;
    _Bool inputMeteringEnabled;
    _Bool inputFrequencyMeteringEnabled;
    _Bool outputFrequencyMeteringEnabled;
    FFTMeter *_inputFFTMeter;
    FFTMeter *_outputFFTMeter;
    float outputMeterLevel;
    float inputMeterLevel;
    _Bool microphoneMuted;
    double dAudioHostTime;
    struct _opaque_pthread_mutex_t xRemoteLayer;
    struct _opaque_pthread_mutex_t xAudioTS;
    unsigned int dwAudioTS;
    _Bool forceNoICE;
    _Bool useViceroyBlobFormat;
    int chatMode;
    _Bool isFocus;
    NSString *currentFocus;
    VCCallSession *currentFocusSession;
    _Bool hasMic;
    float conferenceVolume;
    NSArray *mutedPeers;
    NSArray *connectedPeers;
    unsigned int talkingPeersLimit;
    unsigned char speakingArray[16];
    NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    float longTerm;
    float shortTerm;
    _Bool isTalking;
    unsigned int talkTime;
    int packetsPerBundle;
    unsigned int recvRTPTimeStamp;
    _Bool disableVAD;
    _Bool requiresWifi;
    unsigned int preferredCodec;
    int upstreamBandwidth;
    int downstreamBandwidth;
    _Bool useAFRC;
    _Bool isGKVoiceChat;
    _Bool isUsingSuppression;
    _Bool shouldTimeoutPackets;
    unsigned char requestedCameraType;
    _Bool useCompressedConnectionData;
    NSDictionary *natTypeDictionary;
    struct _opaque_pthread_mutex_t natMutex;
    unsigned int lastSentAudioSampleTime;
    double lastReceivedAudioTimestamp;
    VCAudioPowerLevelMonitor *_remoteAudioPowerLevelMonitor;
    int audioTimeStampDelta;
    GKNATObserver *natObserver;
    unsigned int mostRecentStartedCall;
    unsigned int lastActiveCall;
    _Bool _isWarmedUp;
    _Bool bweOperatingModeInitialized;
    _Bool useNewBWEMode;
    _Bool useActiveProbingSenderLog;
    _Bool useFakeLargeFrameMode;
    _Bool shouldPrioritizeParticipantIDForSIPInvite;
    _Bool shouldResumeAudio;
    _Bool shouldResumeVideo;
    unsigned int timeStampUpdateCounter;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    unsigned int _transportType;
    int conferenceOperatingMode;
    int _deviceRole;
    _Bool isValid;
    VCMoments *_vcMoments;
    int localFrameWidth;
    int localFrameHeight;
    VCVideoRule *conferenceCaptureRule;
}

@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(readonly) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property _Bool isValid; // @synthesize isValid;
@property unsigned int lastActiveCall; // @synthesize lastActiveCall;
@property(readonly, nonatomic) VCVideoRule *conferenceCaptureRule; // @synthesize conferenceCaptureRule;
@property(nonatomic) _Bool shouldPrioritizeParticipantIDForSIPInvite; // @synthesize shouldPrioritizeParticipantIDForSIPInvite;
@property(readonly) int localFrameHeight; // @synthesize localFrameHeight;
@property(readonly) int localFrameWidth; // @synthesize localFrameWidth;
@property _Bool disableVAD; // @synthesize disableVAD;
@property unsigned int talkingPeersLimit; // @synthesize talkingPeersLimit;
@property(nonatomic) _Bool requiresWifi; // @synthesize requiresWifi;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat;
@property(nonatomic) _Bool useCompressedConnectionData; // @synthesize useCompressedConnectionData;
@property _Bool shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property(nonatomic) _Bool isUsingSuppression; // @synthesize isUsingSuppression;
@property(nonatomic) _Bool useViceroyBlobFormat; // @synthesize useViceroyBlobFormat;
@property NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate; // @synthesize speakingDelegate;
@property int downstreamBandwidth; // @synthesize downstreamBandwidth;
@property int upstreamBandwidth; // @synthesize upstreamBandwidth;
@property(nonatomic) unsigned int preferredCodec; // @synthesize preferredCodec;
@property(nonatomic) int packetsPerBundle; // @synthesize packetsPerBundle;
@property(copy, nonatomic) NSString *currentFocus; // @synthesize currentFocus;
@property(nonatomic) _Bool isFocus; // @synthesize isFocus;
@property(nonatomic) int chatMode; // @synthesize chatMode;
- (void)setCanProcessAudio:(_Bool)arg1;
- (_Bool)canProcessAudio;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (float)powerIntToFloat:(unsigned char)arg1;
- (unsigned char)powerFloatToInt:(float)arg1;
- (void)setPeerProtocolVersion:(unsigned int)arg1 forCallID:(unsigned int)arg2;
- (void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)processRelayUpdate:(unsigned int)arg1 updateDict:(id)arg2 didOriginateRequest:(_Bool)arg3;
- (void)processRelayRequestResponse:(unsigned int)arg1 responseDict:(id)arg2 didOriginateRequest:(_Bool)arg3;
@property(getter=isSpeakerPhoneEnabled) _Bool enableSpeakerPhone;
@property float conferenceVolume;
@property _Bool hasMic;
- (void)forceNoICE:(_Bool)arg1;
- (id)statsForCallID:(unsigned int)arg1;
- (struct CGSize)remoteFrameSizeForCallID:(unsigned int)arg1;
- (double)roundTripTimeForCallID:(unsigned int)arg1;
- (double)localPacketLossRateForCallID:(unsigned int)arg1;
- (double)remotePacketLossRateForCallID:(unsigned int)arg1;
- (double)remoteBitrateForCallID:(unsigned int)arg1;
- (double)remoteFramerateForCallID:(unsigned int)arg1;
- (double)localBitrateForCallID:(unsigned int)arg1;
- (double)localFramerateForCallID:(unsigned int)arg1;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted;
- (void)setCallReportProtobuf:(unsigned int)arg1 withProtobufData:(id)arg2 forMetricID:(long long)arg3;
- (void)setCallReport:(unsigned int)arg1 withReport:(id)arg2;
- (void)remoteCancelledCallID:(unsigned int)arg1;
- (void)cancelCallID:(unsigned int)arg1;
- (void)stopCallID:(unsigned int)arg1;
- (void)stopAllCalls:(id)arg1;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
- (_Bool)setActive:(_Bool)arg1;
- (_Bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id *)arg8;
- (void)setUpAudioIO:(int)arg1;
- (_Bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(_Bool)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id *)arg10;
- (_Bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 oldCallID:(unsigned int)arg3 usingInviteData:(id)arg4 isCaller:(_Bool)arg5 relayResponseDict:(id)arg6 didOriginateRelayRequest:(_Bool)arg7 capabilities:(id)arg8 idsSocket:(int)arg9 destination:(id)arg10 error:(id *)arg11;
- (int)conferenceOperatingMode;
- (void)setConferenceOperatingMode:(int)arg1;
- (_Bool)shouldReinitializeCallWithDuration:(double)arg1 forCallID:(unsigned int)arg2;
- (void)updateCapabilities:(id)arg1 forCallID:(unsigned int)arg2;
- (void)updateCapabilities:(id)arg1 forSession:(id)arg2;
- (void)setSessionID:(id)arg1 callID:(unsigned int)arg2;
- (void)setPeerCN:(id)arg1 callID:(unsigned int)arg2;
- (_Bool)setPauseVideo:(_Bool)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)setPauseAudio:(_Bool)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (void)setSendAudio:(_Bool)arg1 forCallID:(unsigned int)arg2;
- (_Bool)shouldSendAudioForCallID:(unsigned int)arg1;
- (_Bool)getIsAudioPaused:(_Bool *)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)getIsVideoPaused:(_Bool *)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (void)didReceiveCaptions:(id)arg1 remoteClient:(unsigned int)arg2;
- (void)vcAudioPowerLevelMonitor:(id)arg1 isAudioBelowThreshold:(_Bool)arg2;
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
- (id)callMetadataForCallID:(unsigned int)arg1;
- (void)notifyDelegateOfLocalVariablesChange;
- (int)natTypeForCallSessions:(const char *)arg1;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int *)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id *)arg5;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int *)arg2 error:(id *)arg3;
- (void)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int)arg2 block:(CDUnknownBlockType)arg3 queue:(id)arg4 caller:(id)arg5;
- (void)inviteDataForParticipantID:(id)arg1 callID:(unsigned int)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5 queue:(id)arg6 caller:(id)arg7;
- (void)cleanupQueues;
@property(readonly, nonatomic) float inputMeterLevel;
@property(readonly, nonatomic) float outputMeterLevel;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property(nonatomic, getter=isOutputFrequencyMeteringEnabled) _Bool outputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputFrequencyMeteringEnabled) _Bool inputFrequencyMeteringEnabled;
@property(nonatomic, getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
@property(nonatomic) NSObject<VideoConferenceDelegate> *delegate;
- (double)networkQualityForCallID:(unsigned int)arg1;
- (double)packetLossRateForCallID:(unsigned int)arg1;
- (int)natType;
- (void)setupNATObserver;
- (void)warmupForCall;
- (void)sendData:(id)arg1 toCallID:(unsigned int)arg2 encrypted:(_Bool)arg3;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)cleanupManager;
- (id)newSessionWithDeviceRole:(int)arg1;
- (unsigned int)initializeNewCallWithDeviceRole:(int)arg1;
- (void)dealloc;
- (id)initWithClientPid:(int)arg1;
- (int)pullDecodedMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (int)pullDecodedAsFocusClient:(struct opaqueVCAudioBufferList *)arg1;
- (int)pullDecodedAsFocus:(struct opaqueVCAudioBufferList *)arg1;
- (_Bool)recvSamplesForSession:(id)arg1 sampleBuffer:(struct opaqueVCAudioBufferList *)arg2;
- (void)updateMeters:(unsigned short)arg1;
- (void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(unsigned int)arg3;
- (void)captureMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)updateAudioTimestampsForSession:(id)arg1 withNewSampleTime:(unsigned int)arg2 hostTime:(double)arg3 numSamples:(int)arg4;
- (void)captureAsFocusClient:(struct opaqueVCAudioBufferList *)arg1;
- (void)captureAsFocus:(struct opaqueVCAudioBufferList *)arg1;
- (void)calculateMixingArrays:(unsigned int *)arg1 talkingMask:(unsigned int)arg2;
- (unsigned int)calculateTalkingMaskAtTimeStamp:(unsigned int)arg1;
- (unsigned int)pruneQuietestPeers:(unsigned int)arg1 talking:(unsigned int)arg2 mask:(unsigned int)arg3 meters:(char *)arg4;
- (_Bool)updateSpeaking:(unsigned int)arg1 timeStamp:(unsigned int)arg2;
- (int)sipCallbackNotification:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void *)arg5 confIndex:(int *)arg6;
- (int)stateForCallID:(unsigned int)arg1;
- (id)sessionForIncomingParticipantID:(id)arg1;
- (id)loopbackSessionWaitingForSIPInvite;
- (_Bool)hasSessionWaitingForSIPInvite;
- (id)sessionForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (_Bool)conferenceMatchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)sessionForParticipantID:(id)arg1;
- (_Bool)matchesParticipantID:(id)arg1;
- (id)openSessionForParticipant:(id)arg1;
- (unsigned int)callIDForOpenSessionWithParticipantID:(id)arg1;
- (_Bool)matchesOpenSessionForParticipantID:(id)arg1;
- (_Bool)matchesCallID:(unsigned int)arg1;
- (void)markUnfinishedSessions;
- (_Bool)setPauseVideo:(_Bool)arg1;
- (_Bool)setPauseAudio:(_Bool)arg1;
- (void)cleanupSession:(id)arg1 didRemoteCancel:(_Bool)arg2;
- (void)threadSafeCleanupSession:(id)arg1;
- (void)defaultCleanupSession:(id)arg1;
- (void)cleanupProc:(id)arg1;
- (void)cleanupSession:(id)arg1 withDelay:(unsigned long long)arg2;
- (void)cancelCallID:(unsigned int)arg1 error:(id)arg2;
- (void)stopCallID:(unsigned int)arg1 didRemoteCancel:(_Bool)arg2 error:(id)arg3;
- (void)unlock;
- (void)rdlock;
- (int)tryrdlock;
- (void)wrlock;
- (void)session:(id)arg1 didReceiveMomentsRequest:(id)arg2;
- (unsigned int)momentsCapabilitiesWithNegotiationBlobMomentsSettings_Capabilities:(int)arg1;
- (void)session:(id)arg1 setMomentsCapabilities:(int)arg2;
- (struct AudioStreamBasicDescription)audioIOFormat;
- (void)session:(id)arg1 setRemoteBasebandCodecType:(unsigned int)arg2 sampleRate:(double)arg3;
- (void)session:(id)arg1 stopAudioWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)session:(id)arg1 startAudioWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg2 internalFormat:(struct AudioStreamBasicDescription)arg3 internalSamplesPerFrame:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4;
- (void)setBWEOptions:(_Bool)arg1 UseNewBWEMode:(_Bool)arg2 FakeLargeFrameMode:(_Bool)arg3 ProbingSenderLog:(_Bool)arg4;
- (void)session:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 localAudioEnabled:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)session:(id)arg1 remoteAudioEnabled:(_Bool)arg2 withCallID:(unsigned int)arg3;
- (void)didChangeLocalVariablesForSession:(id)arg1;
- (void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
- (void)session:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)session:(id)arg1 sendRelayResponse:(id)arg2;
- (void)session:(id)arg1 initiateRelayRequest:(id)arg2;
- (void)remoteVideoDidPause:(_Bool)arg1 callID:(unsigned int)arg2;
- (void)remoteAudioDidPause:(_Bool)arg1 callID:(unsigned int)arg2;
- (void)session:(id)arg1 didPauseVideo:(_Bool)arg2 error:(id)arg3;
- (void)session:(id)arg1 didPauseAudio:(_Bool)arg2 error:(id)arg3;
- (_Bool)session:(id)arg1 didStopVideoIO:(_Bool)arg2 error:(id *)arg3;
- (_Bool)session:(id)arg1 stopVideoReceive:(id *)arg2 isPausing:(_Bool)arg3;
- (_Bool)deregisterForVideoFramesWithDeviceRole:(int)arg1;
- (_Bool)stopVideoSend:(_Bool)arg1 error:(id *)arg2;
- (_Bool)session:(id)arg1 startVideoReceive:(id *)arg2;
- (_Bool)registerForVideoFramesWithDeviceRole:(int)arg1 captureRule:(id)arg2 isUnpausing:(_Bool)arg3;
- (_Bool)session:(id)arg1 startVideoSend:(id *)arg2 captureRuleWifi:(id)arg3 captureRuleCell:(id)arg4 interface:(int)arg5 isUnpausing:(_Bool)arg6;
- (void)session:(id)arg1 didReceiveData:(id)arg2 messageType:(unsigned int)arg3 withCallID:(unsigned int)arg4;
- (void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;
- (_Bool)session:(id)arg1 receivedRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(_Bool)arg6 isVideoPaused:(_Bool)arg7;
- (void)session:(id)arg1 didChangeVideoRule:(id)arg2;
- (void)session:(id)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(id)arg1 remoteMediaStalled:(_Bool)arg2;
- (void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (void)session:(id)arg1 didStopWithError:(id)arg2;
- (void)session:(id)arg1 cleanUpWithDelay:(long long)arg2 error:(id)arg3;
- (void)session:(id)arg1 didStart:(_Bool)arg2 connectionType:(unsigned int)arg3 localInterfaceType:(id)arg4 remoteInterfaceType:(id)arg5 error:(id)arg6;
- (void)session:(id)arg1 connectionDidChangeWithLocalInterfaceType:(id)arg2 remoteInterfaceType:(id)arg3 callID:(unsigned int)arg4;
- (void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(_Bool)arg3;
- (void)thermalLevelDidChange:(int)arg1;
- (void)setConferenceVisualRectangle:(struct CGRect)arg1 forCallID:(unsigned int)arg2;
- (void)setConferenceState:(unsigned int)arg1 forCallID:(unsigned int)arg2;
- (void)shouldSendBlackFrame:(_Bool)arg1 callID:(id)arg2;
- (void)avConferenceScreenCaptureError:(id)arg1;
- (void)avConferencePreviewError:(id)arg1;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (_Bool)initiateResolutionChangeToWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (id)clientCaptureRule;
- (void)NATTypeDictionaryUpdated:(id)arg1;
- (void)triggerInterfaceChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

