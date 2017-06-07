//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaPlaylist, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface MusicLocalPlaybackEventDataSource : NSObject
{
    MPMediaPlaylist *_playbackHistoryPlaylist;
    NSMutableArray *_historyMediaItems;
    NSMutableDictionary *_storeIDsToOffers;
    _Bool _hasNetworkConditionsToFetchOffers;
    _Bool _shouldFetchOffers;
    NSMutableSet *_storeIDsToFetchOffers;
}

- (void).cxx_destruct;
- (id)_storeIDForMediaItem:(id)arg1;
- (_Bool)_shouldFetchOfferForItem:(id)arg1;
- (void)_fetchOffersForStoreIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_mediaItemsForHistoryPlaylist:(id)arg1;
- (id)_adIdentifierForHistoryItem:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)storeOffersForStoreID:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)playbackEventCount;
- (void)fetchStoreOffers;
- (void)addPlaybackEventForMediaItem:(id)arg1;
- (void)dealloc;
- (id)initWithPlaylist:(id)arg1;

@end

