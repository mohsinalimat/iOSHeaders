//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADFill.h>

@class OADBlipRef, OADImageFillTechnique, OADRelativeRect;

@interface OADImageFill : OADFill
{
    OADBlipRef *mBlipRef;
    _Bool mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    _Bool mIsDpiOverridden;
    _Bool mRotateWithShape;
    _Bool mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (_Bool)isTechniqueOverridden;
- (void)setTechnique:(id)arg1;
- (id)technique;
- (_Bool)isRotateWithShapeOverridden;
- (void)setRotateWithShape:(_Bool)arg1;
- (_Bool)rotateWithShape;
- (_Bool)isDpiOverridden;
- (void)setDpi:(int)arg1;
- (int)dpi;
- (_Bool)isSourceRectOverridden;
- (void)setSourceRect:(id)arg1;
- (id)sourceRect;
- (_Bool)isBlipRefOverridden;
- (void)setBlipRef:(id)arg1;
- (id)blipRef;
- (id)color;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

