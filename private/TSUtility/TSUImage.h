//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface TSUImage : NSObject
{
    struct CGImage *mCachedSliceableImage;
    struct __CFDictionary *mImageSlices;
    long long mImageSliceCacheLock;
    id mCachedSystemImage;
    long long mCachedImageLock;
}

+ (id)imageWithSize:(struct CGSize)arg1 drawnUsingBlock:(CDUnknownBlockType)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)imageWithUIImage:(id)arg1;
+ (id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 stretchingCenterWidthBy:(double)arg3;
- (struct CGImage *)CGImageForContentsScale:(double)arg1;
- (id)stretchedImageOfSize:(struct CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;
- (id)PNGRepresentation;
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;
- (id)TIFFRepresentation;
- (id)imagePartsWithLeftCapWidth:(double)arg1 rightCapWidth:(double)arg2 topCapHeight:(double)arg3 bottomCapHeight:(double)arg4;
- (_Bool)isEmpty;
@property(readonly, nonatomic) long long imageOrientation;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (void)dealloc;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithImageSourceRef:(struct CGImageSource *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) UIImage *UIImage;
- (id)initWithUIImage:(id)arg1;

@end

