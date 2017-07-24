//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>

@class NSString, VCAudioIO, VCAudioPayload;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTTYDevice : NSObject <VCMediaStreamProtocol, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate>
{
    int _clientPid;
    struct AudioStreamBasicDescription vpioFormat;
    unsigned int _vpioSamplesPerFrame;
    int deviceRole;
    _Bool isValid;
    NSObject<VCMediaStreamDelegate> *delegate;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    struct _opaque_pthread_mutex_t sessionLock;
    int state;
    VCAudioPayload *_currentAudioPayload;
    VCAudioIO *_audioIO;
    struct SoundDec_t *_decoder;
    struct opaqueCMSimpleQueue *_charQueue;
    struct tagVCMemoryPool *_characterPool;
}

@property(nonatomic) NSObject<VCMediaStreamDelegate> *delegate; // @synthesize delegate;
@property int deviceRole; // @synthesize deviceRole;
@property _Bool isValid; // @synthesize isValid;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)setCanProcessAudio:(_Bool)arg1;
- (_Bool)canProcessAudio;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)unlock;
- (void)lock;
- (void)setPause:(_Bool)arg1;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)sendCharater:(unsigned short)arg1;
- (void)startVirtualTTYWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithMode:(long long)arg1 clientPid:(int)arg2;
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

