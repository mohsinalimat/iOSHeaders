//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetBadgeManager.h>

#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSSet, NSString, PHFetchResult, PXMiroMovieProvider, PXPhotosDataSource;

@interface PXDebugAssetBadgeManager : PXAssetBadgeManager <PXPhotosDataSourceChangeObserver>
{
    PXPhotosDataSource *_curatedPhotosDataSource;
    PXMiroMovieProvider *_miroMovieProvider;
    PXPhotosDataSource *_photosDataSource;
    PHFetchResult *__photosGraphCurationAssets;
    NSSet *__miroCurationAssets;
}

@property(retain, nonatomic, setter=_setMiroCurationAssets:) NSSet *_miroCurationAssets; // @synthesize _miroCurationAssets=__miroCurationAssets;
@property(retain, nonatomic, setter=_setPhotosGraphCurationAssets:) PHFetchResult *_photosGraphCurationAssets; // @synthesize _photosGraphCurationAssets=__photosGraphCurationAssets;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (void).cxx_destruct;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (_Bool)_isAssetContainedInPhotosGraphCuration:(id)arg1;
- (_Bool)_isAssetContainedInMiroCuration:(id)arg1;
- (void)_updateAssets;
- (struct PXAssetBadgeInfo)badgeInfoForAsset:(id)arg1 inCollection:(id)arg2 options:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

