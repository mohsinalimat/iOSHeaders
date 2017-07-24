//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSImage/MPSImageScale.h>

@protocol MTLTexture;

@interface MPSImageLanczosScale : MPSImageScale
{
    struct {
        id <MTLTexture> weights;
        double scale;
        double offset;
        unsigned int limit;
        unsigned int phaseCount;
        float phaseStride;
        float kernelTaps;
        unsigned int phaseMask;
        unsigned int kernelSize;
    } weights[2];
}

+ (const struct MPSLibraryInfo *)libraryInfo;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end

