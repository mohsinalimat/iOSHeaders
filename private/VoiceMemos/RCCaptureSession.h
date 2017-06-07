//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCCaptureOutputWriterDelegate-Protocol.h>
#import <VoiceMemos/RCWaveformDataSourceObserver-Protocol.h>

@class NSDate, NSHashTable, NSString, RCAVState, RCAudioSessionRoutingAssertion, RCCaptureInputDevice, RCCaptureInputWaveformDataSource, RCCaptureOutputWriter;
@protocol OS_dispatch_group;

@interface RCCaptureSession : NSObject <RCCaptureOutputWriterDelegate, RCWaveformDataSourceObserver>
{
    RCCaptureOutputWriter *_captureOutputWriter;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_group> *_endCaptureTaskGroup;
    RCAudioSessionRoutingAssertion *_captureRouteAssertion;
    long long _sessionCaptureState;
    NSString *_sessionRouteName;
    NSDate *_captureStartDate;
    _Bool _handledFinishedCapturingAfterCompletionSound;
    _Bool _handlingDidFinishCapturing;
    _Bool _deleteCapturedOutWhenFinished;
    _Bool _destinationShouldBeDeleted;
    _Bool _captureBeginSoundEffectDisabled;
    _Bool _captureEndSoundEffectDisabled;
    NSHashTable *_weakObservers;
    RCCaptureInputDevice *_inputDevice;
    RCCaptureInputWaveformDataSource *_captureWaveformDataSource;
}

+ (void)playCaptureDidFinishSoundEffectWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)playCaptureWillStartSoundEffectWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) RCCaptureInputWaveformDataSource *captureWaveformDataSource; // @synthesize captureWaveformDataSource=_captureWaveformDataSource;
@property(readonly, nonatomic) RCCaptureInputDevice *inputDevice; // @synthesize inputDevice=_inputDevice;
- (void).cxx_destruct;
- (void)_setDisableSBMediaHUD:(_Bool)arg1;
- (_Bool)_openAVCaptureSessionAndWaitUntilRunning;
- (_Bool)_attachInputToCaptureSession:(id)arg1;
- (void)_closeCaptureSession;
- (void)_deleteCaptureDestinationAndPostDidEndNotification:(id)arg1;
- (void)_onMainQueueHandleCaptureDidFinishCapturingAfterCompletionSound;
- (_Bool)_handleFinishWritingByRestartingCaptureForError:(id)arg1 testOnly:(_Bool)arg2;
- (void)_handleCaptureSessionDidError:(id)arg1;
- (void)_beginAVCapturingToDestinationInitiallyPaused:(_Bool)arg1;
- (void)_setPostPrepareRequestedState:(long long)arg1;
- (void)_postToObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateCaptureSessionObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_captureInputDeviceRouteDidChangeNotification:(id)arg1;
- (void)_captureInputDeviceAvailabilityDidChangeNotification:(id)arg1;
- (void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)disableCaptureEndSoundEffect;
- (void)disableCaptureBeginSoundEffect;
@property(readonly) double storeDemoTimeLimit;
@property(readonly, nonatomic) RCAVState *AVState;
@property(readonly, nonatomic) _Bool isCaptureSessionFinished;
- (_Bool)isCapturePaused;
- (_Bool)isCaptureActive;
- (_Bool)isPreparing;
@property(readonly, nonatomic) double captureDestinationComposedDuration;
- (void)deleteCapturedOutWhenFinished;
- (void)finishCapturing;
- (void)resumeCapturing;
- (_Bool)canResumeCapturingAtCompositionDestinationTime:(double)arg1;
- (void)pauseCapturing;
- (void)prepareToCaptureWithPreparedHandler:(CDUnknownBlockType)arg1;
- (void)removeCaptureSessionObserver:(id)arg1;
- (void)addCaptureSessionObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithInputDevice:(id)arg1 captureWaveformDataSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

