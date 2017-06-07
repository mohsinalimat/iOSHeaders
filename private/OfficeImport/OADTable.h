//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADDrawable.h>

@class NSMutableArray, OADTableGrid;

__attribute__((visibility("hidden")))
@interface OADTable : OADDrawable
{
    OADTableGrid *mGrid;
    NSMutableArray *mRows;
}

+ (void)applyTextStyle:(id)arg1 toParagraphProperties:(id)arg2;
- (id)description;
- (void)setParentTextListStyle:(id)arg1;
- (id)addRow;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (id)grid;
- (id)tableProperties;
- (void)dealloc;
- (id)init;
- (void)flipTableRTL;
- (id)masterCellOfPos:(struct OADTMatrixPos)arg1;
- (struct OADTMatrixPos)masterPosOfPos:(struct OADTMatrixPos)arg1;
- (id)cellAtPos:(struct OADTMatrixPos)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)flattenStyle;

@end

