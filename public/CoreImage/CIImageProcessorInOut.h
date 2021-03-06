//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorInOut : NSObject
{
    struct CGRect _region;
    struct __IOSurface *_surface;
    _Bool _usesSRGB;
    // Error parsing type: ^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQiB[1024{TreeCacheElement=Q^{Kernel}}]Q^{ObjectCache<CI::Node>}^{ObjectCache<CI::Node>}dd@^{RenderTask}iBQ@@}, name: _context
    id <MTLTexture> _mtlTexture;
    _Bool _surfaceLocked;
}

@property(readonly, nonatomic) struct CGRect region; // @synthesize region=_region;
- (id)description;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) _Bool usesSRGBTransferFunction;
@property(readonly, nonatomic) struct __IOSurface *surface;
- (void)dealloc;
-     // Error parsing type: @76@0:8^{__IOSurface=}16{Texture=(?={?=II}^v)}24B32{CGRect={CGPoint=dd}{CGSize=dd}}36^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQiB[1024{TreeCacheElement=Q^{Kernel}}]Q^{ObjectCache<CI::Node>}^{ObjectCache<CI::Node>}dd@^{RenderTask}iBQ@@}68, name: initWithSurface:texture:allowSRGB:bounds:context:

@end

