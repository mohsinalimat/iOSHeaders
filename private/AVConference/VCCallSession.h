//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCCaptionsReceiverDelegate-Protocol.h>
#import <AVConference/VCSecureDataChannelDelegate-Protocol.h>
#import <AVConference/VCTransportSessionLegacyDelegate-Protocol.h>

@class GKRingBuffer, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TimingCollection, VCAudioPayload, VCAudioTier, VCAudioTierPicker, VCAudioTransmitter, VCBitrateArbiter, VCCallInfo, VCCallLinkCongestionDetector, VCCapabilities, VCCaptionsReceiver, VCConnectionManager, VCImageAttributeRules, VCMediaNegotiator, VCPacketBundler, VCSecureDataChannel, VCSessionMessaging, VCTransportSession, VCWCMClient, VideoAttributes, WRMClient;
@protocol OS_dispatch_queue, OS_dispatch_source, VCCallSessionDelegate, VCConnectionProtocol, VideoConferenceChannelQualityDelegate;

__attribute__((visibility("hidden")))
@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, VCCaptionsReceiverDelegate, VCTransportSessionLegacyDelegate>
{
    NSObject<VCCallSessionDelegate> *delegate;
    VCCallInfo *localCallInfo;
    VCCallInfo *remoteCallInfo;
    long long packetMultiplexMode;
    struct tagHANDLE *rtpHandle;
    struct tagHANDLE *rtpVideo;
    VCConnectionManager *connectionManager;
    long long connectionChangeState;
    id <VCConnectionProtocol> toBeChangedPrimaryConnection;
    VCMediaNegotiator *_mediaNegotiator;
    NSObject<OS_dispatch_queue> *connectionChangeQueue;
    long long state;
    long long _sipState;
    NSMutableArray *audioPayloads;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    VCAudioTierPicker *audioTierPicker_AppleCalling;
    VCAudioTierPicker *audioTierPicker_FaceTime;
    VCAudioTier *currentAudioTier;
    VCAudioTier *requestedAudioTier;
    VCPacketBundler *audioBundler;
    int audioTierChangeRequestCount;
    long long videoPayload;
    long long screenPayload;
    long long sampleRate;
    long long samplesPerFrame;
    long long blockSize;
    float blockSeconds;
    struct tagHANDLE *hSIP;
    _Bool isAudioRunning;
    _Bool isWaitingForICEResult;
    _Bool didSend200OK;
    struct _opaque_pthread_mutex_t mutex;
    _Bool receivedSIPInvite;
    VCImageAttributeRules *imageAttributeRules;
    int iRemoteRTPPort;
    int iRemoteRTCPPort;
    VCCapabilities *caps;
    int _deviceRole;
    struct tagHANDLE *hMediaQueue;
    struct tagHANDLE *hAFRC;
    GKRingBuffer *ringBuf;
    unsigned int lastReceived;
    char *lastInputSampleBuffer;
    unsigned int lastInputSampleBufferSize;
    int preferredAudioCodec;
    int audioTxBitrate;
    int audioHeaderSize;
    unsigned int afrcBitrate;
    unsigned int afrcDuplication;
    double audioInterval;
    _Bool useSBR;
    _Bool useControlByte;
    _Bool useUEP;
    NSDictionary *_allPayloadsLocalFeaturesString;
    NSMutableDictionary *featuresListStringDict;
    unsigned char inputMeter;
    _Bool audioIsPaused;
    struct _opaque_pthread_mutex_t pauseLock;
    NSObject<OS_dispatch_queue> *videoQueue;
    NSObject<OS_dispatch_queue> *videoAsyncQueue;
    NSArray *mutedPeers;
    int bandwidthUpstream;
    int bandwidthDownstream;
    _Bool allowAudioRecording;
    int aacBlockSize;
    _Bool _useAMRLowLatencyMode;
    _Bool fInitialBandwidthDetection;
    int carrierBitrateCap;
    struct AudioStreamBasicDescription vpioFormat;
    _Bool allowAudioSwitching;
    _Bool shouldUpdateLastReceivedPacketTimestamp;
    double lastReceivedPacketTimestamp;
    _Bool isRemoteMediaStalled;
    int packetsSinceStall;
    int natType;
    unsigned int lastSentAudioSampleTime;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    TimingCollection *perfTimers;
    double packetLossRate;
    double timeLastCheckedNetworkConditions;
    double timeLastKnowGoodNetworkPLR;
    double timeLastKnowGoodNetworkRTT;
    double networkConditionsTimeoutInSeconds;
    NSString *peerCN;
    NSString *sessionID;
    unsigned int roundTripTime;
    float packetLateAndMissingRatio;
    int sampleLogCount;
    double timeSinceLastReportedNoPackets;
    double noRemotePacketsTimeout;
    _Bool didAttemptSIPInvite;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    struct _opaque_pthread_mutex_t qualityDelegateLock;
    NSObject<OS_dispatch_queue> *qualityQueue;
    NSObject<OS_dispatch_queue> *managerQueue;
    _Bool shouldTimeoutPackets;
    struct _opaque_pthread_mutex_t srtpLock;
    _Bool didPrepareSRTP;
    _Bool useAFRC;
    _Bool isRTCPFBEnabled;
    VCCallLinkCongestionDetector *congestionDetector;
    _Bool shouldSendAudio;
    _Bool isGKVoiceChat;
    void *packetThread;
    int signalStrength;
    int signalRaw;
    int signalGrade;
    _Bool bBWEstOperatingModeInitialized;
    _Bool bBWEstNewBWEstModeEnabled;
    _Bool bBWEstFakeLargeFrameModeEnabled;
    _Bool bBWEstActiveProbingSenderLog;
    struct CGSize remoteScreenPortraitAspectRatio;
    struct CGSize remoteScreenLandscapeAspectRatio;
    struct CGSize remoteExpectedPortraitAspectRatio;
    struct CGSize remoteExpectedLandscapeAspectRatio;
    _Bool isStarted;
    NSData *srtpKeyBytes;
    _Bool isInitiator;
    _Bool sentClientSuccessfulDidStart;
    double videoThrottlingTimeout;
    unsigned int awdCallNonce;
    VCSessionMessaging *messaging;
    _Bool isCurrentNetworkBad;
    unsigned int callSessionBitrate;
    NSObject<OS_dispatch_queue> *cellTechQueue;
    NSObject<OS_dispatch_source> *cellTechChangeSource;
    VCBitrateArbiter *callSessionBitrateArbiter;
    NSObject<OS_dispatch_source> *connectionTimeoutSource;
    unsigned short maxPacketLength;
    double lastTierSwitch;
    _Bool audioTierHysteresis;
    long long initialSentBytes;
    long long initialReceivedBytes;
    // Error parsing type: ^{tagVCAudioReceiver={tagVCAudioReceiverConfig=^{tagHANDLE}IiiB}^{JitterPreloadQueue_t}^{JitterQueue_t}{tagJLagProcessor=dIIISIIdddddfiddd[30d]iII{tagSecRef=dISdi}^v{tagJLagProcessorStatistics=dII}}{tagTargetJBEstimator=iiBiiddI{tagJITTER_HISTORY=[1500d][1500d][1500i]iiiddddS{tagJITTER_CDFHISTOGRAM=^I[1500i]IddI}{tagJITTER_SPIKEINFO=ddd[75d][75d]iiiddddSdidddiddiiddddi{tagJITTER_CANDIDATE_SPIKEINFO=ddddd}}dS}[50d][50d]ii[10I]fff^v{tagTargetJBEstimatorSpikeInfo=iidd}{tagTargetJBEstimatorStatistics=idddddidddddd}}{tagPlayback=iiiii*iiII[16C]Ci*iIi*i(?=sf)(?=sf)I(?=sf)(?=sf)iiBBffffB^{OpaqueAudioConverter}^{OpaqueAudioConverter}C^v[1440f]iiiddddiiddiiii{tagCrossFade=*^f^fiiB}iifdBB{_tagInternalAudioFormat=IIIB}^{tagDecoderSettings}^{JitterQueue_t}I{tagPlaybackStatistics=iII*ii}{tagPlaybackReportingMetrics=iiiiiifffffii}{tagPlaybackWRMMetrics=IIIIQ}}^vd{tagVCRealTimeThread=II{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}^?^v^{OpaqueFigThread}i[60c]II}{tagVCAudioReceiverReportingTask=^{opaqueRTCReporting}di[100d]BSI^{tagHANDLE}}^{_tagInternalAudioFormat}{tagJitterQueueParameters=ddiidiiBi}{tagVideoQueueParameters=idddd}B{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{tagDecoderSettings}IIBi{tagVCAudioReceiverStatistics=AI}^{tagWRMMetricsInfo}^?{tagAMRModeChangeRequestCallbackContext=^v^?^?}}, name: audioReceiver
    VCAudioTransmitter *audioTransmitter;
    VCCaptionsReceiver *_captionsReceiver;
    struct tagHANDLE *hVideoReceiver;
    struct tagHANDLE *hVideoTransmitter;
    _Bool remoteSupportsVisibleRect;
    _Bool remoteSupportsExpectedAspectRatio;
    _Bool canLocalResizePIP;
    _Bool canRemoteResizePIP;
    _Bool receivedFirstRemoteFrame;
    int fecMode;
    NSObject<OS_dispatch_source> *sessionHealthMonitor;
    VideoAttributes *remoteVideoAttributes;
    double lastVideoQualityNotificationUpdate;
    unsigned int remoteFrameWidth;
    unsigned int remoteFrameHeight;
    VCWCMClient *vcWCMClient;
    WRMClient *vcWRMClient;
    _Bool iRATSuggestionEnabled;
    struct OpaqueVTPixelTransferSession *hdTransferSession;
    struct __CVPixelBufferPool *hdBufferPool;
    struct CGSize expectedDecodeSize;
    struct opaqueRTCReporting *reportingAgent;
    int reportUpdateInterval;
    int reportReportFrequency;
    _Bool enableAFRCDump;
    unsigned int awdTime;
    int operatingMode;
    unsigned int sentAudioBytes;
    unsigned int totalTxAudioBytes;
    unsigned int estimateTxAudioBytes;
    unsigned int audioFrameCounter;
    unsigned int silenceFrameCounter;
    unsigned int vadSegmentCounter;
    _Bool lastIsTalking;
    double lastVCLogCallbackTime;
    struct SKEStateOpaque *skeState;
    struct __CFData *secretKey;
    VCSecureDataChannel *secureDataChannel;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    _Bool _didSendBasebandCodec;
    unsigned int dwRTT_ice;
    NSObject<OS_dispatch_queue> *timestampQueue;
    _Bool shouldSendBlackFrame;
    unsigned int _peerProtocolVersion;
    struct tagWRMMetricsInfo *wrmInfo;
    _Bool _inviteDataRequested;
    unsigned int _transportType;
    VCTransportSession *_transportSession;
    _Bool _cleanupDone;
    _Bool _isLocalCellular_LowestConnectionQuality;
    _Bool _isRemoteCellular_LowestConnectionQuality;
    _Bool _isConnectedOnIPv6_LowestConnectionQuality;
}

