//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXResultRecord.h>

@class NSPredicate, NSSet, PHFetchResult;

@interface PXMutableResultRecord : PXResultRecord
{
    PHFetchResult *_filteredFetchResult;
    NSPredicate *_inclusionPredicate;
    _Bool _filteredFetchResultIsValid;
    _Bool _inclusionPredicateIsValid;
    _Bool _reverseSortOrder;
    _Bool _curate;
    NSSet *_excludedOids;
    NSSet *_includedOids;
    NSSet *_curatedOids;
    PHFetchResult *_fetchResult;
    PHFetchResult *_curatedFetchResult;
    PHFetchResult *_keyAssetsFetchResult;
}

@property(nonatomic) _Bool curate; // @synthesize curate=_curate;
@property(retain, nonatomic) PHFetchResult *keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property(retain, nonatomic) PHFetchResult *curatedFetchResult; // @synthesize curatedFetchResult=_curatedFetchResult;
@property(readonly, nonatomic) _Bool reverseSortOrder; // @synthesize reverseSortOrder=_reverseSortOrder;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly, nonatomic) NSSet *curatedOids; // @synthesize curatedOids=_curatedOids;
@property(readonly, nonatomic) NSSet *includedOids; // @synthesize includedOids=_includedOids;
@property(readonly, nonatomic) NSSet *excludedOids; // @synthesize excludedOids=_excludedOids;
- (void).cxx_destruct;
- (void)_updateFilteredFetchResultIfNeeded;
- (void)_invalidateFilteredFetchResult;
@property(readonly, nonatomic) PHFetchResult *filteredFetchResult;
@property(readonly, nonatomic) PHFetchResult *exposedFetchResult;
- (void)setReverseSortOrder:(_Bool)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setFetchResult:(id)arg1 reverseSortOrder:(_Bool)arg2;
- (void)stopExcludingOids:(id)arg1;
- (void)excludeOids:(id)arg1;
@property(readonly, nonatomic) NSPredicate *inclusionPredicate;
- (void)_invalidateInclusionPredicate;
- (void)_setIncludeOids:(id)arg1;
- (void)stopIncludingAllOids;
- (void)includeOids:(id)arg1;
- (void)invalidateFetchResultAssetCache;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

