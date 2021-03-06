//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest
{
    NSArray *_inputFaceObservations;
}

@property(readonly, copy, nonatomic) NSArray *inputFaceObservations; // @synthesize inputFaceObservations=_inputFaceObservations;
- (void).cxx_destruct;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3;
- (id)observationsCacheKey;
- (id)newDefaultRequestInstance;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFaceObservations:(id)arg1;

@end

