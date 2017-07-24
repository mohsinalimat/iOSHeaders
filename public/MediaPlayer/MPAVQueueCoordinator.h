//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVItem, MPQueuePlayer, NSArray, NSDate, NSHashTable, NSMutableSet, NSOperationQueue;
@protocol MPAVQueueCoordinatorDataSource;

@interface MPAVQueueCoordinator : NSObject
{
    NSOperationQueue *_assetQueue;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    _Bool _holdingPlaybackTransactionForFirstItem;
    _Bool _isPendingPlayerItemSync;
    _Bool _isSyncingPlayerItems;
    NSHashTable *_itemsPendingAssetLoading;
    MPAVItem *_lastItemAnchor;
    NSDate *_lastPausedDate;
    unsigned long long _lastPreferredQueueDepth;
    _Bool _needsCurrentItemUpdateAfterPlayerItemSync;
    _Bool _preventLoadingItems;
    double _rateQueueDepthAdjustmentDelay;
    NSMutableSet *_reusableItems;
    MPQueuePlayer *_player;
    id <MPAVQueueCoordinatorDataSource> _dataSource;
    MPAVItem *_currentItem;
    NSArray *_items;
    CDUnknownBlockType _equilibriumAchievedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType equilibriumAchievedHandler; // @synthesize equilibriumAchievedHandler=_equilibriumAchievedHandler;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, nonatomic) __weak id <MPAVQueueCoordinatorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) MPQueuePlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_updateQueueDepthIfNeeded;
- (void)_updateCurrentItem;
- (void)_sendItemsDidChange;
- (void)_removeItemFromPlayer:(id)arg1;
- (id)_playerItems;
- (void)_syncPlayerItems;
- (void)_syncItemsWithPreviousItems:(id)arg1;
- (void)_reloadItemsKeepingCurrentItem:(_Bool)arg1;
- (unsigned long long)_preferredQueueDepthWithFirstItem:(id)arg1;
- (void)_loadAssetForItem:(id)arg1;
- (_Bool)_hasAchievedEquilibrium;
- (void)_dequeueFailedItem:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (void)_beginBackgroundTaskAssertion;
- (void)_currentItemHasFinishedDownloadingDidChangeNotification:(id)arg1;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 dataSource:(id)arg2;

@end

