//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class AVCaptureSession, NSArray;

@interface ARConfiguration : NSObject <NSCopying>
{
    _Bool _providesAudioData;
    long long _worldAlignment;
    NSArray *_customSensors;
    long long _cameraPosition;
    unsigned long long _lightEstimation;
    AVCaptureSession *_customCaptureSession;
    long long _latencyFrameCount;
}

+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id *)arg2 fileURL:(id)arg3;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id *)arg2;
+ (_Bool)isSupported;
@property(nonatomic) long long latencyFrameCount; // @synthesize latencyFrameCount=_latencyFrameCount;
@property(retain, nonatomic) AVCaptureSession *customCaptureSession; // @synthesize customCaptureSession=_customCaptureSession;
@property(nonatomic) unsigned long long lightEstimation; // @synthesize lightEstimation=_lightEstimation;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(retain, nonatomic) NSArray *customSensors; // @synthesize customSensors=_customSensors;
@property(nonatomic) _Bool providesAudioData; // @synthesize providesAudioData=_providesAudioData;
@property(nonatomic) long long worldAlignment; // @synthesize worldAlignment=_worldAlignment;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_descriptionWithoutBrackets;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)techniques;
- (long long)latencyFrameCountAdjustedForReplay;
- (id)deviceModel;
@property(nonatomic, getter=isLightEstimationEnabled) _Bool lightEstimationEnabled;
- (id)initWithCameraPosition:(long long)arg1;
- (id)init;

@end

