//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTilingControllerCompositionInput-Protocol.h>
#import <PhotosUICore/PXTilingControllerCompositionObserver-Protocol.h>
#import <PhotosUICore/PXTilingControllerCompositionOutput-Protocol.h>
#import <PhotosUICore/PXTilingControllerObserver-Protocol.h>
#import <PhotosUICore/PXTilingScrollControllerUpdateDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, PXTilingControllerComposition, PXTilingControllerDefaultComposition;
@protocol PXTilingScrollController;

@interface PXTilingControllerCompositionEngine : NSObject <PXTilingScrollControllerUpdateDelegate, PXTilingControllerObserver, PXTilingControllerCompositionObserver, PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput>
{
    _Bool _isPerformingChanges;
    _Bool _isUpdatingComposition;
    struct {
        _Bool scrollControllerMetrics;
        _Bool composition;
    } _needsUpdateFlags;
    id <PXTilingScrollController> __scrollController;
    NSHashTable *__tilingControllers;
    NSHashTable *__compositions;
    PXTilingControllerComposition *__composition;
    PXTilingControllerDefaultComposition *__defaultComposition;
    NSMutableArray *__invalidationContexts;
    NSMutableArray *__tilingControllersRequestingFocus;
    struct CGSize __referenceSize;
    struct UIEdgeInsets __contentInset;
}

+ (id)compositionEngineForScrollController:(id)arg1 createIfNeeded:(_Bool)arg2;
@property(readonly, nonatomic) NSMutableArray *_tilingControllersRequestingFocus; // @synthesize _tilingControllersRequestingFocus=__tilingControllersRequestingFocus;
@property(readonly, nonatomic) NSMutableArray *_invalidationContexts; // @synthesize _invalidationContexts=__invalidationContexts;
@property(nonatomic, setter=_setContentInset:) struct UIEdgeInsets _contentInset; // @synthesize _contentInset=__contentInset;
@property(nonatomic, setter=_setReferenceSize:) struct CGSize _referenceSize; // @synthesize _referenceSize=__referenceSize;
@property(readonly, nonatomic) PXTilingControllerDefaultComposition *_defaultComposition; // @synthesize _defaultComposition=__defaultComposition;
@property(retain, nonatomic, setter=_setComposition:) PXTilingControllerComposition *_composition; // @synthesize _composition=__composition;
@property(readonly, nonatomic) NSHashTable *_compositions; // @synthesize _compositions=__compositions;
@property(readonly, nonatomic) NSHashTable *_tilingControllers; // @synthesize _tilingControllers=__tilingControllers;
@property(readonly, nonatomic) __weak id <PXTilingScrollController> _scrollController; // @synthesize _scrollController=__scrollController;
- (void).cxx_destruct;
- (void)setOrigin:(struct CGPoint)arg1 forTilingController:(id)arg2;
- (void)setContentBounds:(struct CGRect)arg1 scrollBounds:(struct CGRect)arg2 scrollInfo:(id)arg3;
- (void)setReferenceSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2 forTilingController:(id)arg3;
- (id)convertScrollInfo:(id)arg1 fromTilingController:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromTilingController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromTilingController:(id)arg2;
- (id)scrollInfoForTilingController:(id)arg1;
- (struct CGPoint)originForTilingController:(id)arg1;
- (struct CGPoint)preferredOriginForTilingController:(id)arg1;
- (struct CGRect)scrollBoundsForTilingController:(id)arg1;
- (struct CGRect)contentBoundsForTilingController:(id)arg1;
@property(readonly, nonatomic) NSArray *invalidationContexts;
@property(readonly, nonatomic) NSArray *tilingControllersRequestingFocus;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset;
@property(readonly, nonatomic) struct CGSize referenceSize;
- (void)setTilingControllerCompositionNeedsUpdate:(id)arg1 withContext:(id)arg2;
- (void)tilingController:(id)arg1 invalidatedWithContext:(long long)arg2;
- (void)setTilingControllerNeedsUpdate:(id)arg1;
- (void)tilingScrollControllerDidUpdate:(id)arg1;
- (_Bool)_updateCompositionIfNeeded;
- (void)_invalidateComposition;
- (void)_updateScrollControllerMetricsIfNeeded;
- (void)_invalidateScrollControllerMetrics;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_endUpdate;
- (void)_beginUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)unregisterComposition:(id)arg1;
- (void)registerComposition:(id)arg1;
- (void)unregisterTilingController:(id)arg1;
- (void)registerTilingController:(id)arg1;
- (id)_initWithScrollController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

