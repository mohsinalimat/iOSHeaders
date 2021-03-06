//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/MSASAssetTransferer.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader : MSASAssetTransferer
{
    _Bool _didEncounterNetworkConditionError;
    int _state;
    NSMutableArray *_itemsInFlight;
    NSMutableDictionary *_assetCollectionsToItemInFlightMap;
    NSMutableDictionary *_assetToAssetCollectionMap;
    NSMutableArray *_finishedAssetCollections;
    NSMutableSet *_assetCollectionsWithAuthorizationError;
    NSMutableDictionary *_assetCollectionGUIDToRequestorContext;
}

@property(retain, nonatomic) NSMutableDictionary *assetCollectionGUIDToRequestorContext; // @synthesize assetCollectionGUIDToRequestorContext=_assetCollectionGUIDToRequestorContext;
@property(retain, nonatomic) NSMutableSet *assetCollectionsWithAuthorizationError; // @synthesize assetCollectionsWithAuthorizationError=_assetCollectionsWithAuthorizationError;
@property(nonatomic) _Bool didEncounterNetworkConditionError; // @synthesize didEncounterNetworkConditionError=_didEncounterNetworkConditionError;
@property(retain, nonatomic) NSMutableArray *finishedAssetCollections; // @synthesize finishedAssetCollections=_finishedAssetCollections;
@property(retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap; // @synthesize assetToAssetCollectionMap=_assetToAssetCollectionMap;
@property(retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap; // @synthesize assetCollectionsToItemInFlightMap=_assetCollectionsToItemInFlightMap;
@property(retain, nonatomic) NSMutableArray *itemsInFlight; // @synthesize itemsInFlight=_itemsInFlight;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)didFinishGettingAllAssets;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)workQueueStopTrackingItem:(id)arg1;
- (void)cancelAssetCollections:(id)arg1;
- (void)unregisterAssetCollections:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unregisterAssetCollections:(id)arg1;
- (void)registerAssetCollections:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned long long)arg2 results:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)workQueueRegisterAssets:(id)arg1 index:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)workQueueCancelAssetCollections:(id)arg1;
- (void)workQueueUploadNextBatch;
- (id)_orphanedAssetCollectionError;
- (void)workQueueCancel;
- (void)workQueueShutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueStop;
- (void)_workQueueStop;
- (void)workQueueGoIdle;
- (void)workQueueRetryOutstandingActivities;
- (id)_pathForPersonID:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <MSASAssetUploaderDelegate> delegate; // @dynamic delegate;

@end

