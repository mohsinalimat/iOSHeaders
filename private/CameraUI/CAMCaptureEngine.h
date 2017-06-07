//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMPanoramaProcessorDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCapturePhotoOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CAMCaptureMovieFileOutput, CAMMemoizationCache, CAMPanoramaConfiguration, CAMPanoramaOutput, CAMPanoramaProcessor, CAMPowerController, CIContext, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CAMCaptureEngine : NSObject <CAMPanoramaProcessorDelegate>
{
    AVCaptureDevice *_audioCameraDevice;
    AVCaptureDeviceInput *_audioCaptureDeviceInput;
    CAMPanoramaConfiguration *_panoramaConfiguration;
    AVCaptureStillImageOutput *_legacyStillImageOutput;
    AVCapturePhotoOutput *_stillImageOutput;
    CAMCaptureMovieFileOutput *_movieFileOutput;
    CAMPanoramaOutput *_panoramaVideoDataOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureVideoDataOutput *_effectsPreviewVideoDataOutput;
    _Bool _interrupted;
    _Bool _managedDevicesLockedForConfiguration;
    _Bool __performingRecovery;
    unsigned int __panoramaAssertionIdentifier;
    CAMMemoizationCache *__captureEngineDeviceCache;
    long long __engineOptions;
    AVCaptureSession *__captureSession;
    NSObject<OS_dispatch_queue> *__captureSessionQueue;
    AVCaptureVideoPreviewLayer *__videoPreviewLayer;
    CAMPowerController *__powerController;
    AVCaptureDevice *_cameraDevice;
    NSMutableDictionary *__sessionQueueRegisteredStillImageRequests;
    NSMutableDictionary *__sessionQueueRequestsBeingRecorded;
    NSObject<OS_dispatch_queue> *__captureServicesQueue;
    NSMutableArray *__servicesQueueCaptureServices;
    NSObject<OS_dispatch_queue> *__metadataObjectsQueue;
    NSObject<OS_dispatch_queue> *__panoramaSampleBufferQueue;
    NSObject<OS_dispatch_queue> *__panoramaSubgraphQueue;
    struct _CAImageQueue *__panoramaImageQueue;
    CAMPanoramaProcessor *__panoramaProcessor;
    NSObject<OS_dispatch_semaphore> *__panoramaFirstImageQueueUpdateSemaphore;
    NSObject<OS_dispatch_queue> *__panoramaFirstImageQueueUpdateSemaphoreQueue;
    NSObject<OS_dispatch_queue> *__effectsPreviewSurfaceFilteringQueue;
    CIContext *__effectsPreviewSurfaceFilteringContext;
    NSObject<OS_dispatch_queue> *__effectsPreviewSampleBufferQueue;
    NSHashTable *__effectsPreviewSampleBufferDelegates;
    NSObject<OS_dispatch_queue> *__recoveryMutexQueue;
    unsigned long long __numberOfRecoveryAttempts;
}

