//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSPredicate, NSSet, PHAsset, PHFetchResult;

@interface PXPhotosDataSourceConfiguration : NSObject
{
    _Bool _hideHiddenAssets;
    PHFetchResult *_collectionListFetchResult;
    unsigned long long _options;
    NSDictionary *_existingAssetCollectionFetchResults;
    NSDictionary *_existingKeyAssetsFetchResults;
    PHAsset *_referenceAsset;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    NSArray *_filterPersons;
}

@property(nonatomic) _Bool hideHiddenAssets; // @synthesize hideHiddenAssets=_hideHiddenAssets;
@property(retain, nonatomic) NSArray *filterPersons; // @synthesize filterPersons=_filterPersons;
@property(retain, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) NSDictionary *existingKeyAssetsFetchResults; // @synthesize existingKeyAssetsFetchResults=_existingKeyAssetsFetchResults;
@property(retain, nonatomic) NSDictionary *existingAssetCollectionFetchResults; // @synthesize existingAssetCollectionFetchResults=_existingAssetCollectionFetchResults;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (void).cxx_destruct;
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

