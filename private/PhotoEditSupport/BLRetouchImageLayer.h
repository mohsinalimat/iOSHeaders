//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/BLRetouchLayer.h>

@class BLPixelImageBuffer, UIImage;

@interface BLRetouchImageLayer : BLRetouchLayer
{
    BLPixelImageBuffer *_imageBuffer;
    UIImage *_image;
    double _imageScaleFactor;
}

@property(nonatomic) double imageScaleFactor; // @synthesize imageScaleFactor=_imageScaleFactor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) BLPixelImageBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (struct CGSize)imageSize;
- (void)dealloc;

@end

