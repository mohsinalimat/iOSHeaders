//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace, NUPixelFormat;
@protocol NUExtentPolicy, NURegionPolicy, NUScalePolicy;

@interface NUImageRenderRequest : NURenderRequest
{
    NUColorSpace *_colorSpace;
    id <NURegionPolicy> _regionPolicy;
    id <NUScalePolicy> _scalePolicy;
    id <NUExtentPolicy> _extentPolicy;
    NUPixelFormat *_pixelFormat;
    CDStruct_1b6d18a9 _time;
}

@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(retain) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain) id <NUExtentPolicy> extentPolicy; // @synthesize extentPolicy=_extentPolicy;
@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property(retain) id <NURegionPolicy> regionPolicy; // @synthesize regionPolicy=_regionPolicy;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

@end

