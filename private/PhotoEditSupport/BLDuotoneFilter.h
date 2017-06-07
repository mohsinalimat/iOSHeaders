//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface BLDuotoneFilter : CIFilter
{
    _Bool _needsReprocess;
    float _lastAmount;
    float _lastStrength;
    _Bool _lastAddColor;
    long long _lastVersion;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    NSNumber *_inputStrength;
    NSNumber *_inputAddColor;
    NSNumber *_inputVersion;
    CIFilter *_colorCubeFilter;
}

@property(retain, nonatomic) CIFilter *colorCubeFilter; // @synthesize colorCubeFilter=_colorCubeFilter;
@property(copy, nonatomic) NSNumber *inputVersion; // @synthesize inputVersion=_inputVersion;
@property(copy, nonatomic) NSNumber *inputAddColor; // @synthesize inputAddColor=_inputAddColor;
@property(copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength=_inputStrength;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount=_inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;

@end

