//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKMediaItem.h>

@class PHAsset;

@interface OKMediaPhotoKitItem : OKMediaItem
{
    PHAsset *_asset;
}

+ (id)urlForPHAsset:(id)arg1;
+ (id)urlForMediaObject:(id)arg1;
+ (_Bool)isRemote;
+ (id)scheme;
@property(retain) PHAsset *asset; // @synthesize asset=_asset;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsTemporaryDiskCache;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)avAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGRect)_faceAreaRect;
- (void)_resolveAssetIfNeeded;
- (void)setMediaObject:(id)arg1;
- (id)mediaObject;
- (void)dealloc;
- (id)initWithPHAsset:(id)arg1;
- (id)init;

@end

