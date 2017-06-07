//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNDetector.h>

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceBBoxAligner : VNDetector
{
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> mFaceBoxPoseAlignerImpl;
    _Bool mModelFilesWereMemmapped;
    id <VNModelFile> mFaceBoxAlignerModelFileHandle;
}

+ (_Bool)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id *)arg3;
- (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer *)arg2 rawBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg3 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg4 rotationAngle:(float)arg5;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
