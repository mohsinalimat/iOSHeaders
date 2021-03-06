//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CVMLBlurMeasure : NSObject
{
}

+ (_Bool)computeApproximateBlurScore:(float *)arg1 onRGBAImage:(struct __CVBuffer *)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id *)arg5;
+ (_Bool)computeApproximateBlurScore:(float *)arg1 onGrayscaleImage:(struct __CVBuffer *)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id *)arg5;
+ (_Bool)computeEdgeWidthBlurScore:(float *)arg1 onGrayscaleImage:(struct __CVBuffer *)arg2 error:(id *)arg3;
+ (_Bool)computeBlurScore:(float *)arg1 usingBlurSignature:(id)arg2 insetFactor:(float)arg3 imageROI:(struct CGRect)arg4 error:(id *)arg5;
+ (_Bool)computeBlurScore:(float *)arg1 onGrayscaleImage:(struct __CVBuffer *)arg2 insetFactor:(float)arg3 error:(id *)arg4;
+ (_Bool)computeBlurScore:(float *)arg1 onGrayscaleImage:(struct __CVBuffer *)arg2 andWithRegionOfInterestInImageCoordinates:(struct CGRect)arg3 andRegionOfInterestInsetFactor:(float)arg4 error:(id *)arg5;

@end

