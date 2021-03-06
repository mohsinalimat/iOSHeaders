//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPhotoGrain : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputISO;
    NSNumber *inputAmount;
    NSNumber *inputSeed;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputSeed; // @synthesize inputSeed;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(copy, nonatomic) NSNumber *inputISO; // @synthesize inputISO;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_paddedTileKernel;
- (id)_grainBlendAndMixKernel;
- (id)_interpolateGrainKernel;

@end

