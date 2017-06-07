//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <HomeUI/PHPhotoLibraryChangeObserver-Protocol.h>

@class HUWallpaperPhotoCollectionFlowLayout, NAFuture, NSString, PHCachingImageManager, PHFetchResult;
@protocol HUWallpaperPhotoCollectionViewControllerDelegate;

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController <PHPhotoLibraryChangeObserver>
{
    _Bool _initialScrollToBottom;
    id <HUWallpaperPhotoCollectionViewControllerDelegate> _delegate;
    long long _assetCollectionSubtype;
    HUWallpaperPhotoCollectionFlowLayout *_flowLayout;
    PHCachingImageManager *_imageManager;
    PHFetchResult *_assetsFetchResult;
    NAFuture *_imageDownloadFuture;
}

@property(nonatomic) _Bool initialScrollToBottom; // @synthesize initialScrollToBottom=_initialScrollToBottom;
@property(retain, nonatomic) NAFuture *imageDownloadFuture; // @synthesize imageDownloadFuture=_imageDownloadFuture;
@property(retain, nonatomic) PHFetchResult *assetsFetchResult; // @synthesize assetsFetchResult=_assetsFetchResult;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) __weak HUWallpaperPhotoCollectionFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(readonly, nonatomic) long long assetCollectionSubtype; // @synthesize assetCollectionSubtype=_assetCollectionSubtype;
@property(readonly, nonatomic) __weak id <HUWallpaperPhotoCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageFutureForAsset:(id)arg1 cloudAllowed:(_Bool)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 fetchResult:(id)arg2 assetCollectionSubtype:(long long)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

