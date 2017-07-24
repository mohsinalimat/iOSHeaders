//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, TIAsset, TIAssetAttributes;

@interface TIAssetVersions : NSObject
{
    TIAssetAttributes *_attributes;
    TIAsset *_currentAsset;
    NSMutableSet *_assets;
}

@property(readonly, nonatomic) NSMutableSet *assets; // @synthesize assets=_assets;
@property(nonatomic) TIAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(readonly, nonatomic) TIAssetAttributes *attributes; // @synthesize attributes=_attributes;
- (_Bool)isEmpty;
- (_Bool)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (id)assetContentItemsMatching:(id)arg1;
- (void)addAsset:(id)arg1;
- (id)recursiveDescription;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

@end

