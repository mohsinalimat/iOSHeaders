//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPContentItem.h>

@class MPMediaItemArtwork, MPNowPlayingInfoLyricsItem, NSArray, NSDate, NSDictionary, NSString;
@protocol MPNowPlayingContentItemArtworkDataSource, MPNowPlayingContentItemDescriptionDataSource, MPNowPlayingContentItemLanguageOptionDataSource, MPNowPlayingContentItemLyricsDataSource;

@interface MPNowPlayingContentItem : MPContentItem
{
    NSDictionary *_nowPlayingInfo;
    void *_mediaRemoteDeltaRequest;
    id <MPNowPlayingContentItemLanguageOptionDataSource> _languageOptionDataSource;
    id <MPNowPlayingContentItemLyricsDataSource> _lyricsDataSource;
    id <MPNowPlayingContentItemDescriptionDataSource> _descriptionDataSource;
    id <MPNowPlayingContentItemArtworkDataSource> _artworkDataSource;
}

+ (_Bool)shouldPushArtworkData;
@property(nonatomic) __weak id <MPNowPlayingContentItemArtworkDataSource> artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(nonatomic) __weak id <MPNowPlayingContentItemDescriptionDataSource> descriptionDataSource; // @synthesize descriptionDataSource=_descriptionDataSource;
@property(nonatomic) __weak id <MPNowPlayingContentItemLyricsDataSource> lyricsDataSource; // @synthesize lyricsDataSource=_lyricsDataSource;
@property(nonatomic) __weak id <MPNowPlayingContentItemLanguageOptionDataSource> languageOptionDataSource; // @synthesize languageOptionDataSource=_languageOptionDataSource;
@property(nonatomic) void *_mediaRemoteDeltaRequest; // @synthesize _mediaRemoteDeltaRequest;
- (void).cxx_destruct;
@property(nonatomic, getter=isExplicitItem) _Bool explicitItem;
- (void)invalidateArtwork;
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @dynamic artwork;
- (void)invalidateLyrics;
@property(copy, nonatomic) MPNowPlayingInfoLyricsItem *lyrics;
- (void)invalidateDescription;
@property(copy, nonatomic) NSArray *sections;
- (void)invalidateLanguageOptions;
@property(copy, nonatomic) NSArray *currentLanguageOptions;
@property(copy, nonatomic) NSArray *availableLanguageOptions;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(readonly, nonatomic) NSDictionary *auxiliaryNowPlayingInfo;
@property(nonatomic) unsigned long long mediaType;
@property(copy, nonatomic) NSDictionary *collectionInfo;
@property(readonly, nonatomic) double elapsedTimeTimestamp;
@property(nonatomic) double elapsedTime;
@property(nonatomic) long long editingStyleFlags;
@property(nonatomic) long long radioStationType;
@property(nonatomic) long long playlistType;
@property(nonatomic) long long storeSubscriptionID;
@property(nonatomic) long long storeID;
@property(nonatomic) long long storeArtistID;
@property(nonatomic) long long storeAlbumID;
@property(nonatomic) unsigned long long numberOfChildren;
@property(nonatomic, getter=isSteerable) _Bool steerable;
@property(nonatomic, getter=isSharableItem) _Bool sharableItem;
@property(nonatomic, getter=isAlwaysLiveItem) _Bool alwaysLiveItem;
@property(copy, nonatomic) NSString *externalContentIdentifier;
@property(copy, nonatomic) NSString *radioStationStringIdentifier;
@property(copy, nonatomic) NSString *genreName;
@property(copy, nonatomic) NSString *composerName;
@property(nonatomic) long long trackNumber;
@property(nonatomic) long long totalTrackCount;
@property(nonatomic) long long totalDiscCount;
@property(nonatomic) long long seasonNumber;
@property(nonatomic) long long playCount;
@property(nonatomic) long long episodeNumber;
@property(nonatomic) long long discNumber;
@property(nonatomic) float playbackRate;
@property(nonatomic) float defaultPlaybackRate;
@property(nonatomic) double startTime;
@property(nonatomic) double duration;
@property(copy, nonatomic) NSString *trackArtistName;
@property(copy, nonatomic) NSString *seriesName;
@property(copy, nonatomic) NSString *radioStationName;
@property(copy, nonatomic) NSString *queueIdentifier;
@property(copy, nonatomic) NSString *profileIdentifier;
@property(copy, nonatomic) NSString *localizedContentRating;
@property(copy, nonatomic) NSString *info;
@property(copy, nonatomic) NSString *directorName;
@property(copy, nonatomic) NSString *collectionIdentifier;
@property(copy, nonatomic) NSString *albumName;
@property(copy, nonatomic) NSString *albumArtistName;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property(copy, nonatomic) NSDate *releaseDate;
- (id)_changeDictionary;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

