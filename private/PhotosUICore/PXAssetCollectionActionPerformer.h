//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXActionPerformer.h>

@class PHFetchResult, PXDisplayTitleInfo;
@protocol PXDisplayAssetCollection;

@interface PXAssetCollectionActionPerformer : PXActionPerformer
{
    id <PXDisplayAssetCollection> _assetCollection;
    PXDisplayTitleInfo *_displayTitleInfo;
    PHFetchResult *_people;
}

@property(readonly, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property(readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // @synthesize displayTitleInfo=_displayTitleInfo;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (id)initWithActionType:(id)arg1 assetCollection:(id)arg2 displayTitleInfo:(id)arg3 people:(id)arg4;
- (id)initWithActionType:(id)arg1;

@end

