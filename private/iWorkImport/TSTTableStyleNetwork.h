//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/NSFastEnumeration-Protocol.h>

@class TSTCellStyle, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle;

__attribute__((visibility("hidden")))
@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration>
{
    int _presetIndex;
    TSTTableStyle *_tableStyle;
    TSTCellStyle *_bodyCellStyle;
    TSTCellStyle *_headerRowCellStyle;
    TSTCellStyle *_headerColumnCellStyle;
    TSTCellStyle *_footerRowCellStyle;
    TSWPParagraphStyle *_bodyTextStyle;
    TSWPParagraphStyle *_headerRowTextStyle;
    TSWPParagraphStyle *_headerColumnTextStyle;
    TSWPParagraphStyle *_footerRowTextStyle;
    TSWPParagraphStyle *_tableNameStyle;
    TSWPShapeStyle *_tableNameShapeStyle;
}

+ (id)identifiersForPresetID:(unsigned long long)arg1;
+ (id)curatedTextStylePropertySetForCrossDocumentPasteMasterComparison;
+ (id)curatedTableStylePropertySetForCrossDocumentPasteMasterComparison;
+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;
+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;
+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkFromTheme:(id)arg1 presetID:(unsigned long long)arg2;
+ (id)networkFromStylesheet:(id)arg1 presetID:(unsigned long long)arg2;
+ (id)createStylesInStylesheet:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkWithContext:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkFromTableModel:(id)arg1;
- (void).cxx_destruct;
- (void)upgradeIfNecessary;
- (void)saveToArchive:(struct TableStyleNetworkArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct TableStyleNetworkArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;
- (_Bool)valid;
- (id)dictionaryWithPreset:(unsigned long long)arg1;
- (id)styleArray;
- (void)setTextStyle:(id)arg1 forTableArea:(unsigned long long)arg2;
- (void)setCellStyle:(id)arg1 forTableArea:(unsigned long long)arg2;
- (id)textStyleForTableArea:(unsigned long long)arg1;
- (id)cellStyleForTableArea:(unsigned long long)arg1;
- (_Bool)stylesInStylesheet:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 styleComparisonBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copy;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1 fromTableModel:(id)arg2;
- (id)initWithContext:(id)arg1 fromArray:(id)arg2 presetID:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1;
@property(nonatomic) unsigned long long presetID;
@property(retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property(retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
- (void)setHeaderRowTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
- (void)setFooterRowTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
- (void)setHeaderColumnTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
- (void)setBodyTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;
- (void)setHeaderRowCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *headerRowCellStyle;
- (void)setFooterRowCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *footerRowCellStyle;
- (void)setHeaderColumnCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;
- (void)setBodyCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *bodyCellStyle;
@property(retain, nonatomic) TSTTableStyle *tableStyle;

@end

