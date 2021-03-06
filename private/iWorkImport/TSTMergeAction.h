//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTMergeAction : NSObject <NSCopying>
{
    int _type;
    vector_b8794d04 _uidRanges;
    vector_7ac42031 _mergeFormulas;
    vector_88016b54 _mergeFormulaIndexes;
}

+ (id)mergeActionForInsertingRange:(const struct TSTCellUIDRange *)arg1 inTable:(id)arg2;
+ (id)mergeActionForGrowingRange:(const struct TSTCellUIDRange *)arg1 coveringRange:(const struct TSTCellUIDRange *)arg2 inTable:(id)arg3;
+ (struct TSCEFormula)p_createFormulaForUIDRange:(struct TSTCellUIDRange)arg1 inTable:(id)arg2;
+ (id)mergeActionForRemovingRanges:(const vector_b8794d04 *)arg1 inTable:(id)arg2;
+ (struct TSTCellUIDRange)cellUIDRangeFromMergeFormula:(const struct TSCEFormula *)arg1;
+ (id)stringForMergeType:(int)arg1;
@property(nonatomic) const vector_88016b54 *mergeFormulaIndexes; // @synthesize mergeFormulaIndexes=_mergeFormulaIndexes;
@property(nonatomic) const vector_7ac42031 *mergeFormulas; // @synthesize mergeFormulas=_mergeFormulas;
@property(nonatomic) const vector_b8794d04 *uidRanges; // @synthesize uidRanges=_uidRanges;
@property(nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionByExpandingWithAction:(id)arg1;
- (id)shrinkAction;
- (id)changeDescriptorForTable:(id)arg1;
- (id)remapUIDsByColumnMap:(const UUIDMap_727ee07e *)arg1 rowMap:(const UUIDMap_727ee07e *)arg2 ownerMap:(const UUIDMap_727ee07e *)arg3;
- (void)enumerateMergeFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (void)saveToArchive:(struct MergeOperationArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct MergeOperationArchive *)arg1 unarchiver:(id)arg2;
- (void)addFormulaIndex:(unsigned long long)arg1;
- (void)addFormula:(const struct TSCEFormula *)arg1;
@property(readonly, nonatomic) _Bool hasMergeFormulas;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 uidRanges:(const vector_b8794d04 *)arg2;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 uidRange:(const struct TSTCellUIDRange *)arg2;
- (void)verify;

@end

