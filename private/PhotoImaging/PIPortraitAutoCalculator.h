//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

@class NUFaceDetectionClient, NUImagePropertiesClient;

@interface PIPortraitAutoCalculator : NUAutoCalculator
{
    NUFaceDetectionClient *_faceClient;
    NUImagePropertiesClient *_imagePropertiesClient;
}

+ (id)portraitInfoDictionaryFromCameraMetadata:(id)arg1;
+ (id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg1 orientation:(long long)arg2;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 focus:(id)arg2 aperture:(float)arg3 lumaNoiseScale:(float)arg4 orientation:(long long)arg5;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3;
+ (id)portraitInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3;
+ (_Bool)canApplyPortraitEffectsWithMetadata:(id)arg1;
+ (id)focusRectDictionaryFromRect:(struct CGRect)arg1;
+ (id)focusRectDictionaryFromMetadata:(id)arg1;
+ (struct CGPoint)convertFacePoint:(struct CGPoint)arg1 toImagePointWithFaceRect:(struct CGRect)arg2 orientation:(long long)arg3;
+     // Error parsing type: {CGPoint=dd}32@0:8r^16Q24, name: averagePoints:pointCount:
- (void).cxx_destruct;
- (void)_calculateWithImageProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)calculate:(CDUnknownBlockType)arg1;
- (_Bool)canApplyDepthWithProperties:(id)arg1 error:(out id *)arg2;
- (void)cancel;

@end

