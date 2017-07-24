//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurDirectionalBlur : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputMaxBlur;
    NSNumber *inputHorizontalBlur;
    NSNumber *inputAntiAliasBlurStrength;
    NSNumber *inputUseMetal;
}

@property(copy, nonatomic) NSNumber *inputUseMetal; // @synthesize inputUseMetal;
@property(copy, nonatomic) NSNumber *inputAntiAliasBlurStrength; // @synthesize inputAntiAliasBlurStrength;
@property(copy, nonatomic) NSNumber *inputMaxBlur; // @synthesize inputMaxBlur;
@property(copy, nonatomic) NSNumber *inputHorizontalBlur; // @synthesize inputHorizontalBlur;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelMetal;
- (id)_kernel;

@end