+ (void)preheatCaptureResources;
@property(nonatomic, setter=_setNumberOfRecoveryAttempts:) unsigned long long _numberOfRecoveryAttempts; // @synthesize _numberOfRecoveryAttempts=__numberOfRecoveryAttempts;
@property(nonatomic, getter=_isPerformingRecovery, setter=_setPerformingRecovery:) _Bool _performingRecovery; // @synthesize _performingRecovery=__performingRecovery;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_recoveryMutexQueue; // @synthesize _recoveryMutexQueue=__recoveryMutexQueue;
@property(readonly, nonatomic) NSHashTable *_effectsPreviewSampleBufferDelegates; // @synthesize _effectsPreviewSampleBufferDelegates=__effectsPreviewSampleBufferDelegates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_effectsPreviewSampleBufferQueue; // @synthesize _effectsPreviewSampleBufferQueue=__effectsPreviewSampleBufferQueue;
@property(readonly, nonatomic) CIContext *_effectsPreviewSurfaceFilteringContext; // @synthesize _effectsPreviewSurfaceFilteringContext=__effectsPreviewSurfaceFilteringContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_effectsPreviewSurfaceFilteringQueue; // @synthesize _effectsPreviewSurfaceFilteringQueue=__effectsPreviewSurfaceFilteringQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaFirstImageQueueUpdateSemaphoreQueue; // @synthesize _panoramaFirstImageQueueUpdateSemaphoreQueue=__panoramaFirstImageQueueUpdateSemaphoreQueue;
@property(retain, nonatomic, setter=_setPanoramaFirstImageQueueUpdateSemaphore:) NSObject<OS_dispatch_semaphore> *_panoramaFirstImageQueueUpdateSemaphore; // @synthesize _panoramaFirstImageQueueUpdateSemaphore=__panoramaFirstImageQueueUpdateSemaphore;
@property(retain, nonatomic, setter=_setPanoramaProcessor:) CAMPanoramaProcessor *_panoramaProcessor; // @synthesize _panoramaProcessor=__panoramaProcessor;
@property(nonatomic, setter=_setPanoramaImageQueue:) struct _CAImageQueue *_panoramaImageQueue; // @synthesize _panoramaImageQueue=__panoramaImageQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaSubgraphQueue; // @synthesize _panoramaSubgraphQueue=__panoramaSubgraphQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaSampleBufferQueue; // @synthesize _panoramaSampleBufferQueue=__panoramaSampleBufferQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_metadataObjectsQueue; // @synthesize _metadataObjectsQueue=__metadataObjectsQueue;
@property(readonly, nonatomic) NSMutableArray *_servicesQueueCaptureServices; // @synthesize _servicesQueueCaptureServices=__servicesQueueCaptureServices;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureServicesQueue; // @synthesize _captureServicesQueue=__captureServicesQueue;
@property(readonly, nonatomic) NSMutableDictionary *_sessionQueueRequestsBeingRecorded; // @synthesize _sessionQueueRequestsBeingRecorded=__sessionQueueRequestsBeingRecorded;
@property(readonly, nonatomic) NSMutableDictionary *_sessionQueueRegisteredStillImageRequests; // @synthesize _sessionQueueRegisteredStillImageRequests=__sessionQueueRegisteredStillImageRequests;
@property(nonatomic, getter=areManagedDevicesLockedForConfiguration) _Bool managedDevicesLockedForConfiguration; // @synthesize managedDevicesLockedForConfiguration=_managedDevicesLockedForConfiguration;
@property(retain, nonatomic) AVCaptureDevice *cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(nonatomic, setter=_setPanoramaAssertionIdentifier:) unsigned int _panoramaAssertionIdentifier; // @synthesize _panoramaAssertionIdentifier=__panoramaAssertionIdentifier;
@property(readonly, nonatomic) CAMPowerController *_powerController; // @synthesize _powerController=__powerController;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *_videoPreviewLayer; // @synthesize _videoPreviewLayer=__videoPreviewLayer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureSessionQueue; // @synthesize _captureSessionQueue=__captureSessionQueue;
@property(readonly, nonatomic) AVCaptureSession *_captureSession; // @synthesize _captureSession=__captureSession;
@property(readonly, nonatomic) long long _engineOptions; // @synthesize _engineOptions=__engineOptions;
@property(readonly, nonatomic) CAMMemoizationCache *_captureEngineDeviceCache; // @synthesize _captureEngineDeviceCache=__captureEngineDeviceCache;
@property(nonatomic, getter=isInterrupted, setter=_setInterrupted:) _Bool interrupted; // @synthesize interrupted=_interrupted;
- (void).cxx_destruct;
- (id)effectsPreviewVideoDataOutput;
- (id)metadataOutput;
- (id)panoramaVideoDataOutput;
- (id)movieFileOutput;
- (id)stillImageOutput;
- (id)legacyStillImageOutput;
- (id)audioCaptureDeviceInput;
- (id)_correspondingCaptureEngineDeviceForCaptureInput:(id)arg1;
- (id)panoramaConfiguration;
- (id)audioCaptureDevice;
- (id)_captureEngineDeviceForDevice:(long long)arg1;
- (id)backDuoCameraDevice;
- (id)backTelephotoCameraDevice;
- (id)backCameraDevice;
- (id)frontCameraDevice;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_requestFromPossibleCaptureOutput:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)_updateEffectsSubgraph;
- (void)panoramaProcessor:(id)arg1 didProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withStatus:(int)arg3 forRequest:(id)arg4;
- (void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessary;
- (void)stopPanoramaCapture;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)changeToPanoramaDirection:(long long)arg1;
- (void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
- (void)_subgraphQueueCreatePanoramaProcessorIfNecessary;
- (void)_notifyServicesOfPanoramaConfigurationChangeWithDirection:(long long)arg1;
- (void)_sessionQueuePanoramaTeardown;
- (void)_sessionQueuePanoramaSetup;
- (_Bool)_updatePanoramaSubgraphForEnteringBackground:(_Bool)arg1;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (id)_validateVideoAtURL:(id)arg1 withCaptureError:(id)arg2 isVideoComplement:(_Bool)arg3 stillImageDisplayTime:(CDStruct_1b6d18a9)arg4 reportedDuration:(CDStruct_1b6d18a9)arg5 outActualDuration:(CDStruct_1b6d18a9 *)arg6 outVideoRecordingStoppedReason:(long long *)arg7;
- (void)_captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 forVideoCaptureRequest:(id)arg4 videoZoomFactor:(double)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)stopRecording;
- (void)registerVideoCaptureRequest:(id)arg1;
- (void)_performPostprocessingForRequest:(id)arg1 withStillImageResult:(id)arg2 filter:(id)arg3;
- (void *)_newFilteredSurfaceFromSurface:(void *)arg1 filter:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 photoDisplayTime:(CDStruct_1b6d18a9)arg4 resolvedSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingOriginalPhotoSurface:(const void *)arg2 originalPhotoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(const void *)arg4 metadata:(id)arg5 resolvedSettings:(id)arg6 error:(id)arg7;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSurface:(const void *)arg2 photoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(const void *)arg4 metadata:(id)arg5 resolvedSettings:(id)arg6 error:(id)arg7;
- (void)_didFinishProcessingStillImageSurface:(void *)arg1 ofSize:(unsigned long long)arg2 withPreviewSurface:(void *)arg3 metadata:(id)arg4 forSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2;
- (void)completeLegacyStillImageCaptureRequest:(id)arg1 withResult:(id)arg2;
- (void)registerLegacyStillImageCaptureRequest:(id)arg1;
- (void)_teardownKeyValueObservingForLegacyStillImageOutput;
- (void)_setupKeyValueObservingForLegacyStillImageOutput;
- (void)_notifyServicesOfCompletedCaptureRequest:(id)arg1 withStillImageResult:(id)arg2;
- (void)updateImageQueueForPanoramaPreviewView:(id)arg1;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
- (void)enumerateCaptureServicesUsingBlock:(CDUnknownBlockType)arg1;
- (void)unregisterCaptureService:(id)arg1;
- (void)registerCaptureService:(id)arg1;
- (void)enqueueCommand:(id)arg1;
- (void)_executeCommand:(id)arg1 withContext:(id)arg2;
- (void)_updateCurrentCameraDevice;
- (void)_unlockAllEngineManagedDevices;
- (void)_unlockManagedCaptureDevice:(id)arg1;
- (_Bool)_lockAllEngineManagedDevices;
- (_Bool)_lockManagedCapturedDevice:(id)arg1;
- (void)_commitSessionConfigurationIfNecessary;
- (void)_beginSessionConfigurationIfRequiredByCommand:(id)arg1 withContext:(id)arg2;
- (id)_accumulatedUserInfoFromCommand:(id)arg1;
- (_Bool)_isSessionModificationRequiredByCommand:(id)arg1;
- (void)_updateContext:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_scheduleDelayedRecoveryCheckIfNecessary;
- (void)_scheduleDelayedSessionNonstartRecovery;
- (void)_cancelDelayedSessionNonstartRecovery;
- (void)_validateSessionRecovery;
- (void)_handleFailedSessionRecoveryAttemptAfterDelay:(_Bool)arg1;
- (void)_markSessionRecoveryAsRecovered;
- (void)_recoverFromSessionRuntimeError;
- (double)_delayForRecoveryAttempt:(unsigned long long)arg1;
- (void)_handleSessionInterruptionEnded:(id)arg1;
- (void)_handleSessionInterruption:(id)arg1;
- (void)_performSessionRuntimeRecovery:(id)arg1;
- (void)_performSessionNonstartRecoveryIfNeeded;
- (void)_handleSessionRuntimeError:(id)arg1;
- (void)_handleSessionDidStopRunning:(id)arg1;
- (void)_handleSessionDidStartRunning:(id)arg1;
- (void)stop;
- (void)start;
- (_Bool)_shouldStartSessionOnConfigurationChanges;
- (void)dealloc;
- (id)initWithOptions:(long long)arg1;
- (id)initWithPowerController:(id)arg1 options:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

