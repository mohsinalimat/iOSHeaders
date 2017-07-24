//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaStreamSyncDestination-Protocol.h>

@class NSString, VCMediaStreamStats, VCMediaStreamSynchronizer, VCVideoStreamRateAdaptation, VideoAttributes;
@protocol OS_dispatch_queue, VCMediaStreamSyncSource, VCVideoStreamReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoStreamReceiver : NSObject <VCMediaStreamSyncDestination>
{
    struct tagHANDLE *_hRTP;
    struct OpaqueCMMemoryPool *_blockBufferMemoryPool;
    struct __CFAllocator *_blockBufferMemoryPoolAllocator;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    _Bool _receivedFirstPacket;
    _Bool _receivedFirstRemoteFrame;
    unsigned short _lastSequenceNumber;
    int _sequenceNumberOutOfOrder;
    unsigned char _firSequenceNumber;
    double _lastFIRArrivalTime;
    VCVideoStreamRateAdaptation *_rateAdaptation;
    struct opaqueCMBufferQueue *_videoQueue;
    unsigned int _mostRecentTimestamp;
    unsigned int _lastVideoTimestamp;
    double _lastReceivedVideoRTPPacketTime;
    double _lastReceivedVideoRTCPPacketTime;
    unsigned int _videoTimestampWrapCount;
    struct opaqueCMFormatDescription *_formatDescription;
    id <VCVideoStreamReceiverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_videoStreamReceiverQueue;
    struct OpaqueFigThread *_networkReceiveThread;
    _Bool _runNetworkReceiveThread;
    int _sRecvReset;
    struct VideoPacketBuffer_t *_videoPacketBuffer;
    VideoAttributes *_remoteVideoAttributes;
    VCMediaStreamSynchronizer *_mediaStreamSynchronizer;
    id _syncSource;
    int _remoteVideoOrientation;
    int _remoteVideoCamera;
    _Bool _enableCVO;
    unsigned long long _cvoExtensionID;
    unsigned long long _lastKeyFrameSampleBufferSize;
    CDStruct_1b6d18a9 _lastFrameTime;
    CDStruct_1b6d18a9 _lastDisplayTime;
    VCMediaStreamStats *_stats;
    double _reportingIntervalStartTime;
    double _reportingLastUpdateTime;
    unsigned int _receivedBytes;
    double _roundTripTime;
    unsigned int _videoStallDurationMillis;
    double _videoStallStartTime;
    struct opaqueRTCReporting *_reportingAgent;
    _Bool _enableReceiveBitstreamDump;
}

@property(readonly) double lastReceivedVideoRTCPPacketTime; // @synthesize lastReceivedVideoRTCPPacketTime=_lastReceivedVideoRTCPPacketTime;
@property(readonly) double lastReceivedVideoRTPPacketTime; // @synthesize lastReceivedVideoRTPPacketTime=_lastReceivedVideoRTPPacketTime;
@property double roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property int remoteVideoOrientation; // @synthesize remoteVideoOrientation=_remoteVideoOrientation;
@property(nonatomic) id <VCVideoStreamReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;
- (int)showDecodedFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)handleRemoteVideoAttributesChange:(struct __CVBuffer *)arg1;
- (void)handleAlarmForTimeStamp:(unsigned int)arg1;
- (void)dequeueAndDecodeForTimestamp:(unsigned int)arg1;
- (_Bool)canDequeue:(struct opaqueCMBufferQueue *)arg1 forTimestamp:(unsigned int)arg2;
- (int)decodeFrame:(struct opaqueCMSampleBuffer *)arg1 showFrame:(_Bool)arg2;
- (void)teardownDecodeSession:(_Bool)arg1;
- (void)createDecodeSession:(struct opaqueCMFormatDescription *)arg1;
- (void)updateVideoStallStatus:(_Bool)arg1;
- (int)scheduleDecodeForFrameWithBuffer:(char *)arg1 size:(unsigned long long)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 showFrame:(_Bool)arg5;
- (int)processVideoRTCP;
- (void)processReceptionReportBlock:(struct tagRTCP_RRB *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)rtcpSendIntervalElapsed;
- (int)processVideoRTP;
- (void)scheduleVideoDecode:(unsigned int *)arg1 schedule_n:(int)arg2;
- (void)scheduleDecodeForTimestamp:(unsigned int)arg1;
- (void)updateSequenceNumber:(unsigned short)arg1;
- (void *)networkReceivePackets;
- (int)stopNetworkReceiveThread;
- (int)startNetworkReceiveThread;
@property(nonatomic) id <VCMediaStreamSyncSource> syncSource; // @synthesize syncSource=_syncSource;
- (void)stopSynchronization;
- (_Bool)startSynchronization:(id)arg1;
- (void)pauseVideo;
- (void)stopVideo;
- (void)startVideo;
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithRTP:(struct tagHANDLE *)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3 dumpID:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

