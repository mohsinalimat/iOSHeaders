//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVImageDecorator.h>

@interface TVImageScaleDecorator : TVImageDecorator
{
    _Bool _decoratedImageIsEquivalentToOriginal;
    _Bool _cornerContinuous;
    _Bool _cropToFit;
    long long _mode;
    double _upscaleAdjustment;
    struct CGSize _scaleToSize;
    struct TVCornerRadii _cornerRadii;
}

+ (id)_decoratorIdentifierWithScaleToSize:(struct CGSize)arg1 mode:(long long)arg2 cornerRadii:(struct TVCornerRadii)arg3;
+ (id)_decoratorIdentifierWithScaleToSize:(struct CGSize)arg1 mode:(long long)arg2;
+ (id)decoratorIdentifierWithScaleToSize:(struct CGSize)arg1 cropToFit:(_Bool)arg2;
@property(nonatomic) _Bool cropToFit; // @synthesize cropToFit=_cropToFit;
@property(nonatomic) _Bool cornerContinuous; // @synthesize cornerContinuous=_cornerContinuous;
@property(nonatomic) struct TVCornerRadii cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) double upscaleAdjustment; // @synthesize upscaleAdjustment=_upscaleAdjustment;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
- (void)_doDrawInScaledContext:(struct CGContext *)arg1;
- (id)_doDrawInScaledContextWithImage:(id)arg1;
- (_Bool)_needsAlphaForImage:(id)arg1;
- (double)_upscalingFactor;
- (struct CGSize)_scaleToSizeAdjustedForUpscaling;
- (id)_scaleImage:(id)arg1 toSize:(struct CGSize)arg2 forceImageSize:(_Bool)arg3 drawInScaledContext:(_Bool)arg4 ignoreCornerRadius:(_Bool)arg5;
- (void)_applyCornerMaskForRect:(struct CGRect)arg1 toContext:(struct CGContext *)arg2;
- (id)_mapImageWithSourceRect:(struct CGRect)arg1 toSize:(struct CGSize)arg2 image:(id)arg3 drawInContextBlock:(CDUnknownBlockType)arg4;
- (id)_scaleAndCropImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)_scaleImage:(id)arg1 toSize:(struct CGSize)arg2 mode:(long long)arg3;
- (void)_setDecoratedImageIsEquivalentToOriginal:(_Bool)arg1;
- (struct CGSize)expectedSize;
- (_Bool)loaderCropToFit;
- (struct CGSize)loaderScaleToSize;
- (id)decoratorIdentifier;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;
- (id)initWithScaleToSize:(struct CGSize)arg1 mode:(long long)arg2;
- (id)initWithScaleToSize:(struct CGSize)arg1 cropToFit:(_Bool)arg2;
- (id)initWithScaleToSize:(struct CGSize)arg1;

@end

