//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNTargetedImageRequest.h>

@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest
{
    VNImageBuffer *_cachedFloatingImageBuffer;
    VNImageRegistrationSignature *_cachedFloatingImageSignature;
}

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)optionNameForTargetedImageSpecifyingObject;
- (void).cxx_destruct;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (_Bool)getReferenceImageBuffer:(id *)arg1 registrationSignature:(id *)arg2 forRequestPerformingContext:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id *)arg1;
- (id)cachedFloatingImageBufferReturningError:(id *)arg1;
- (_Bool)wantsSequencedRequestObservationsRecording;
- (id)observationsCacheKey;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

