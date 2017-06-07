//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CHAutoStyling.h>

#import <OfficeImport/CHAutoStyling-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>
{
}

- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(CDUnknownBlockType)arg4;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)autoTextFill;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;
- (id)autoSeriesFill:(unsigned long long)arg1;
- (id)autoSeriesBorderStroke;
- (id)autoFill;
- (id)autoStroke;
- (id)strokeWithColorIndex:(int)arg1;
- (id)fillWithColorIndex:(unsigned long long)arg1;
- (void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(_Bool)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

