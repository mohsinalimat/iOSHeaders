//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface PLTiledLayer : CALayer
{
    struct CGSize _jpegImageSize;
}

@property(readonly, nonatomic) struct CGSize jpegImageSize; // @synthesize jpegImageSize=_jpegImageSize;
- (void)flushCache;
- (void)setVisibleRectangle:(struct CGRect)arg1 zoomScale:(double)arg2;
- (id)initWithJPEGData:(id)arg1 placeholderImage:(struct CGImage *)arg2 screenSize:(struct CGSize)arg3;

@end

