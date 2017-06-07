//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class AVVCAudioBuffer, CSAudioChunk, CSSpeechManager, NSDictionary, NSError;

@protocol CSSpeechManagerDelegate <NSObject>
- (void)speechManagerDidStopForwarding:(CSSpeechManager *)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(CSSpeechManager *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
- (void)speechManagerLPCMRecordBufferAvailable:(CSSpeechManager *)arg1 chunk:(CSAudioChunk *)arg2;
- (void)speechManagerRecordBufferAvailable:(CSSpeechManager *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional
- (NSDictionary *)speechManagerRecordingContext;
@end
