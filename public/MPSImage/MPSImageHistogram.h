//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@interface MPSImageHistogram : MPSKernel
{
    unsigned long long histogramEntries;
    _Bool histogramAlpha;
    // Error parsing type: , name: minPixelValue
    // Error parsing type: , name: maxPixelValue
    _Bool useMinMaxHistogramKernel;
    CDStruct_1e3be3a8 _clipRectSource;
    _Bool _zeroHistogram;
    // Error parsing type: , name: _minPixelThresholdValue
    unsigned long long _histogramAtomicType;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
// Error parsing type for property minPixelThresholdValue:
// Property attributes: T,N,V_minPixelThresholdValue

@property(nonatomic) _Bool zeroHistogram; // @synthesize zeroHistogram=_zeroHistogram;
@property(nonatomic) CDStruct_1e3be3a8 clipRectSource; // @synthesize clipRectSource=_clipRectSource;
- (void)useThreadgroupAtomics;
- (void)useGlobalAtomics;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(unsigned long long)arg4;
- (unsigned long long)histogramSizeForSourceFormat:(unsigned long long)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 histogramInfo:(const CDStruct_5577c19c *)arg2;
@property(readonly, nonatomic) CDStruct_5577c19c histogramInfo;
- (id)initWithDevice:(id)arg1;

@end