+ (id)keyPathsForValuesAffectingNetworkQuality;
@property(retain) NSData *srtpKeyBytes; // @synthesize srtpKeyBytes;
@property(readonly) VCCallInfo *localCallInfo; // @synthesize localCallInfo;
@property _Bool didSend200OK; // @synthesize didSend200OK;
@property long long sipState; // @synthesize sipState=_sipState;
@property int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(copy, nonatomic) NSString *basebandCodecType; // @synthesize basebandCodecType;
@property(retain, nonatomic) NSNumber *basebandCodecSampleRate; // @synthesize basebandCodecSampleRate;
@property(readonly) _Bool isRemoteMediaStalled; // @synthesize isRemoteMediaStalled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode;
@property unsigned int remoteFrameHeight; // @synthesize remoteFrameHeight;
@property unsigned int remoteFrameWidth; // @synthesize remoteFrameWidth;
@property(readonly) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter;
// Error parsing type for property audioReceiver:
// Property attributes: T^{tagVCAudioReceiver={tagVCAudioReceiverConfig=^{tagHANDLE}IiiB}^{JitterPreloadQueue_t}^{JitterQueue_t}{tagJLagProcessor=dIIISIIdddddfiddd[30d]iII{tagSecRef=dISdi}^v{tagJLagProcessorStatistics=dII}}{tagTargetJBEstimator=iiBiiddI{tagJITTER_HISTORY=[1500d][1500d][1500i]iiiddddS{tagJITTER_CDFHISTOGRAM=^I[1500i]IddI}{tagJITTER_SPIKEINFO=ddd[75d][75d]iiiddddSdidddiddiiddddi{tagJITTER_CANDIDATE_SPIKEINFO=ddddd}}dS}[50d][50d]ii[10I]fff^v{tagTargetJBEstimatorSpikeInfo=iidd}{tagTargetJBEstimatorStatistics=idddddidddddd}}{tagPlayback=iiiii*iiII[16C]Ci*iIi*i(?=sf)(?=sf)I(?=sf)(?=sf)iiBBffffB^{OpaqueAudioConverter}^{OpaqueAudioConverter}C^v[1440f]iiiddddiiddiiii{tagCrossFade=*^f^fiiB}iifdBB{_tagInternalAudioFormat=IIIB}^{tagDecoderSettings}^{JitterQueue_t}I{tagPlaybackStatistics=iII*ii}{tagPlaybackReportingMetrics=iiiiiifffffii}{tagPlaybackWRMMetrics=IIIIQ}}^vd{tagVCRealTimeThread=II{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}^?^v^{OpaqueFigThread}i[60c]II}{tagVCAudioReceiverReportingTask=^{opaqueRTCReporting}di[100d]BSI^{tagHANDLE}}^{_tagInternalAudioFormat}{tagJitterQueueParameters=ddiidiiBi}{tagVideoQueueParameters=idddd}B{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{tagDecoderSettings}IIBi{tagVCAudioReceiverStatistics=AI}^{tagWRMMetricsInfo}^?{tagAMRModeChangeRequestCallbackContext=^v^?^?}},R,VaudioReceiver

