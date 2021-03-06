//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

#import <CoreImage/_CIFilterProperties-Protocol.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVibrance : CIFilter <_CIFilterProperties>
{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;
- (id)_kernelPos;
- (id)_kernelNeg;
- (_Bool)_isIdentity;

@end

