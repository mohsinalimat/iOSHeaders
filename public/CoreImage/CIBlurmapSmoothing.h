//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlurmapSmoothing : CIFilter
{
    CIImage *inputImage;
}

@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)performPass:(id)arg1 reference:(id)arg2 values:(id)arg3 rect:(struct CGRect)arg4;
- (id)_kernelV;
- (id)_kernelH;

@end

