//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPParagraphStyle : TSSStyle <TSTCellDiffing, TSSPreset, TSDMixing>
{
    void *_coreTextParagraphStyle;
    struct __CFDictionary *_styleCache;
    struct __CFDictionary *_scalePercentStyleCaches;
}

+ (id)styleSummaryForPropertyMap:(id)arg1;
+ (id)presetStyleDescriptor;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)p_normalDecimalSeparator;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)paragraphPropertiesAllowingNSNull;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisParagraphProperties;
+ (id)deprecatedProperties;
+ (id)paragraphProperties;
+ (id)properties;
+ (void)initialize;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)arg1;
+ (id)cellDiffProperties;
+ (id)defaultStyleWithDefaultPropertiesInContext:(id)arg1;
- (id)styleSummary;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (SEL)mapThemePropertyMapSelector;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (_Bool)transformsFontSizes;
- (void)addMissingClassProperties;
- (void)localizeForBidi:(_Bool)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ParagraphStyleArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ParagraphStyleArchive *)paragraphStyleArchiveFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ParagraphStyleArchive *)arg1 unarchiver:(id)arg2;
- (id)initialListStyle;
- (void)setInitialListStyle:(id)arg1;
- (id)followingParagraphStyle;
- (struct __CFDictionary *)p_newCoreTextCharacterStyle:(id)arg1 allowLigatures:(_Bool)arg2 scalePercent:(unsigned long long)arg3;
- (struct __CTParagraphStyle *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)arg1 writingDirection:(int)arg2;
- (BOOL)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg1;
- (struct __CTFont *)findCachedFontForCharacterStyle:(id)arg1 scalePercent:(unsigned long long)arg2;
- (struct __CFDictionary *)getTypesetterAttributes:(id)arg1 scalePercent:(unsigned long long)arg2 isRightToLeft:(_Bool)arg3;
- (void)clearStyleCaches;
- (void)willModify;
- (id)fullPropertyMap;
- (void)dealloc;
- (double)ascent;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;

@end