@property(retain, nonatomic) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes;
@property(retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted;
@property(nonatomic) _Bool shouldSendAudio; // @synthesize shouldSendAudio;
@property(nonatomic) _Bool isRTCPFBEnabled; // @synthesize isRTCPFBEnabled;
@property(nonatomic) _Bool useAFRC; // @synthesize useAFRC;
@property _Bool shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID;
@property(nonatomic) float packetLateAndMissingRatio; // @synthesize packetLateAndMissingRatio;
@property(readonly, nonatomic) VCAudioPayload *currentAudioPayload; // @synthesize currentAudioPayload;
@property(nonatomic) int signalGrade; // @synthesize signalGrade;
@property(nonatomic) int signalRaw; // @synthesize signalRaw;
@property(nonatomic) int signalStrength; // @synthesize signalStrength;
@property(nonatomic) unsigned int roundTripTime; // @synthesize roundTripTime;
@property(nonatomic) double networkConditionsTimeoutInSeconds; // @synthesize networkConditionsTimeoutInSeconds;
@property(nonatomic) double packetLossRate; // @synthesize packetLossRate;
@property(copy, nonatomic) NSString *peerCN; // @synthesize peerCN;
@property(nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime;
@property(nonatomic) int natType; // @synthesize natType;
@property(readonly) _Bool audioIsPaused; // @synthesize audioIsPaused;
@property(retain, nonatomic) NSArray *mutedPeers; // @synthesize mutedPeers;
@property int bandwidthDownstream; // @synthesize bandwidthDownstream;
@property int bandwidthUpstream; // @synthesize bandwidthUpstream;
@property unsigned char inputMeter; // @synthesize inputMeter;
@property _Bool useUEP; // @synthesize useUEP;
@property _Bool useControlByte; // @synthesize useControlByte;
@property int preferredAudioCodec; // @synthesize preferredAudioCodec;
@property(readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate;
@property unsigned int lastReceived; // @synthesize lastReceived;
@property(retain, nonatomic) GKRingBuffer *ringBuf; // @synthesize ringBuf;
@property struct tagHANDLE *hAFRC; // @synthesize hAFRC;
@property struct tagHANDLE *hMediaQueue; // @synthesize hMediaQueue;
@property _Bool receivedSIPInvite; // @synthesize receivedSIPInvite;
@property _Bool isWaitingForICEResult; // @synthesize isWaitingForICEResult;
@property(readonly) _Bool isAudioRunning; // @synthesize isAudioRunning;
@property(retain) NSObject<VCCallSessionDelegate> *delegate; // @synthesize delegate;
@property long long sampleRate; // @synthesize sampleRate;
@property long long videoPayload; // @synthesize videoPayload;
@property long long state; // @synthesize state;
@property unsigned short maxPacketLength; // @synthesize maxPacketLength;
@property(retain) VCConnectionManager *connectionManager; // @synthesize connectionManager;
@property long long connectionChangeState; // @synthesize connectionChangeState;
@property struct tagHANDLE *rtpHandle; // @synthesize rtpHandle;
- (void)setupSecureDataChannel;
- (void)handleKeyExchangeCompleted;
- (void)updateCachedConnectionState;
- (void)handleFirstConnectionSetup:(id)arg1;
- (void)handleNewConnectionSetup:(id)arg1 isInitialConnection:(_Bool)arg2;
- (void)notifyDelegateActiveConnectionDidChange;
- (void)handlePrimaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)triggerInterfaceChange;
@property(readonly) _Bool isVideoRunning;
- (void)setPeerProtocolVersion:(unsigned int)arg1;
- (void)setSessionConferenceVisualRectangle:(struct CGRect)arg1 callID:(unsigned int)arg2;
- (void)setSessionConferenceState:(unsigned int)arg1 callID:(unsigned int)arg2;
- (unsigned int)currentAudioCap;
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
@property(readonly, nonatomic) int audioTierPayload;
@property(readonly, nonatomic) int audioTierPacketsPerBundle;
@property(readonly, nonatomic) int audioTierAudioBitrate;
@property(readonly, nonatomic) int audioTierNetworkBitrate;
@property(retain) VCCapabilities *capabilities;
- (unsigned int)primaryConnectionType;
@property(readonly) _Bool isSKEOptimizationEnabled;
- (_Bool)getRealAudioTxBitrate:(unsigned short *)arg1 RxBitrate:(unsigned short *)arg2 duplication:(unsigned short *)arg3;
- (_Bool)pullAudioSamples:(char *)arg1 timestamp:(unsigned int *)arg2 byteCount:(int *)arg3 sampleCount:(int *)arg4 lastReceivedAudioTime:(double *)arg5 padding:(char *)arg6 paddingLength:(char *)arg7 silence:(int *)arg8;
- (id)callMetadata;
- (id)localParticipantID;
- (id)remoteParticipantID;
- (void)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(_Bool)arg3;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)rcvdFirstRemoteFrame;
- (void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (_Bool)stillWantsToRelay;
- (_Bool)setPauseVideo:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setPauseVideo:(_Bool)arg1 force:(_Bool)arg2 error:(id *)arg3;
- (_Bool)setPauseAudio:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setPauseAudio:(_Bool)arg1 force:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isCallOngoing;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
@property _Bool isGKVoiceChat;
@property(readonly) int bundledPackets;
@property(readonly) int numBufferBytesAvailable;
@property int packetsPerBundle;
- (void)setRemoteCallInfoFromInviteDictionary:(id)arg1;
- (void)addLocalCallInfoToInviteDictionary:(id)arg1;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int *)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id *)arg5;
- (void)reportOperatingMode;
- (id)newMediaBlobWithRemoteMediaBlob:(id)arg1 localCallID:(unsigned int)arg2;
- (_Bool)cancel:(id)arg1;
- (_Bool)disconnect:(id)arg1 didRemoteCancel:(_Bool)arg2;
- (void)requestWRMNotification;
- (void)sendWRMStatusUpdate:(const CDStruct_8aeecdac *)arg1;
- (void)setWRMNotification:(CDStruct_d2860d30 *)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)reportWRMMetrics:(const CDStruct_0db8e210 *)arg1;
- (void)cleanupWRMClient;
- (void)setupWRMClient;
- (int)rtcpDescriptor;
- (void)handleReceivedPiggybackBlobLegacy:(id)arg1;
- (void)handleReceivedPiggybackBlobIDS:(id)arg1;
- (_Bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id *)arg8;
@property(readonly, nonatomic) _Bool isCaller;
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(_Bool)arg6;
- (int)sendAudioHeartbeat:(unsigned int)arg1;
- (int)sendAudioBundle:(_Bool)arg1 atTimeStamp:(unsigned int)arg2 nextInterval:(float)arg3;
- (void)sendThreadedAudio:(struct tagEncodedAudio *)arg1 buffer:(char *)arg2 bufferSize:(unsigned int)arg3;
- (float)nextAudioInterval:(int)arg1;
- (int)encodeAudio:(void *)arg1 numInputBytes:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5 isTalking:(_Bool)arg6;
- (_Bool)shouldUseDtx;
- (_Bool)isLocalOrRemoteOnCellular;
- (void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4;
- (void)cancelConnectionTimeoutTimer;
- (void)timeoutUnfinishedConnection;
- (void)dealloc;
- (_Bool)handshakeComplete:(struct SSLContext *)arg1 withError:(struct __CFError **)arg2;
- (void)updateLastReceivedPacket:(_Bool)arg1;
- (void)updateLastReceivedAudioTime;
- (void)updateLastReceivedPacketWithTimestamp:(double)arg1;
- (void)updateRemoteMediaStallState:(double)arg1;
@property(readonly) double networkQuality;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
- (void)primaryConnectionDidChangeTo:(id)arg1 oldConnection:(id)arg2;
- (void)handlePendingPrimaryConnectionChange;
- (void)schedulePrimaryConnectionChange:(id)arg1 oldConnection:(id)arg2;
- (void)resetVideoRulesForInterface:(int)arg1 videoReportingDictionary:(id)arg2;
- (id)getVideoRuleForVideoMode:(unsigned long long)arg1 interface:(int)arg2 sessionBitrate:(int *)arg3;
- (_Bool)chooseVideoPayloadForInterface:(int)arg1;
- (int)applyFeaturesListStringForPayload:(int)arg1;
- (id)getFeaturesListStringForPayload:(int)arg1;
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;
- (void)handleCellularMTUChanged:(unsigned short)arg1;
- (void)handleCellTechChange:(int)arg1;
- (void)updateMaxPktLength;
- (_Bool)evaluateEnableRRx:(int *)arg1;
- (_Bool)isBetterForSIPInviteWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 thanSession:(id)arg2;
- (void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(_Bool)arg4;
@property(readonly) _Bool videoIsPaused;
- (void)startAWDStats;
- (unsigned int)callID;
@property(nonatomic) _Bool useCompressedConnectionData;
@property(nonatomic) _Bool requiresWifi;
- (id)initWithDeviceRole:(int)arg1 transportType:(unsigned int)arg2;
- (id)init;
@property(readonly, copy) NSString *description;
- (void)vcSecureDataChannel:(id)arg1 messageType:(unsigned int)arg2 receivedData:(id)arg3;
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;
- (void)didReceiveCaptions:(id)arg1;
- (int)sipCallback:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void *)arg5 confIndex:(int *)arg6;
- (_Bool)disconnectInternal:(_Bool)arg1 disconnectError:(id)arg2 didRemoteCancel:(_Bool)arg3;
- (int)mapPacketMultiplexModeToSIPMode:(long long)arg1;
- (int)mapPacketMultiplexModeToRTPMode:(long long)arg1;
- (void)handleDuplicationEnabled:(_Bool)arg1 activeConnection:(id)arg2;
- (void)setDuplicationFlag:(_Bool)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2;
- (void)shouldSendBlackFrame:(_Bool)arg1;
- (void)sendBasebandCodecMessage;
- (void)disableSessionHealthMonitor;
- (void)enableSessionHealthMonitor;
- (void)logConnectionSuccess;
- (unsigned int)maxBitrateForConnectionType;
- (void)adjustBitrateForConnectionType;
- (void)setupBitrateNegotation;
- (_Bool)findFeatureString:(const char *)arg1 value:(char *)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char *)arg4;
- (const char *)matchedFeaturesStringForPayload:(int)arg1;
- (_Bool)setMatchedFeaturesString:(char *)arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3;
- (id)allPayloadsLocalFeaturesString;
- (id)allocLocalFeaturesString;
- (id)deriveAspectRatioFLS;
- (id)retrieveRawFeaturesString;
- (id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(_Bool)arg3;
- (void)logIdentity:(struct __SecIdentity *)arg1;
- (void)setLocalIdentityForKeyExchange;
- (int)Conference_SetBWEstMode:(_Bool)arg1 bFakeLargeFrameMode:(_Bool)arg2;
- (_Bool)doBandwidthDetection:(struct tagHANDLE *)arg1 error:(id *)arg2;
- (void)notifyDelegateSessionStarted;
- (void)doSipEndAction:(int)arg1 callID:(unsigned int)arg2 error:(id)arg3;
- (void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2;
- (void)disconnectWithNoRemotePackets:(long long)arg1;
- (void)doSipEndProc:(id)arg1;
- (unsigned int)videoRTPID;
- (unsigned int)audioRTPID;
- (_Bool)shouldNotifyDelegateDidStartBeforeAudioSetup;
- (void)sipConnectThreadProc:(id)arg1;
- (void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 withReason:(const char *)arg2;
- (_Bool)chooseDTXPayloads:(int *)arg1 count:(int)arg2;
- (_Bool)chooseSecondaryPayloads:(int *)arg1 count:(int)arg2;
- (_Bool)choosePayload:(int *)arg1 count:(int)arg2;
- (unsigned int)codecBitmapForPayloads:(int *)arg1 count:(int)arg2;
- (_Bool)setupAudioCodecWithPayload:(int)arg1;
- (id)addAudioPayload:(int)arg1;
- (void)setPayloadEmergencyTierSettings:(id)arg1;
- (void)setupAACELDPayload:(int)arg1;
- (_Bool)stopAFRC:(id *)arg1;
- (_Bool)startAFRC:(id *)arg1;
- (_Bool)stopMediaQueue:(id *)arg1;
- (_Bool)startMediaQueue:(id *)arg1;
- (void)getVideoSettings:(int)arg1 forInterface:(int)arg2 width:(int *)arg3 height:(int *)arg4 framerate:(int *)arg5 bitRate:(int *)arg6;
- (_Bool)stopVideo:(_Bool)arg1 error:(id *)arg2;
- (_Bool)stopVideoReceive:(id *)arg1 isPausing:(_Bool)arg2;
- (_Bool)stopVideoSend:(_Bool)arg1 error:(id *)arg2;
- (_Bool)startVideo:(_Bool)arg1 error:(id *)arg2;
- (_Bool)startVideoReceive:(id *)arg1;
- (_Bool)startVideoSend:(_Bool)arg1 error:(id *)arg2;
- (int)interfaceForCurrentCall;
- (_Bool)allocateLastInputSampleBuffer:(unsigned int)arg1;
- (unsigned int)maximumSamplesPerFrame;
- (unsigned int)maximumPayloadSize;
- (_Bool)chooseAudioNetworkBitrate;
- (void)useAudioTier:(id)arg1;
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;
- (void)updateAudioTxBitrate;
- (_Bool)setupAudioTierPicker;
- (_Bool)setupAudioEncoders;
- (void)removeUnusedAudioPayloads;
- (_Bool)setupAudioCookies;
- (void)sendCallingModeMessage;
- (void)setupAudioHeaderSize;
- (void)updateDeviceRole:(int)arg1;
- (void)enableAudio:(_Bool)arg1;
- (void)startAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopAudioIO:(CDUnknownBlockType)arg1;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)sipConnectWithError:(id *)arg1;
- (_Bool)setupCallerRTPChannelWithError:(id *)arg1;
- (_Bool)setMediaQueueStreamSettings;
- (_Bool)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (id)getCompatibleLocalFeaturesListForPayloads:(int *)arg1 count:(int)arg2;
- (int)getAllCompatibleVideoPayloads:(int **)arg1 forMediaType:(int)arg2;
- (_Bool)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg1;
- (_Bool)isValidVideoPayloadOverride:(id)arg1;
- (_Bool)chooseVideoPayload:(id)arg1 operatingMode:(int)arg2 isLocalOnCellular:(_Bool)arg3 isRemoteOnCellular:(_Bool)arg4;
- (_Bool)canNegotiateVideoPayload:(int)arg1 supportedPayloads:(id)arg2 isLocalOnCellular:(_Bool)arg3 isRemoteOnCellular:(_Bool)arg4;
- (_Bool)negotiateMaxBandwidth:(int *)arg1;
- (_Bool)negotiatePayloads:(int **)arg1 numPayloads:(int *)arg2 withError:(id *)arg3;
- (void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2;
- (void)getDecodePayloads:(int **)arg1 numPayloads:(int *)arg2 withPayload:(int)arg3 secondaryPayloads:(int *)arg4 numSecondaryPayloads:(int)arg5;
- (_Bool)createMediaQueueHandle:(id *)arg1;
- (_Bool)prepareSRTPWithError:(id *)arg1;
- (void)releaseRTPHandles;
- (_Bool)createRTPHandles:(id *)arg1;
- (_Bool)treatAsCellular;
- (_Bool)sendSIPInviteWithError:(id *)arg1;
- (_Bool)establishSIPDialogWithSDP:(id)arg1 error:(id *)arg2;
- (id)createInviteSDPWithError:(id *)arg1;
- (_Bool)canSendSIPInviteWithError:(id *)arg1;
- (void)getAllPayloadsForScreen:(int **)arg1 count:(int *)arg2;
- (void)getAllPayloadsForVideo:(int **)arg1 count:(int *)arg2;
- (void)getAllPayloadsForAudio:(int **)arg1 count:(int *)arg2 secondaryPayloads:(int **)arg3 secondaryCount:(int *)arg4;
- (int)handleIncomingWithCallID:(unsigned int)arg1 msgIn:(const char *)arg2 msgOut:(char *)arg3 optional:(void *)arg4 confIndex:(int *)arg5 error:(id *)arg6;
- (_Bool)startMediaWithPreNegotiatedSettings:(id *)arg1;
- (void)applyNegotiatedCaptionsSettings;
- (_Bool)applyNegotiatedVideoSettings:(id *)arg1;
- (_Bool)applyNegotiatedAudioSettings:(id *)arg1;
- (void)applyNegotiatedSettings;
- (void)negotiateMediaMaxBandwidth;
- (_Bool)createSDP:(int *)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int *)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int *)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(struct imageTag **)arg10 imageSendCount:(int *)arg11 imageSizesRecv:(struct imageTag **)arg12 imageRecvCount:(int *)arg13 sdp:(char *)arg14 numSDPBytes:(int *)arg15 error:(id *)arg16;
- (void)addScreenConfigToSDP:(id)arg1;
- (void)setupCalleeSIPStartTimeout:(float)arg1;
- (void)resetState;
- (void)unlock;
- (void)lock;
- (void)processSIPMessage:(char *)arg1 msgOut:(char *)arg2 optional:(void *)arg3 confIndex:(int *)arg4;
- (void)remotePauseDidChangeToState:(_Bool)arg1 forVideo:(_Bool)arg2;
- (void)sendTimings;
- (void)logPerfTimings;
- (void)stopPausedHeartbeat;
- (void)startPausedHeartbeat;
- (void)cleanupMedia;
- (void)reportDashboardEndResult:(_Bool)arg1;
- (long long)calculateSIPEndAction:(_Bool)arg1 currentState:(long long)arg2 error:(id)arg3;
- (void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(_Bool)arg2 error:(id)arg3;
- (struct __SecIdentity *)retrieveIdentity;
- (void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(_Bool)arg3 capabilities:(id)arg4;
- (void)setupDTLSDefaults;
- (void)logDetailedNetworkInformation;
- (void)updateNetworkCheckHint:(double)arg1;
- (void)initWithRelevantStorebagEntries;
- (int)setupEncryptionWithKey:(const struct __CFData **)arg1 confIndex:(int *)arg2;
- (id)newSKEBlobWithRemoteSKEBlob:(id)arg1;
- (_Bool)configureLegacyTransportWithInviteInfo:(id)arg1 error:(id *)arg2;
- (int)setSKEBlobOnTransportSession;
- (_Bool)setupIDSConnectionForCallID:(unsigned int)arg1 destination:(id)arg2 socket:(int)arg3 error:(id *)arg4;
- (void)handleMediaReceivedOverRelayLink;
- (void)handleMediaReceivedOverPeerToPeerLink;
- (int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned int *)arg2;
- (void)setupCellTechChangeMessages;
- (void)setupPiPStateChangeMessage;
- (void)setupHandoverCandidateChangeMessage;
- (void)setupBasebandCodecInfoMessages;
- (void)setupCallingModeMessages;
- (void)setupAudioOnOffStateMessages;
- (void)setupAudioPausedHBMessages;
- (void)setupVideoPauseMessages;
- (void)setupAudioPauseMessages;
- (void)setupMessaging;
- (void)transportSession:(id)arg1 sendRelayResponse:(id)arg2;
- (void)transportSession:(id)arg1 initiateRelayRequest:(id)arg2;
- (void)transportSession:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)transportSession:(id)arg1 connectionSetupDataDidChange:(id)arg2;
- (void)callAlarmsWithRTPTimeStamp:(unsigned int)arg1;
- (void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featuresListString:(id)arg3;
- (id)newRemoteScreenAttributesForOrientation:(int)arg1;
- (void)updateVideoQualityNotification:(double)arg1;
- (double)sessionReceivingBitrate;
- (double)sessionReceivingFramerate;
- (double)sessionTransmittingBitrate;
- (double)sessionTransmittingFramerate;
- (_Bool)initializeVideoReceiver:(id *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (_Bool)initializeVideoTransmitter:(id *)arg1 encodeRule:(id)arg2 unpausing:(_Bool)arg3 reportingAgent:(struct opaqueRTCReporting *)arg4;
- (unsigned int)parameterSetForPayload:(int)arg1;
- (void)onPlayVideo:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (_Bool)onCaptureFrame:(struct __CVBuffer *)arg1 audioTS:(unsigned int)arg2 audioHT:(double)arg3 videoHT:(CDStruct_1b6d18a9)arg4 droppedFrames:(int)arg5 cameraBits:(unsigned char)arg6;
- (void)processBlackFrame:(struct __CVBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

