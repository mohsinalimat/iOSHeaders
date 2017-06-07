//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSTCellIteratorData-Protocol.h>

@class NSString, TSTCell, TSTTableDataStore;

__attribute__((visibility("hidden")))
@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData>
{
    _Bool _styleOnly;
    _Bool _commentStorageOnly;
    _Bool _rowHidden;
    _Bool _columnHidden;
    struct TSUCellCoord _cellID;
    TSTCell *_cell;
    struct TSTCellStorage *_cellRef;
    struct TSUCellRect _mergeRange;
    TSTTableDataStore *_tableDataStore;
    TSTCell *_cellForExpanding;
}

@property(retain, nonatomic) TSTCell *cellForExpanding; // @synthesize cellForExpanding=_cellForExpanding;
@property(retain, nonatomic) TSTTableDataStore *tableDataStore; // @synthesize tableDataStore=_tableDataStore;
@property(nonatomic) _Bool columnHidden; // @synthesize columnHidden=_columnHidden;
@property(nonatomic) _Bool rowHidden; // @synthesize rowHidden=_rowHidden;
@property(nonatomic) _Bool commentStorageOnly; // @synthesize commentStorageOnly=_commentStorageOnly;
@property(nonatomic) _Bool styleOnly; // @synthesize styleOnly=_styleOnly;
@property(nonatomic) struct TSUCellRect mergeRange; // @synthesize mergeRange=_mergeRange;
@property(nonatomic) struct TSTCellStorage *cellRef; // @synthesize cellRef=_cellRef;
@property(retain, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(nonatomic) struct TSUCellCoord cellID; // @synthesize cellID=_cellID;
- (void)takeValuesFromCellIteratorData:(id)arg1;
- (void)expandCell;
- (void)expandCellSuppressingFormulaInflation:(_Bool)arg1;
@property(readonly, nonatomic) _Bool cellHasCommentStorage;
@property(readonly, nonatomic) _Bool cellHasCustomFormat;
@property(readonly, nonatomic) _Bool cellHasConditionalStyle;
@property(readonly, nonatomic) _Bool cellHasFormula;
@property(readonly, nonatomic) int cellValueType;
@property(readonly, nonatomic) _Bool hidden;
- (void)reset;
- (void)dealloc;
- (id)initWithTableModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

