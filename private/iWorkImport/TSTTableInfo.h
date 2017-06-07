//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDDrawableInfo.h>

#import <iWorkImport/TSCECalculationEngineRegistration-Protocol.h>
#import <iWorkImport/TSCEFormulaOwning-Protocol.h>
#import <iWorkImport/TSCEReferenceResolving-Protocol.h>
#import <iWorkImport/TSCETableModeling-Protocol.h>
#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSKSearchable-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>
#import <iWorkImport/TSSStyleClient-Protocol.h>
#import <iWorkImport/TSWPStorageParent-Protocol.h>

@class NSObject, NSSet, NSString, TSDInfoGeometry, TSPObject, TSTMasterLayout, TSTTableModel, TSTTablePartitioner;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TSTTableInfo : TSDDrawableInfo <TSCEReferenceResolving, TSCECalculationEngineRegistration, TSCEFormulaOwning, TSCETableModeling, TSKModel, TSKSearchable, TSSPresetSource, TSSStyleClient, TSDContainerInfo, TSDMixing, TSWPStorageParent>
{
    TSTTableModel *mTableModel;
    _Bool mIsFormulaEditing;
    _Bool mHasReference;
    _Bool mMigratingStylesOnly;
    TSTTablePartitioner *mPartitioner;
    TSTMasterLayout *mMasterLayout;
}

