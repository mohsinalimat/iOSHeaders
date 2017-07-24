//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageTransformSequence;

@interface MPSImageConversion : MPSUnaryImageKernel
{
    MPSImageTransformSequence *transform;
    // Error parsing type: [2], name: srcDecode
    // Error parsing type: [2], name: destDecode
    struct ConversionInfo_s convertInfo;
    struct ConversionInfoPtrs_s convertInfoPtrs;
    CDUnknownFunctionPointerType matFun;
    CDUnknownFunctionPointerType trcFun;
    CDUnknownFunctionPointerType lutFun;
    CDUnknownFunctionPointerType optionsFun;
    unsigned long long sourceAlpha;
    unsigned long long destinationAlpha;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long destinationAlpha; // @synthesize destinationAlpha;
@property(readonly, nonatomic) unsigned long long sourceAlpha; // @synthesize sourceAlpha;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceDecode:(const float *)arg3 destinationTexture:(id)arg4 destinationDecode:(const float *)arg5;
- (id)initWithDevice:(id)arg1 srcAlpha:(unsigned long long)arg2 destAlpha:(unsigned long long)arg3 backgroundColor:(double *)arg4 conversionInfo:(const struct CGColorConversionInfo *)arg5;
- (id)initWithDevice:(id)arg1 transform:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)debugDescription;

@end

