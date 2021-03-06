//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@class MPSExternalCNNUnary;
@protocol MPSImageAllocator, MPSNNPadding;

@interface MPSCNNKernel : MPSKernel
{
    CDStruct_d6af7fc0 _offset;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _dilationFactorX;
    unsigned long long _dilationFactorY;
    id <MPSNNPadding> _padding;
    _Bool _isBackwards;
    unsigned long long _edgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    void *_encodeData;
    MPSExternalCNNUnary *_plugin;
    id <MPSImageAllocator> _destinationImageAllocator;
}

@property(retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator; // @synthesize destinationImageAllocator=_destinationImageAllocator;
@property(retain, nonatomic) id <MPSNNPadding> padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool isBackwards; // @synthesize isBackwards=_isBackwards;
@property(readonly, nonatomic) unsigned long long strideInPixelsY; // @synthesize strideInPixelsY=_strideInPixelsY;
@property(readonly, nonatomic) unsigned long long strideInPixelsX; // @synthesize strideInPixelsX=_strideInPixelsX;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
@property(nonatomic) unsigned long long destinationFeatureChannelOffset; // @synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset;
@property(nonatomic) unsigned long long edgeMode; // @synthesize edgeMode=_edgeMode;
@property(nonatomic) CDStruct_1e3be3a8 clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) CDStruct_d6af7fc0 offset; // @synthesize offset=_offset;
-     // Error parsing type: 16@0:8, name: sourcePositionOfTopLeftCornerOfFilterWindow
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 updateOffset:(_Bool)arg3;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 consumedState:(id)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

