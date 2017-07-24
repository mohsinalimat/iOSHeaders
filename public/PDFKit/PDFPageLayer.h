//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <PDFKit/PDFPageLayerInterface-Protocol.h>

@class NSString, PDFPageLayerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayer : CALayer <PDFPageLayerInterface>
{
    PDFPageLayerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_updateTiles;
- (void)_renderingPropertyUpdate:(id)arg1;
- (void)_printRectsArray:(id)arg1;
- (_Bool)_hasTileWithFrameInLayer:(struct CGRect)arg1;
- (struct CGRect)_pageLayerVisibleRect;
- (struct CGRect)_layerTileToRootViewBounds:(id)arg1;
- (id)_subtractRectB:(struct CGRect)arg1 fromRectA:(struct CGRect)arg2;
- (_Bool)_isTile:(id)arg1 occludedByTiles:(id)arg2;
- (void)tileDrawingComplete:(id)arg1;
- (struct CGAffineTransform)_layerEffectTransform;
- (void)_updateLayerEffectTransform;
- (void)_setEnablePageShadows:(_Bool)arg1;
- (void)_hideTileLayer:(_Bool)arg1;
- (void)_releasePageLayerEffects;
- (void)_releaseTiles;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;
- (unsigned long long)visibilityDelegateIndex;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)clearTiles;
- (_Bool)enablesTileUpdates;
- (void)_forceTileUpdate;
- (void)forceTileUpdate;
- (void)setEnableTileUpdates:(_Bool)arg1;
- (id)pageLayerEffects;
- (void)removePageLayerEffectByUUID:(id)arg1;
- (void)removePageLayerEffect:(id)arg1;
- (id)getPageLayerEffectByUUID:(id)arg1;
- (id)addPageLayerEffect:(id)arg1;
- (_Bool)isVisible;
- (void)setNeedsTilesUpdate;
- (id)page;
- (void)dealloc;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

