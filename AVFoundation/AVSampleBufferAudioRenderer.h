//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVMediaDataRequesterConsumer-Protocol.h>
#import <AVFoundation/AVQueuedSampleBufferRendering-Protocol.h>
#import <AVFoundation/AVQueuedSampleBufferRenderingInternal-Protocol.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering>
{
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;
}

+ (id)sampleBufferAudioRenderer;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
- (void)flushFromSourceTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)flush;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)setRenderSynchronizer:(id)arg1 error:(id *)arg2;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (_Bool)isMuted;
- (void)setMuted:(_Bool)arg1;
- (id)scheduledAudioParameters;
- (void)setScheduledAudioParameters:(id)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)_transitionToFailedStatusWithOSStatus:(int)arg1;
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)_triggerMediaRequestCallback;
- (int)_initializeTimebase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
