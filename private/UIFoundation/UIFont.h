//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSString, UIFontDescriptor;

@interface UIFont : NSObject <NSSecureCoding, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)classFallbacksForKeyedArchiver;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (double)_readableWidth;
+ (id)_supportedDynamicFontStyles;
+ (_Bool)_isSupportedDynamicFontTextStyle:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (double)systemFontSize;
+ (double)smallSystemFontSize;
+ (double)buttonFontSize;
+ (double)labelFontSize;
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;
+ (id)monospacedDigitSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 design:(id)arg3;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)_ultraLightSystemFontOfSize:(double)arg1;
+ (id)_lightSystemFontOfSize:(double)arg1;
+ (id)_thinSystemFontOfSize:(double)arg1;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;
+ (id)_opticalSystemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)familyNames;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;
+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_sharedFontCache;
+ (id)_sharedZeroPointFont;
+ (void)initialize;
+ (id)userFontOfSize:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)markupDescription;
- (id)familyNameForCSSFontFamilyValue;
- (_Bool)isFixedPitch;
- (_Bool)isIBTextStyleFont;
- (double)_leading;
@property(readonly, nonatomic) double xHeight;
@property(readonly, nonatomic) double capHeight;
@property(readonly, nonatomic) double leading;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, nonatomic) double descender;
@property(readonly, nonatomic) double ascender;
- (_Bool)isSystemFont;
@property(readonly, nonatomic) double pointSize;
- (int)traits;
@property(readonly, nonatomic) NSString *fontName;
@property(readonly, nonatomic) NSString *familyName;
- (id)fontWithSize:(double)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_fontScaledByScaleFactor:(double)arg1;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
- (id)initWithName:(id)arg1 size:(double)arg2;
- (double)_scaledValueForValue:(double)arg1;
- (double)readableWidth;
- (id)_fontAdjustedForContentSizeCategoryCompatibleWithTraitCollection:(id)arg1;
- (id)_fontAdjustedForCurrentContentSizeCategory;
- (id)_alternateSystemFonts;
@property(readonly, nonatomic) UIFontDescriptor *fontDescriptor;
- (_Bool)_hasColorGlyphs;
- (unsigned long long)mostCompatibleStringEncoding;
- (double)_defaultLineHeightForUILayout;
- (id)lastResortFont;
- (id)bestMatchingFontForCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long *)arg4;
- (void)getBoundingRects:(struct CGRect *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (_Bool)_getLatin1GlyphMapping:(const unsigned short **)arg1 andAdvanceMapping:(const struct CGSize **)arg2;
- (id)_familyName;
- (unsigned long long)getCaretPositions:(double *)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (struct CGSize)advancementForGlyph:(unsigned short)arg1;
- (double)underlineThickness;
- (struct CGRect)boundingRectForFont;
- (struct CGFont *)_backingCGSFont;
- (void)getVerticalOriginTranslations:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;
- (void)getAdvancements:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short *)arg1 count:(long long)arg2;
- (unsigned long long)renderingMode;
- (id)_kernOverride;
- (void)setInContext:(struct CGContext *)arg1;
- (struct CGAffineTransform)_textMatrixTransformForContext:(struct CGContext *)arg1;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (double)_baseLineHeightForFont:(_Bool)arg1;
- (_Bool)_isHiraginoFont;
- (_Bool)isVertical;
- (id)verticalFont;
- (unsigned short)glyphWithName:(id)arg1;
- (unsigned long long)numberOfGlyphs;
- (struct __CTFont *)CTFont;
- (_Bool)_isDefaultFace;
- (id)coveredCharacterSet;
- (double)_bodyLeading;

@end

