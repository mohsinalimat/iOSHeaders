//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUMediaProvider.h>

@class NSMapTable, NSMutableArray;

@interface PUJoiningMediaProvider : PUMediaProvider
{
    NSMapTable *__mediaProviderByClass;
    NSMutableArray *__mediaProviderPredicateRecords;
}

@property(readonly, nonatomic) NSMutableArray *_mediaProviderPredicateRecords; // @synthesize _mediaProviderPredicateRecords=__mediaProviderPredicateRecords;
@property(readonly, nonatomic) NSMapTable *_mediaProviderByClass; // @synthesize _mediaProviderByClass=__mediaProviderByClass;
- (void).cxx_destruct;
- (void)cancelImageRequest:(int)arg1;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)_mediaProviderForAsset:(id)arg1 requestType:(long long)arg2;
- (void)registerMediaProvider:(id)arg1 forAssetPassingTest:(CDUnknownBlockType)arg2;
- (void)registerMediaProvider:(id)arg1 forAssetClass:(Class)arg2;
- (id)init;

@end

