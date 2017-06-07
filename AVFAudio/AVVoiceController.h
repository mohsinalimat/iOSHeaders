//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSDictionary, NSString;
@protocol AVVoiceControllerPlaybackDelegate, AVVoiceControllerRecordDelegate, Endpointer;

@interface AVVoiceController : NSObject
{
    void *_impl;
    unsigned long long _alertStartTime;
}

@property(readonly) unsigned long long alertStartTime; // @synthesize alertStartTime=_alertStartTime;
@property(getter=isStopOnEndpointEnabled) _Bool stopOnEndpointEnabled;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
@property(getter=isMeteringEnabled) _Bool meteringEnabled;
@property float playbackVolume;
- (unsigned long long)getAlertStartTime;
@property float alertVolume;
@property(readonly, getter=isRecording) _Bool recording;
@property(readonly, getter=isPlaying) _Bool playing;
- (_Bool)setPlaybackBufferDuration:(double)arg1;
- (double)getPlaybackBufferDuration;
@property(readonly) NSDictionary *playbackSettings;
@property id <AVVoiceControllerPlaybackDelegate> playbackDelegate; // @dynamic playbackDelegate;
@property double recordEndWaitTime;
@property double recordInterspeechWaitTime;
@property double recordStartWaitTime;
@property int recordEndpointMode;
@property(retain) id <Endpointer> endpointerDelegate;
- (_Bool)setRecordBufferDuration:(double)arg1;
- (double)getRecordBufferDuration;
@property(readonly) NSDictionary *recordSettings;
@property id <AVVoiceControllerRecordDelegate> recordDelegate; // @dynamic recordDelegate;
- (void)stopPlaying;
- (_Bool)startPlaying;
- (_Bool)preparePlaybackFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)preparePlaybackWithSettings:(id)arg1 error:(id *)arg2;
- (void)stopRecording;
- (_Bool)startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)startRecordingAtTime:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)startRecording:(id *)arg1;
- (_Bool)startRecording;
- (int)doStartRecordingAtTime:(unsigned long long)arg1 behavior:(id)arg2;
- (_Bool)playRecordStartingAlertAndResetEndpointer;
- (void)resetEndpointer;
- (_Bool)playAlertSoundForType:(int)arg1;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (_Bool)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;
- (_Bool)willAcceptContext:(id)arg1;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (void)releaseAudioSession;
- (void)dealloc;
- (void)finalize;
- (void)prewarmAudioSession;
- (id)initWithContext:(id)arg1 error:(id *)arg2;
- (void)endPlaybackInterruption;
- (void)beginPlaybackInterruption;
- (void)endRecordInterruption;
- (void)beginRecordInterruptionWithContext:(id)arg1;
- (void)beginRecordInterruption;
- (void)decodeError;
- (void)finishedPlaying;
- (void)playbackBufferReceived:(struct MyAudioQueueBuffer *)arg1;
- (void)beganPlaying;
- (void)encodeError;
- (void)endpointDetected;
- (void)interspeechPointDetected;
- (void)startpointDetected;
- (void)finishedRecording;
- (void)recordBufferReceived:(struct MyAudioQueueBuffer *)arg1 atTime:(unsigned long long)arg2;
- (void)lpcmRecordBufferReceived:(struct AudioQueueBuffer *)arg1 atTime:(unsigned long long)arg2;
- (void)beganRecording;
- (void)handleMediaServerReset:(id)arg1;
- (void)handleMediaServerDeath:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)hardwareConfigChanged;
- (void)removeSessionNotifications;
- (void)setSessionNotifications;
- (struct ControllerImpl *)impl;
@property(readonly) AVAudioFormat *pcmRecordBufferFormat;
@property(getter=isSynchronousCallbackEnabled) _Bool synchronousCallbackEnabled;
@property(getter=isStopOnBargeInEnabled) _Bool stopOnBargeInEnabled;
@property(getter=isBargeInDetectEnabled) _Bool bargeInDetectEnabled;
@property(readonly) NSDictionary *voiceTriggerInfo;
@property(readonly) unsigned long long lastRecordStartTime;
@property(readonly, copy) NSString *playbackRoute;
@property(readonly, copy) NSString *recordRoute;

@end
