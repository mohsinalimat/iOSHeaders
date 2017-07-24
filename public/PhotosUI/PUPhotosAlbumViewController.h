//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/PUPhotosSectionHeaderViewDelegate-Protocol.h>
#import <PhotosUI/PUSectionedGridLayoutDelegate-Protocol.h>
#import <PhotosUI/PXEditableNavigationTitleViewDelegate-Protocol.h>

@class NSObject, NSString, PHAssetCollection, PHFetchResult, PUPhotosAlbumViewControllerSpec, PUPhotosPickerViewController, PXEditableNavigationTitleView;
@protocol PLAlbumProtocol;

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate, PXEditableNavigationTitleViewDelegate>
{
    struct {
        _Bool sectionHeadersEnabled;
    } _needsUpdateFlags;
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    _Bool __isCountingAssetTypes;
    _Bool __hasAccurateCounts;
    PHAssetCollection *_assetCollection;
    struct NSObject *_album;
    PUPhotosAlbumViewControllerSpec *__albumSpec;
    PXEditableNavigationTitleView *_editableTitleView;
}

@property(readonly, nonatomic) PXEditableNavigationTitleView *editableTitleView; // @synthesize editableTitleView=_editableTitleView;
@property(retain, nonatomic, setter=_setAlbumSpec:) PUPhotosAlbumViewControllerSpec *_albumSpec; // @synthesize _albumSpec=__albumSpec;
@property(nonatomic, setter=_setHasAccurateCounts:) _Bool _hasAccurateCounts; // @synthesize _hasAccurateCounts=__hasAccurateCounts;
@property(nonatomic, setter=_setCountingAssetTypes:) _Bool _isCountingAssetTypes; // @synthesize _isCountingAssetTypes=__isCountingAssetTypes;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)_performMoveDropWithCoordinator:(id)arg1;
- (void)_performAddDropWithSession:(id)arg1;
- (_Bool)canHandleDropSession:(id)arg1;
- (_Bool)canDragIn;
- (_Bool)canDragOut;
- (void)editableNavigationTitleViewDidEndEditing:(id)arg1;
- (id)editableNavigationTitleView:(id)arg1 validateNewText:(id)arg2;
- (void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
- (void)didTapHeaderView:(id)arg1;
- (struct UIEdgeInsets)sectionedGridLayout:(id)arg1 finalContentInsetForCurrentContentInset:(struct UIEdgeInsets)arg2;
- (double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (_Bool)_navigateToBottomIfNeededAnimated:(_Bool)arg1;
- (_Bool)pu_handleSecondTabTap;
- (void)handleTransitionFade:(_Bool)arg1 animate:(_Bool)arg2;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)handleAddFromAction;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)setupScrubber;
- (void)_countAssetTypesIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)userEventSourceType;
- (long long)cellFillMode;
- (_Bool)allowSelectAllButton;
- (_Bool)isCameraRoll;
- (_Bool)isTrashBinViewController;
- (struct CGPoint)contentOffsetForPreheating;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_ensureEditableTitleView;
- (void)updateTitle;
- (void)configureGlobalFooterView:(id)arg1;
@property(readonly, nonatomic) NSString *globalFooterSubtitle;
- (void)configureGlobalHeaderView:(id)arg1;
- (double)globalHeaderHeight;
- (id)_globalHeaderTitle;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(_Bool)arg4;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(_Bool *)arg2 locations:(id *)arg3 title:(id *)arg4 startDate:(id *)arg5 endDate:(id *)arg6;
- (_Bool)updateSpec;
- (void)updateLayoutMetrics;
- (void)_updateSectionHeadersIfNeeded;
- (void)_setNeedsUpdate;
- (void)_invalideSectionHeaders;
- (id)newGridLayout;
- (_Bool)canBeginStackCollapseTransition;
- (_Bool)wantsGlobalFooter;
@property(readonly, nonatomic) _Bool shouldShowSectionHeaders;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (id)localizedTitleForAssets:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *assetCollectionAssets;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4;
- (void)setAssetCollection:(id)arg1;
- (void)setAlbum:(struct NSObject *)arg1 existingFetchResult:(id)arg2;
- (void)setSessionInfo:(id)arg1;
- (id)filterPredicateForAlbum:(struct NSObject *)arg1;
- (void)viewDidLoad;
- (id)initWithAlbumSpec:(id)arg1;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

