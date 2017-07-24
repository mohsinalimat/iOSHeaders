//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionCustomPhotosEditor.h>

@class NSMutableArray;

@interface NTKCompanionTransientCustomPhotosEditor : NTKCompanionCustomPhotosEditor
{
    NSMutableArray *_photos;
    _Bool _previewIsValid;
}

- (void).cxx_destruct;
- (id)_writeTransientPhotosInto:(id)arg1;
- (struct CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1;
- (struct CGRect)originalCropForPhotoAtIndex:(long long)arg1;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPhotoInPhotoLibraryAtIndex:(long long)arg1;
- (_Bool)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1;
- (_Bool)setOriginalCrop:(struct CGRect)arg1 forPhotoAtIndex:(long long)arg2;
- (void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deletePhotoAtIndex:(long long)arg1;
- (_Bool)addImageList:(id)arg1;
- (_Bool)addAssetsFromAssetList:(id)arg1;
- (_Bool)addPhotosFromUIImagePicker:(id)arg1;
- (long long)photosCount;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithResourceDirectory:(id)arg1;

@end

