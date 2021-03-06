//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

#import <AVFoundation/AVCaptureDataOutputDelegateOverride-Protocol.h>

@class AVCaptureVideoDataOutputInternal, NSArray, NSDictionary, NSObject, NSString;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>
{
    AVCaptureVideoDataOutputInternal *_internal;
}

+ (id)supportedVideoSettingsKeys;
+ (id)new;
+ (void)initialize;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (unsigned int)requiredOutputFormatForConnection:(id)arg1;
- (_Bool)hasRequiredOutputFormatForConnection:(id)arg1;
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (_Bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
@property(nonatomic) _Bool alwaysDiscardsLateVideoFrames;
@property(nonatomic) CDStruct_1b6d18a9 minFrameDuration;
- (void)_setMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (id)recommendedVideoSettingsForVideoCodecType:(id)arg1 assetWriterOutputFileType:(id)arg2;
- (id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;
@property(copy, nonatomic) NSDictionary *videoSettings;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (int)outputFormat;
- (_Bool)usesPreviewSizedBuffers;
@property(readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property(readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

