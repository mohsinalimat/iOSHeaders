//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class AVVCAudioBuffer, CSAudioRecorder, NSData, NSDictionary, NSError;

@protocol CSAudioRecorderDelegate <NSObject>
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 buffer:(NSData *)arg2 atTime:(unsigned long long)arg3;

@optional
- (void)voiceTriggerDetectedOnAOP:(NSDictionary *)arg1;
- (void)audioRecorderEndRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1 withContext:(NSDictionary *)arg2;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(CSAudioRecorder *)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderDidStopRecording:(CSAudioRecorder *)arg1 forReason:(long long)arg2;
- (void)audioRecorderDidStartRecording:(CSAudioRecorder *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
@end

