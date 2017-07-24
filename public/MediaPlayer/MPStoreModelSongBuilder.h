//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPPropertySet, MPStoreModelPlaybackPositionBuilder, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelSongBuilder : MPStoreModelObjectBuilder
{
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int duration:1;
        unsigned int trackNumber:1;
        unsigned int discNumber:1;
        unsigned int grouping:1;
        unsigned int explicit:1;
        unsigned int artistUploadedContent:1;
        unsigned int hasVideo:1;
        unsigned int artwork:1;
        unsigned int copyrightText:1;
        unsigned int keepLocalEnableState:1;
        unsigned int keepLocalManagedStatus:1;
        unsigned int hasCloudSyncSource:1;
        unsigned int localFileAsset:1;
        unsigned int libraryAdded:1;
        unsigned int libraryAddEligible:1;
        unsigned int shouldShowComposer:1;
        unsigned int shouldExcludeFromShuffle:1;
        unsigned int volumeNormalization:1;
        unsigned int year:1;
        unsigned int userRating:1;
        unsigned int gaplessInfo:1;
        unsigned int volumeAdjustment:1;
        unsigned int classicalWork:1;
        unsigned int classicalMovement:1;
        unsigned int classicalMovementCount:1;
        unsigned int classicalMovementNumber:1;
        CDStruct_0f043e9e album;
        CDStruct_63a3d127 artist;
        CDStruct_63a3d127 composer;
        CDStruct_63a3d127 genre;
        CDStruct_f9384266 homeSharingAsset;
        CDStruct_99cfb959 lyrics;
    } _requestedSongProperties;
}

+ (id)allSupportedProperties;
- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end

