//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXBarsController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, PXActionPerformer, PXAssetActionManager, PXAssetCollectionActionManager, PXBarAppearance, PXExtendedTraitCollection, PXPhotosDataSource, PXPhotosDetailsBarSpec, PXPhotosDetailsContext, PXPhotosDetailsViewModel, PXSectionedSelectionManager, UIView;

@interface PXPhotosDetailsBarsController : PXBarsController <PXPhotosDataSourceChangeObserver, PXChangeObserver, PXActionPerformerDelegate, UIPopoverPresentationControllerDelegate>
{
    struct {
        _Bool assetActionManager;
        _Bool assetCollectionActionManager;
    } _needsUpdateFlags;
    _Bool __showTitleView;
    PXAssetActionManager *__assetActionManager;
    PXAssetCollectionActionManager *__assetCollectionActionManager;
    PXBarAppearance *__barAppearance;
    PXPhotosDetailsViewModel *__viewModel;
    PXSectionedSelectionManager *__selectionManager;
    PXActionPerformer *__activePerformer;
    PXActionPerformer *__lastActionPerformer;
    UIView *__titleView;
    PXPhotosDetailsContext *__context;
    PXPhotosDataSource *__dataSource;
    PXExtendedTraitCollection *__extendedTraitCollection;
    NSMutableDictionary *__barButtonItemByActionType;
    NSMutableDictionary *__barButtonItemCacheByBarItemIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *_barButtonItemCacheByBarItemIdentifier; // @synthesize _barButtonItemCacheByBarItemIdentifier=__barButtonItemCacheByBarItemIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_barButtonItemByActionType; // @synthesize _barButtonItemByActionType=__barButtonItemByActionType;
@property(readonly, nonatomic) PXExtendedTraitCollection *_extendedTraitCollection; // @synthesize _extendedTraitCollection=__extendedTraitCollection;
@property(readonly, nonatomic) PXPhotosDataSource *_dataSource; // @synthesize _dataSource=__dataSource;
@property(readonly, nonatomic) PXPhotosDetailsContext *_context; // @synthesize _context=__context;
@property(nonatomic, setter=_setShowTitleView:) _Bool _showTitleView; // @synthesize _showTitleView=__showTitleView;
@property(readonly, nonatomic) UIView *_titleView; // @synthesize _titleView=__titleView;
@property(nonatomic, setter=_setLastActionPerformer:) __weak PXActionPerformer *_lastActionPerformer; // @synthesize _lastActionPerformer=__lastActionPerformer;
@property(retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(retain, nonatomic, setter=_setSelectionManager:) PXSectionedSelectionManager *_selectionManager; // @synthesize _selectionManager=__selectionManager;
@property(readonly, nonatomic) PXPhotosDetailsViewModel *_viewModel; // @synthesize _viewModel=__viewModel;
@property(retain, nonatomic, setter=_setBarAppearance:) PXBarAppearance *_barAppearance; // @synthesize _barAppearance=__barAppearance;
- (void).cxx_destruct;
- (void)prepareForPopoverPresentation:(id)arg1;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)_sourceBarButtonItemForActionType:(id)arg1;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)faceModeButtonItemTapped:(id)arg1;
- (void)doneBarButtonItemTapped:(id)arg1;
- (void)cancelBarButtonItemTapped:(id)arg1;
- (void)selectBarButtonItemTapped:(id)arg1;
- (void)updateBars;
- (void)_updateTitleViewAlpha;
- (void)shouldShowTitleView:(_Bool)arg1 animated:(_Bool)arg2;
- (id)createAssetCollectionActionManager;
- (id)createAssetActionManager;
- (id)createTitleView;
- (_Bool)_shouldEnableActionWithBarItemIdentifier:(id)arg1;
- (_Bool)_shouldAddBarItemForBarItemIdentifier:(id)arg1;
- (id)_barButtonItemForBarItem:(id)arg1 placement:(unsigned long long)arg2;
- (id)_flexibleSpaceBarButtonItem;
- (id)_barButtonItemsForBarItems:(id)arg1 placement:(unsigned long long)arg2;
- (id)_localizedSelectionTitle;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
@property(readonly, nonatomic) PXAssetActionManager *_assetActionManager; // @synthesize _assetActionManager=__assetActionManager;
- (void)_invalidateAssetActionManager;
@property(readonly, nonatomic) PXAssetCollectionActionManager *_assetCollectionActionManager; // @synthesize _assetCollectionActionManager=__assetCollectionActionManager;
- (void)_invalidateAssetCollectionActionManager;
- (id)_assetCollection;
- (id)initWithContext:(id)arg1 viewModel:(id)arg2 extendedTraitCollection:(id)arg3;
- (id)init;

// Remaining properties
@property(retain, nonatomic) PXPhotosDetailsBarSpec *barSpec; // @dynamic barSpec;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

