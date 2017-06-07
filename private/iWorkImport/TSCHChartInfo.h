//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol-Protocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport-Protocol.h>
#import <iWorkImport/TSCHStyleOwning-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TSCHChartDrawableInfo, TSCHChartLayoutCache, TSCHChartMediator, TSCHChartModel, TSCHChartStylePreset, TSCHChartType, TSCHLegendModel, TSDInfoGeometry, TSKCustomFormatList, TSKDocumentRoot, TSPLazyReference, TSSStylesheet;
@protocol TSCHStyleActAlike;

__attribute__((visibility("hidden")))
@interface TSCHChartInfo : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHUnretainedParent, TSDMixing, NSCopying>
{
    TSCHChartModel *mModel;
    id <TSCHStyleActAlike> mStyle;
    id <TSCHStyleActAlike> mNonStyle;
    TSCHChartType *mChartType;
    TSCHLegendModel *mLegendModel;
    TSCHChartMediator *mChartMediator;
    TSPLazyReference *mLazyPreset;
    TSPLazyReference *mOwnedPreset;
    struct CGRect mInnerChartFrame;
    id <TSCHStyleActAlike> mLegendStyle;
    id <TSCHStyleActAlike> mLegendNonStyle;
    NSMutableArray *mValueAxisStyles;
    NSMutableArray *mCategoryAxisStyles;
    NSMutableArray *mValueAxisNonStyles;
    NSMutableArray *mCategoryAxisNonStyles;
    NSMutableArray *mThemeSeriesStyles;
    NSMutableArray *mPrivateSeriesStyles;
    NSMutableArray *mSeriesNonStyles;
    NSMutableArray *mParagraphStyles;
    NSMutableDictionary *mRefLineNonStylesMap;
    NSMutableDictionary *mRefLineStylesMap;
    id <TSCHStyleActAlike> mThemePresetRefLineStyle;
    struct CGPoint mPreviewOrigin;
    _Bool mDisplayMessageOnRepCreation;
    NSString *mMessageString;
    double mMessageDuration;
    TSDInfoGeometry *mNonInfoGeometry;
    TSCHChartDrawableInfo *mDrawableInfo;
    _Bool mNeedsCalcEngineDependentUpgrade;
    _Bool mNeedsCalcEngineDependentImport;
    _Bool mIsOlderThanSage;
    NSNumber *mHorizontalMin;
    NSNumber *mHorizontalMax;
    NSNumber *mValueMin;
    NSNumber *mValueMax;
    NSString *mValuePrefix;
    NSString *mValueSuffix;
    _Bool mValueUseSeparator;
    NSString *mHorizontalPrefix;
    NSString *mHorizontalSuffix;
    _Bool mHorizontalUseSeparator;
    NSMutableDictionary *mStyleViewProxyMap;
    NSArray *mStyleViewProxyParagraphStyleArray;
    unsigned long long mLastSeriesIndex;
    NSString *mLastAppliedFillSetLookupString;
    TSKCustomFormatList *mPasteboardCustomFormatList;
    _Bool mAppearancePreservedForPreset;
    struct CGSize _minimumChartBodySizeForTransformingGeometry;
}

