//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class CUIThemeRendition, NSArray;

@interface CUINamedLayerStack : CUINamedLookup
{
    NSArray *_layers;
    CUIThemeRendition *_flattenedImageRendition;
    CUIThemeRendition *_radiosityImageRendition;
}

+ (void)radiosityImageWithImage:(struct CGImage *)arg1 displayScale:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (struct CGImage *)createRadiosityImageWithImage:(struct CGImage *)arg1 displayScale:(long long)arg2;
+ (struct vImage_Buffer)_doRadiosityBlurOnPixelBuffer:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bitsPerPixel:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 scaleFactor:(unsigned long long)arg6 usesGaussianBlur:(_Bool *)arg7 adjustedSize:(struct CGSize *)arg8;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void)dealloc;
@property(readonly, nonatomic) struct CGImage *radiosityImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
- (id)layerImageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 resolvingWithBlock:(CDUnknownBlockType)arg4;

@end