+ (void)ensureAllTablesAreRegisteredInDocumentRoot:(id)arg1;
+ (void)performRewritesForInsertedTableInfos:(id)arg1;
+ (_Bool)validateNewName:(id)arg1 forTable:(id)arg2;
+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (_Bool)canPartition;
+ (_Bool)needsObjectUUID;
+ (id)tablePrototypeWithIndex:(long long)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4;
+ (id)geometryForPrototypeIndex:(long long)arg1 withCanvasPoint:(struct CGPoint)arg2;
+ (unsigned short)numberOfColumnsForProtoIndex:(unsigned long long)arg1;
+ (unsigned short)numberOfRowsForProtoIndex:(unsigned long long)arg1;
+ (struct TSCETableReference)makeCellReferenceInSameTable:(const struct TSCETableReference *)arg1 cellID:(struct TSUCellCoord)arg2;
+ (void)prefetchData:(struct TSCEReferenceValue *)arg1 fromVectorObject:(struct TSCETableReferenceVector *)arg2 cellID:(struct TSUCellCoord)arg3;
+ (struct TSCETableReferenceVector)makeReferenceVectorWithReference:(const struct TSCETableReference *)arg1 rangeContext:(unsigned char)arg2 apparentRangePtr:(struct TSCERangeCoordinate *)arg3;
+ (struct TSCETableReference)canonicalCellReferenceForReference:(const struct TSCETableReference *)arg1;
+ (id)resolverMatchingNameWithContextContainer:(id)arg1 inDocumentRoot:(id)arg2 contextContainerName:(id)arg3;
+ (id)resolverMatchingName:(id)arg1 inDocumentRoot:(id)arg2 contextResolver:(id)arg3;
+ (id)resolverContainerMatchingName:(id)arg1 inDocumentRoot:(id)arg2;
+ (int)getHidingAction:(const struct TSCETableReference *)arg1;
+ (CDStruct_fc93c73e)getRangeReference:(const struct TSCETableReference *)arg1;
+ (struct TSCERangeCoordinate)getRange:(const struct TSCETableReference *)arg1;
+ (struct TSCEFormat)format:(const struct TSCETableReference *)arg1 fromCell:(struct TSUCellCoord)arg2;
+ (struct TSCEFormat)formatFromVector:(const struct TSCETableReferenceVector *)arg1 atIndex:(unsigned long long)arg2;
+ (int)mergeReferences:(struct TSCETableReference *)arg1 left:(const struct TSCETableReference *)arg2 right:(const struct TSCETableReference *)arg3;
+ (struct TSCEValue)scalarValue:(const struct TSCETableReference *)arg1 fromCell:(struct TSUCellCoord)arg2 permitAccessInsideMergeRegions:(_Bool)arg3 fetchRichTextAttributesIfPlainText:(_Bool)arg4;
+ (struct TSUCellCoord)resolvedCellIDForScalarAccess:(struct TSCETableReference)arg1 fromCell:(struct TSUCellCoord)arg2;
+ (struct TSCEValue)valueForTable:(id)arg1 cellID:(struct TSUCellCoord)arg2 fetchRichTextAttributesIfPlainText:(_Bool)arg3;
@property(nonatomic) _Bool hasReference; // @synthesize hasReference=mHasReference;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 styleComparisonBlock:(CDUnknownBlockType)arg2;
- (void)reassignPasteboardCustomFormatKeys;
- (void)upgradeFormatsForCustomFormatListU2_0;
- (void)prepareForPasteWithSourceOffset:(CDStruct_1ef3fb1f)arg1;
- (void)setupForPasteboard;
- (void)didReplaceTextsInStoragesWithPlaceHolderString;
@property(readonly, copy, nonatomic) NSSet *allRichTextPayloadStorages;
- (_Bool)textIsVertical;
- (_Bool)autoListTermination;
- (_Bool)autoListRecognition;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)debugDump;
- (void)validate;
- (void)assertCollaborationConvergence;
- (_Bool)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (id)presetKind;
- (_Bool)prohibitsModificationToChildren;
- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (id)mergedContainedStorages;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (id)searchForString:(id)arg1 options:(unsigned long long)arg2 searchCanvasDelegate:(id)arg3 onHit:(CDUnknownBlockType)arg4;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (void)scaleInfoGeometry:(struct CGSize)arg1;
@property(nonatomic) long long contentWritingDirection;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
- (void)setPrimitiveGeometry:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)p_bakeMixedCellStrokesIntoTable:(id)arg1 outgoingTable:(id)arg2 incomingTable:(id)arg3 fraction:(double)arg4;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (id)p_containedTextForTableDeliveryStyle:(int)arg1 chunkIndex:(unsigned long long)arg2;
- (_Bool)reverseChunkingIsSupported;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (void)p_performCommentStorageDOLC:(id)arg1;
- (id)applyCellDiff:(id)arg1 atCellID:(struct TSUCellCoord)arg2 migrationMap:(id)arg3 inverseCellDiff:(id)arg4 defaultCellStyle:(id)arg5 defaultTextStyle:(id)arg6;
- (id)applyCellDiff:(id)arg1 atCellID:(struct TSUCellCoord)arg2 migrationMap:(id)arg3;
- (Class)layoutClass;
@property(readonly, nonatomic) _Bool supportsRichTextUndo;
- (_Bool)supportsAttachedComments;
- (int)elementKind;
- (id)p_masterLayoutCreateIfNeeded:(_Bool)arg1;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
- (void)clearPartitioner;
@property(readonly, nonatomic) TSTTablePartitioner *partitioner;
- (_Bool)isSelectable;
- (_Bool)supportsHyperlinks;
- (Class)editorClass;
- (Class)repClass;
@property(readonly, nonatomic) TSTTableModel *tableModel;
- (id)documentRoot;
- (_Bool)isSafeToConvertToText;
- (_Bool)isSafeToConvertToAttributedString;
- (_Bool)isSafeToConvertToImage;
- (double)masterLayoutEffectiveTableNameHeight;
- (void)shiftGeometryToIncludeTableNameHeight;
- (void)p_didLoadRichTextPayloadTable:(id)arg1;
- (id)componentRootObject;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableInfoArchive *)arg1 archiver:(id)arg2;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct TableInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)setupTableModelForPrototypeIndex:(long long)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)upgradeDuringDocumentUpgradeIfNeeded:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 tableModel:(id)arg4 waitForCalcEngine:(_Bool)arg5;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 waitForCalcEngine:(_Bool)arg4;
- (id)initWithContext:(id)arg1 otherTableInfo:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 styles:(id)arg3;
- (id)initForTestingWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 stylePreset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 styles:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 stylePreset:(id)arg5 styles:(id)arg6;
- (id)cellTextStyle:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)preMergeRangeFromUidTract:(id)arg1;
- (struct TSCERangeCoordinate)expandCellRangeToCoverMergedCells:(struct TSCERangeCoordinate)arg1;
- (id)UIDSetForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(_Bool)arg2 notFoundUIDs:(id)arg3;
- (id)UIDSetForIndexes:(id)arg1 isRows:(_Bool)arg2;
- (vector_dadc1b26)UIDsForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (id)indexesForUIDs:(const vector_dadc1b26 *)arg1 isRows:(_Bool)arg2;
- (vector_dadc1b26)UIDsForIndexes:(id)arg1 isRows:(_Bool)arg2;
- (unsigned short)indexForUID:(const UUIDData_5fbc143e *)arg1 isRows:(_Bool)arg2;
- (UUIDData_5fbc143e)UIDForIndex:(unsigned short)arg1 isRows:(_Bool)arg2;
- (vector_dadc1b26)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (id)columnIndexesForUIDs:(const vector_dadc1b26 *)arg1;
- (vector_dadc1b26)columnUIDsForColumnIndexes:(id)arg1;
- (unsigned char)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned char)arg1;
- (vector_dadc1b26)rowUIDsForRowRange:(struct _NSRange)arg1;
- (id)rowIndexesForUIDs:(const vector_dadc1b26 *)arg1;
- (vector_dadc1b26)allColumnUIDs;
- (vector_dadc1b26)allRowUIDs;
- (vector_dadc1b26)rowUIDsForRowIndexes:(id)arg1;
- (unsigned short)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned short)arg1;
- (_Bool)hasNamesInHeaders;
- (struct __CFUUID *)conditionalStyleFormulaOwnerID;
- (void)resetAllFormulaDependenciesForCell:(struct TSUCellCoord)arg1;
- (void)resetDependenciesForCell:(struct TSUCellCoord)arg1;
- (_Bool)cellWasModifiedInThisRecalcCycle:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)apparentRangeForRange:(struct TSCERangeCoordinate)arg1 rangeContext:(unsigned char)arg2;
- (struct TSCERangeCoordinate)footerRange;
- (struct TSCERangeCoordinate)tableRange;
- (struct TSCERangeCoordinate)bodyRange;
- (_Bool)hasCellID:(struct TSUCellCoord)arg1;
- (struct TSCETableReference)makeReference:(struct TSUCellCoord)arg1 bottomRight:(struct TSUCellCoord)arg2;
- (id)cellRangeName:(struct TSCERangeCoordinate)arg1 stickyBits:(unsigned char)arg2 isRangeWithFunction:(_Bool)arg3 quoteComponents:(_Bool)arg4 forceEscaping:(_Bool)arg5;
- (id)tableName;
- (id)sheetName;
- (struct __CFUUID *)mergeOwnerID;
- (_Bool)resolverIsATable;
- (UUIDData_5fbc143e)resolverUID;
- (struct __CFUUID *)resolverID;
- (id)calcEngine;
- (id)objectToArchiveInDependencyTracker;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)retainForCalculationEngine:(id)arg1;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 rewriteSpec:(id)arg3;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (CDStruct_22e7ec3e)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(_Bool)arg3 hasCalculatedPrecedents:(_Bool)arg4;
- (void)notifyTableOfNewResults;
- (void)performReadForOneOffFormulaEvaluation:(id)arg1 forCellID:(struct TSUCellCoord *)arg2;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (int)registerWithCalculationEngine:(id)arg1;
- (_Bool)isRegisteredWithCalculationEngine:(id)arg1;
- (_Bool)registerLast;
- (struct __CFUUID *)formulaOwnerID;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end

