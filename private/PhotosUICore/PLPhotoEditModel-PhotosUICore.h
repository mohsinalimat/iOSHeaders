//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPhotoEditModel.h>

@interface PLPhotoEditModel (PhotosUICore)
- (id)px_clearedDepthCopyIncludingGeometry:(_Bool)arg1;
- (id)px_clearedDepthCopy;
- (_Bool)px_hasDepthEdits;
- (_Bool)px_isAdjustedBeyondDepth;
- (id)px_photoEditModelByApplyingAssetVariation:(unsigned int)arg1 withRecipe:(id)arg2;
@property(readonly, nonatomic) unsigned int px_assetVariation;
@end