+ (_Bool)groupedShadowsForChartModel:(id)arg1;
+ (id)scale3DPropertyToConstantDepthInfoChartScaleMappingsWithBarShape:(int)arg1 conversionBlock:(CDUnknownBlockType)arg2;
+ (id)p_chartTypeTo3DScalePropertyPairs;
+ (id)referenceLineStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)paragraphStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)seriesStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)categoryAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)valueAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)legendStyleIdentifierForRoleIndex:(unsigned long long)arg1;
+ (id)chartStyleIdentifierForRoleIndex:(unsigned long long)arg1;
+ (Class)classForLegendNonstyle;
+ (Class)classForLegendStyle;
+ (Class)classForAxisNonstyle;
+ (Class)classForAxisStyle;
+ (Class)classForSeriesNonstyle;
+ (Class)classForSeriesStyle;
+ (Class)classForChartNonstyle;
+ (Class)classForChartStyle;
+ (id)specificNumberFormatTypeProperties;
+ (id)specificPropertiesThatCanContainCustomFormats;
+ (id)specificPropertiesThatCanContainCustomDateFormats;
+ (id)specificPropertiesThatCanContainCustomNumberFormats;
+ (id)paragraphStylePropertiesChartsUse;
+ (id)propertiesThatInvalidateModel;
+ (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3;
+ (id)adjustNumberFormatTypeValue:(id)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(_Bool)arg4;
+ (int)adjustNumberFormatType:(int)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(_Bool)arg4;
+ (struct CGSize)minimumChartBodySizeForTransformingGeometryForChart:(id)arg1;
+ (id)p_currentThreadSceneAreaLayoutCache;
+ (void)setCurrentThreadSceneAreaLayoutCache:(id)arg1;
+ (double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(_Bool)arg4 valueAxis:(id)arg5;
+ (id)genericParagraphStyleIndexPropertiesInUse;
+ (id)genericParagraphStyleIndexProperties;
+ (id)paragraphStyleIndexPropertiesInUse;
+ (id)paragraphStyleIndexProperties;
+ (unsigned char)styleOwnerPathType;
+ (id)p_stylesheetFromOrderedArrayOfSources:(id)arg1;
@property(readonly, nonatomic) struct CGSize minimumChartBodySizeForTransformingGeometry; // @synthesize minimumChartBodySizeForTransformingGeometry=_minimumChartBodySizeForTransformingGeometry;
@property(nonatomic) double informationalMessageDuration; // @synthesize informationalMessageDuration=mMessageDuration;
@property(retain, nonatomic) NSString *informationalMessageString; // @synthesize informationalMessageString=mMessageString;
@property(nonatomic) _Bool displayMessageOnRepCreation; // @synthesize displayMessageOnRepCreation=mDisplayMessageOnRepCreation;
@property(copy, nonatomic) NSString *lastAppliedFillSetLookupString; // @synthesize lastAppliedFillSetLookupString=mLastAppliedFillSetLookupString;
@property(readonly, nonatomic) TSCHChartDrawableInfo *drawableInfo; // @synthesize drawableInfo=mDrawableInfo;
@property(nonatomic) struct CGPoint previewOrigin; // @synthesize previewOrigin=mPreviewOrigin;
@property(retain, nonatomic) TSCHChartMediator *mediator; // @synthesize mediator=mChartMediator;
@property(readonly, retain, nonatomic) TSCHChartType *chartType; // @synthesize chartType=mChartType;
@property(retain, nonatomic) TSCHLegendModel *legend; // @synthesize legend=mLegendModel;
@property(retain, nonatomic) TSCHChartModel *model; // @synthesize model=mModel;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)performDeferredUpgradeAndImportOperations;
@property(readonly, nonatomic) _Bool wantsDeferredUpgradeOrImport;
- (void)upgradeAxisLabelFormatWithValuePrefix:(id)arg1 valueSuffix:(id)arg2 valueUseSeparator:(_Bool)arg3 horizontalPrefix:(id)arg4 horizontalSuffix:(id)arg5 horizontalUseSeparator:(_Bool)arg6;
- (void)upgradeWithHorizontalMin:(id)arg1 horizontalMax:(id)arg2 valueMin:(id)arg3 valueMax:(id)arg4;
- (struct CGRect)chartBodyBoundsForSageImportWithSageChartType:(_Bool)arg1 isSpiceDoc:(_Bool)arg2;
- (id)fillsForSeriesAndTheme;
- (id)scaleAllStrokesInStyle:(id)arg1 byRatio:(double)arg2;
- (id)paragraphStyleForSelectionPath:(id)arg1;
- (int)paragraphStylePropertyForSelectionPath:(id)arg1;
- (id)styleOwnerForSelectionPath:(id)arg1;
- (int)stringPropertyForSelectionPath:(id)arg1;
- (id)stringForSelectionPath:(id)arg1;
- (id)themeChartPresetForUUID:(id)arg1;
@property(readonly, nonatomic) TSCHChartStylePreset *presetFromThemeIfNecessary;
@property(readonly, nonatomic) TSCHChartStylePreset *firstPresetFromTheme;
@property(readonly, nonatomic) NSArray *themeChartPresets;
- (void)setPreset:(id)arg1 forceOwning:(_Bool)arg2;
- (void)setPreset:(id)arg1;
@property(readonly, nonatomic) TSCHChartStylePreset *preset;
- (void)debugVerifyPreset;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)p_uuidForRefLineOnAxis:(id)arg1 havingNonStyle:(id)arg2;
- (_Bool)p_refLineNonStyleMapIsValid;
- (id)applyStyleSwapTuples:(id)arg1;
- (id)childInfos;
- (double)sageDepthFactorForExport;
- (void)updateTitlesForExportingModel:(id)arg1;
- (_Bool)appearancePreservedForPreset;
- (void)preserveAppearanceForCurrentPresetAdoptingStylesheet:(_Bool)arg1;
- (_Bool)appearancePreservedForCurrentPreset;
- (void)chartTypeDidChangeWithDetails:(id)arg1;
- (void)modelDidInvalidateWithDetails:(id)arg1;
- (void)chartDidInvalidateWithProperties:(id)arg1;
- (void)deleteReferenceLineForAxisID:(id)arg1 uuid:(id)arg2;
- (void)addReferenceLineForAxisID:(id)arg1 nonStyle:(id)arg2 style:(id)arg3 uuid:(id)arg4;
- (void)setReferenceLineStyle:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setReferenceLineNonStyleItem:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)referenceLineNonStyleItemsForAxisID:(id)arg1;
- (id)referenceLineNonStyleForAxisID:(id)arg1 uuid:(id)arg2 outIndex:(unsigned long long *)arg3;
- (unsigned long long)p_refLineIndexWithUUID:(id)arg1 nonStyleItems:(id)arg2;
- (id)referenceLineNonStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2 privateStyleOnly:(_Bool)arg3;
- (id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setChartNonstyle:(id)arg1;
- (void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)categoryAxisNonstyleAtIndex:(unsigned long long)arg1;
- (id)valueAxisNonstyleAtIndex:(unsigned long long)arg1;
- (id)categoryAxisStyleAtIndex:(unsigned long long)arg1;
- (id)valueAxisStyleAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryAxisStyleCount;
- (unsigned long long)valueAxisStyleCount;
- (id)seriesNonstyleForSeriesIndex:(unsigned long long)arg1;
- (id)seriesStyleForSeriesIndex:(unsigned long long)arg1;
- (id)nonStyleForAxis:(id)arg1;
- (id)styleForAxis:(id)arg1;
- (_Bool)referenceLineStyleIsPrivate:(id)arg1;
- (unsigned long long)numberOfThemeSeriesStyles;
- (_Bool)seriesStyleIsPrivate:(id)arg1;
- (id)nonStyleForSeries:(id)arg1;
- (id)seriesStyleForSeries:(id)arg1;
- (id)legendNonStyle;
- (id)legendStyle;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 withSeriesCount:(unsigned long long)arg2 forTheme:(id)arg3;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 forTheme:(id)arg2;
- (id)masterFontNameForInspectors;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(_Bool)arg2;
- (id)p_swapTuplesForMutations:(id)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (id)nonstyle;
- (id)style;
- (id)chartInfo;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (_Bool)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (_Bool)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (_Bool)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)p_genericToDefaultPropertyMap;
@property(readonly, nonatomic) TSSStylesheet *documentStylesheet;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (unsigned long long)addParagraphStyle:(id)arg1;
- (id)paragraphStyles;
- (id)paragraphStyleAtIndex:(unsigned long long)arg1;
- (int)elementKind;
@property(readonly, nonatomic) _Bool isPhantom;
- (Class)layoutClass;
- (Class)repClass;
- (struct CGRect)calculateDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (double)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1;
- (double)p_titleAccommodationWithLegendSize:(struct CGSize)arg1 optionalLayout:(id)arg2;
- (unsigned long long)defaultDataColumnCountForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (unsigned long long)defaultDataRowCountForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (id)p_getLocalizableDefaultDataDictionaryForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (_Bool)gridEqualToDefaultGrid;
- (void)setChartType:(id)arg1 andSetLegendDefaults:(_Bool)arg2 gridRowIds:(id)arg3 gridColumnIds:(id)arg4 forDocumentLocale:(id)arg5;
- (void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1;
- (id)p_infoGeometryForGeometry:(id)arg1 isCircumscribing:(_Bool)arg2;
- (id)infoGeometryForDesiredCircumscribingGeometry:(id)arg1;
- (id)infoGeometryForDesiredPureLayoutGeometry:(id)arg1;
- (id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg1;
- (id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(struct CGPoint)arg1;
- (void)chartMoveToPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) unsigned long long multiDataSetIndex; // @dynamic multiDataSetIndex;
- (struct CGRect)resizedLegendFrame:(struct CGRect)arg1 oldChartSize:(struct CGSize)arg2 newChartSize:(struct CGSize)arg3;
@property(readonly, nonatomic) int gridDirection;
@property(readonly, nonatomic) struct CGSize minimumChartBodySize;
- (void)setLastAppliedFillSetIdentifier:(id)arg1;
- (id)modelForDataSetIndex:(unsigned long long)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(_Bool)arg2;
- (void)setGeometry:(id)arg1 omitLegendResize:(_Bool)arg2 clearObjectPlaceholderFlag:(_Bool)arg3;
- (void)setGeometry:(id)arg1 omitLegendResize:(_Bool)arg2;
- (id)context;
- (void)willModify;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)p_copyStyleAndNonStyleMap:(id)arg1 withZone:(struct _NSZone *)arg2 context:(id)arg3;
- (id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(struct _NSZone *)arg2 context:(id)arg3;
- (void)clearParent;
- (void)dealloc;
- (id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13 refLineNonStylesMap:(id)arg14 refLineStylesMap:(id)arg15 forDocumentLocale:(id)arg16;
- (id)init;
- (id)p_init;
- (id)allStylesAndNonStylesThatCanHaveCustomNumberFormats;
- (void)updateAfterPaste;
- (void)reassignPasteboardCustomFormatKeys;
- (id)allCustomFormatKeys;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)p_presetByAdoptingStylesheet:(id)arg1 forPreset:(id)arg2 withMapper:(id)arg3;
- (void)applyChartStyleState:(id)arg1;
- (id)create3DSceneWithLayoutSettings:(const CDStruct_339a9a6e *)arg1;
@property(nonatomic) CDStruct_339a9a6e defaultLayoutSettings;
@property(readonly, nonatomic) _Bool hasSetDefaultLayoutSettings;
- (void)debugLayoutCache;
@property(readonly, nonatomic) TSCHChartLayoutCache *sceneAreaLayoutItemCache;
- (id)pasteboardCustomFormatList;
- (_Bool)isSingleCircleSpecialCase;
- (_Bool)isSingleCircleSpecialCaseOutSeries:(id *)arg1;
- (float)maximumExplosionOfAllSeriesExcept:(id)arg1;
- (float)maximumExplosion;
- (float)radiusForFrame:(struct CGRect)arg1 withMaxExplosion:(float)arg2;
- (float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2;
- (id)tuplesToApplyState:(id)arg1;
- (id)chartStyleState;
- (void)loadFromPreUFFArchive:(const struct ChartInfoArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (id)clamped3DRotationPropertyObject;
- (id)p_swapTuplesForApplyingPreset:(id)arg1 preservingAppearance:(_Bool)arg2;
- (id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg1;
- (id)swapTuplesForApplyingPreset:(id)arg1 withBehavior:(unsigned long long)arg2;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;
- (id)allStyleOwners;
- (unsigned long long)nonStyleIndexForStyleOwnerRef:(id)arg1;
- (id)styleOwnerRefForStyleOwner:(id)arg1;
- (id)styleOwnerForRef:(id)arg1;
- (id)styleOwnerRefForStyleOwnerPath:(id)arg1;
- (id)styleOwnerPathForSemanticTag:(id)arg1;
- (id)styleOwnerRefForSemanticTag:(id)arg1;
- (id)styleOwnerPathForRef:(id)arg1;
- (id)styleOwnerPathForStyleOwner:(id)arg1;
- (id)styleOwnerForPath:(id)arg1;
- (void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1;
- (void)p_setDrawableInfo:(id)arg1;
- (id)p_copyStyleArray:(id)arg1 inContext:(id)arg2 withMapper:(id)arg3;
- (id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2;
- (unsigned long long)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
- (void)saveToUnityArchive:(struct ChartArchive *)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3;
- (void)loadFromUnityArchive:(const struct ChartArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (void)clearViewStyleProxyForLayouts:(id)arg1;
- (void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2;
- (void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2;
- (void)p_invalidateCachesInLayouts:(id)arg1;
- (id)viewOverrideMapForStyleOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

