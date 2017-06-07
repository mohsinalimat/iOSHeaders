//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableProperties : NSObject <NSCopying>
{
    WDDocument *mDocument;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_f508e1f6 mOriginalProperties;
    CDStruct_f508e1f6 mTrackedProperties;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isTableFloating;
- (_Bool)isFormattingChangeDateOverridden;
- (void)setFormattingChangeDate:(id)arg1;
- (id)formattingChangeDate;
- (_Bool)isEditDateOverridden;
- (void)setEditDate:(id)arg1;
- (id)editDate;
- (_Bool)isDeletionDateOverridden;
- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (_Bool)isIndexToAuthorIDOfEditOverridden;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfEdit;
- (_Bool)isIndexToAuthorIDOfDeletionOverridden;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfDeletion;
- (_Bool)isBiDirectionalOverridden;
- (void)setBiDirectional:(_Bool)arg1;
- (_Bool)biDirectional;
- (_Bool)isFormattingChangedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (int)formattingChanged;
- (_Bool)isEditedOverridden;
- (void)setEdited:(int)arg1;
- (int)edited;
- (_Bool)isDeletedOverridden;
- (void)setDeleted:(int)arg1;
- (int)deleted;
- (_Bool)isBottomDistanceFromTextOverridden;
- (void)setBottomDistanceFromText:(long long)arg1;
- (long long)bottomDistanceFromText;
- (_Bool)isRightDistanceFromTextOverridden;
- (void)setRightDistanceFromText:(long long)arg1;
- (long long)rightDistanceFromText;
- (_Bool)isTopDistanceFromTextOverridden;
- (void)setTopDistanceFromText:(long long)arg1;
- (long long)topDistanceFromText;
- (_Bool)isLeftDistanceFromTextOverridden;
- (void)setLeftDistanceFromText:(long long)arg1;
- (long long)leftDistanceFromText;
- (_Bool)isHorizontalPositionOverridden;
- (void)setHorizontalPosition:(long long)arg1;
- (long long)horizontalPosition;
- (_Bool)isVerticalPositionOverridden;
- (void)setVerticalPosition:(long long)arg1;
- (long long)verticalPosition;
- (_Bool)isHorizontalAnchorOverridden;
- (void)setHorizontalAnchor:(int)arg1;
- (int)horizontalAnchor;
- (_Bool)isVerticalAnchorOverridden;
- (void)setVerticalAnchor:(int)arg1;
- (int)verticalAnchor;
- (_Bool)isCellSpacingTypeOverridden;
- (void)setCellSpacingType:(int)arg1;
- (int)cellSpacingType;
- (_Bool)isCellSpacingOverridden;
- (void)setCellSpacing:(short)arg1;
- (short)cellSpacing;
- (_Bool)isIndentTypeOverridden;
- (void)setIndentType:(int)arg1;
- (int)indentType;
- (_Bool)isIndentOverridden;
- (void)setIndent:(short)arg1;
- (short)indent;
- (_Bool)isWidthTypeOverridden;
- (void)setWidthType:(int)arg1;
- (int)widthType;
- (_Bool)isWidthOverridden;
- (void)setWidth:(long long)arg1;
- (long long)width;
- (_Bool)isAlignmentOverridden;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (_Bool)isJustificationOverridden;
- (void)setJustification:(int)arg1;
- (int)justification;
- (void)clearInsideVerticalBorder;
- (_Bool)isInsideVerticalBorderOverridden;
- (id)mutableInsideVerticalBorder;
- (id)insideVerticalBorder;
- (void)clearInsideHorizontalBorder;
- (_Bool)isInsideHorizontalBorderOverridden;
- (id)mutableInsideHorizontalBorder;
- (id)insideHorizontalBorder;
- (void)clearRightBorder;
- (_Bool)isRightBorderOverridden;
- (id)mutableRightBorder;
- (id)rightBorder;
- (void)clearBottomBorder;
- (_Bool)isBottomBorderOverridden;
- (id)mutableBottomBorder;
- (id)bottomBorder;
- (void)clearLeftBorder;
- (_Bool)isLeftBorderOverridden;
- (id)mutableLeftBorder;
- (id)leftBorder;
- (void)clearTopBorder;
- (_Bool)isTopBorderOverridden;
- (id)mutableTopBorder;
- (id)topBorder;
- (void)clearShading;
- (_Bool)isShadingOverridden;
- (id)mutableShading;
- (id)shading;
- (_Bool)isLookOverridden;
- (void)setLook:(unsigned short)arg1;
- (unsigned short)look;
- (_Bool)isBaseStyleOverridden;
- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (void)moveOrignalToTracked;

@end

