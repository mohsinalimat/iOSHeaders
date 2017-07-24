//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDMixing-Protocol.h>

@class TSCHChartFeature;

__attribute__((visibility("hidden")))
@interface TSCHChartType : NSObject <TSDMixing>
{
    TSCHChartFeature *mFeature;
}

+ (double)sageDepthFactorForExportingChartInfo:(id)arg1;
+ (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 chartType:(id)arg2 barShape:(int)arg3;
+ (id)chartTypePlaceholderForDefault3DScaleProperty;
+ (id)allChartTypes;
+ (id)multiDataBubbleChart;
+ (id)multiDataScatterChart;
+ (id)multiDataBarChart;
+ (id)multiDataColumnChart;
+ (id)stackedBarChart3D;
+ (id)barChart3D;
+ (id)stackedColumnChart3D;
+ (id)pieChart3D;
+ (id)stackedAreaChart3D;
+ (id)areaChart3D;
+ (id)lineChart3D;
+ (id)columnChart3D;
+ (id)bubbleChart;
+ (id)twoYAxisChart;
+ (id)mixedChart;
+ (id)stackedAreaChart;
+ (id)stackedColumnChart;
+ (id)stackedBarChart;
+ (id)scatterChart;
+ (id)areaChart;
+ (id)lineChart;
+ (id)columnChart;
+ (id)barChart;
+ (id)pieChart;
+ (struct CGSize)fallbackMinimumChartBodySize;
- (id)p_debugDescription;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (_Bool)supportsShowLabelsInFrontOption;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (_Bool)supportsReferenceLines;
- (int)representativeGridValueAxisType;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (_Bool)supportsIncrementalResize;
- (_Bool)supportsBubbleOptions;
- (_Bool)supportsSharedAndSeparateX;
- (id)allCDESectionLabels;
- (_Bool)supportsCategoryLabelsInChartRangeEditor;
- (_Bool)isMultiData;
- (_Bool)supportsMoreThanOneLiveCategory;
- (_Bool)supportsIndividualShadowRendering;
- (_Bool)isPie;
- (_Bool)isHorizontal;
- (_Bool)supportsCategoryAxisPlotToEdgesOption;
- (_Bool)supportsConnectingLines;
- (_Bool)supportsCategoryAxisSeriesNames;
- (_Bool)supportsCategoryAxisMinorTickmarks;
- (_Bool)supportsTickmarks;
- (_Bool)supportsAxisLine;
- (_Bool)supportsAxisLabelsOrientation;
- (_Bool)supportsValueAxisLabelsPosition;
- (_Bool)supportsMultipleValueScales;
- (_Bool)supportsMinorGridlines;
- (_Bool)supportsElementChunking;
- (int)stackingSignRule;
- (_Bool)supportsSymbolOverhang;
- (id)supportedAxisScales;
- (_Bool)supportsPercentNumberFormatting;
- (_Bool)supportsLabelExplosion;
- (_Bool)supportsElementSeriesNames;
- (_Bool)supportsErrorBarsScatterX;
- (_Bool)supportsErrorBars;
- (_Bool)supportsTrendLines;
- (_Bool)suppliesFinalTextures;
- (_Bool)requiresStagesBuildingInReverse;
- (_Bool)supportsBackgroundFill;
- (_Bool)supportsEditing;
- (_Bool)supportsValueLabels;
- (_Bool)supportsSeriesStroke;
- (_Bool)supportsSeriesFill;
- (_Bool)supportsSeriesShadow;
- (_Bool)supportsSeriesLabels;
- (_Bool)supportsGroupedShadows;
- (_Bool)supportsShadowOffset;
- (_Bool)drawValueLabelsForZero;
- (_Bool)requiresYAxisOrdinal;
- (_Bool)requiresSeparateLabelsRenderPass;
- (_Bool)supportsMultipleSeriesTypes;
- (_Bool)reverseSingleColumnLegendOrder;
- (id)defaultDataFileName;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (_Bool)supportsEditingForAxisID:(id)arg1;
- (id)categoryAxisIDs;
- (id)valueAxisIDs;
- (id)genericToSpecificPropertyMap;
- (_Bool)supportsBorderFrame;
- (Class)presetImagerClass;
- (id)supportedSeriesTypes;
- (Class)sageGeometeryHelperClass;
- (Class)repClass;
- (Class)layoutClass;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (id)defaultSeriesType:(unsigned long long)arg1;
- (id)userInterfaceName;
- (_Bool)approximatesTitleAccommodationUsingLegendSize;
- (struct CGSize)minimumChartBodySizeForTransformingGeometry;
- (struct CGSize)minimumChartBodySize;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (_Bool)explosionAffectsChartBodyBounds;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (struct UIEdgeInsets)swatchImageEdgeInsetsForSize:(struct CGSize)arg1;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6 shouldCache:(_Bool *)arg7;
- (int)chartBodyBoundsDefinition;
- (_Bool)supportsCategoryAxisLabels;
- (unsigned long long)presentationDimension;
- (id)otherDimensionChartType;
@property(readonly, nonatomic) _Bool is3D;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFeatureClass:(Class)arg1;
- (id)init;
- (double)categoryAxisTitleRotation;
- (double)valueAxisTitleRotation;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
- (float)rotation3DMaxY;
- (float)rotation3DMinY;
- (float)rotation3DMaxX;
- (float)rotation3DMinX;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;
- (struct CGSize)mungeBodySize:(struct CGSize)arg1;
- (_Bool)layoutFrameShouldEncloseInfoGeometry;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (id)g_genericToSpecificPropertyMapBubble;
- (id)g_genericToSpecificPropertyMapTwoAxis;
- (id)g_genericToSpecificPropertyMapMixed;
- (id)g_genericToSpecificPropertyMapStackedArea;
- (id)g_genericToSpecificPropertyMapStackedBar;
- (id)g_genericToSpecificPropertyMapStackedColumn;
- (id)g_genericToSpecificPropertyMapScatter;
- (id)g_genericToSpecificPropertyMapLine;
- (id)g_genericToSpecificPropertyMapArea;
- (id)g_genericToSpecificPropertyMapColumn;
- (id)g_genericToSpecificPropertyMapBar;
- (id)g_genericToSpecificPropertyMapPie;

@end

