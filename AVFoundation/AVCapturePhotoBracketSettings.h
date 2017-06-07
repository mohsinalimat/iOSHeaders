//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings
{
    AVCapturePhotoBracketSettingsInternal *_bracketSettingsInternal;
}

+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadata:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieFileURL:(id)arg1;
- (void)setAutoBravoImageFusionEnabled:(_Bool)arg1;
- (void)setAutoDualCameraFusionEnabled:(_Bool)arg1;
- (void)setAutoStillImageStabilizationEnabled:(_Bool)arg1;
- (void)setOriginalPhotoDeliveryEnabled:(_Bool)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setFlashMode:(long long)arg1;
@property(nonatomic, getter=isLensStabilizationEnabled) _Bool lensStabilizationEnabled;
@property(readonly, nonatomic) NSArray *bracketedSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)_initWithFormat:(id)arg1 rawPixelFormatType:(unsigned int)arg2 bracketedSettings:(id)arg3 uniqueID:(long long)arg4 exceptionReason:(id *)arg5;

@end
