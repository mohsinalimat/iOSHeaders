//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUAssetGroupHelper;

__attribute__((visibility("hidden")))
@interface PUPhotoKitAssetGroupActionPerformer : PUPhotoKitActionPerformer
{
    PUAssetGroupHelper *_assetGroupHelper;
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(retain, nonatomic) PUAssetGroupHelper *assetGroupHelper; // @synthesize assetGroupHelper=_assetGroupHelper;
- (void).cxx_destruct;
- (void)performBackgroundTask;

@end
