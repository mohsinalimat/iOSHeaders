//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MPMediaItem, MPMediaItemCollection, MPMediaPlaylist, MPMediaQuery, MPMusicPlayerControllerQueue, MPMusicPlayerQueueDescriptor, MPRadioStation, NSArray, NSData, NSNumber, NSUUID;

@protocol MPMusicPlayerController

@optional
- (void)setQueue:(MPMusicPlayerControllerQueue *)arg1;
- (void)requestQueue;
- (MPMusicPlayerControllerQueue *)queueWithUUID:(NSUUID *)arg1;
- (NSUUID *)currentQueueUUID;
- (void)setUserQueueModificationsDisabled:(NSNumber *)arg1;
- (NSNumber *)userQueueModificationsDisabled;
- (void)pauseWithFadeoutDuration:(NSNumber *)arg1;
- (void)setCurrentPlaybackRate:(NSNumber *)arg1;
- (NSNumber *)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(NSNumber *)arg1;
- (NSNumber *)currentPlaybackTime;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)setCurrentChapterIndex:(NSNumber *)arg1;
- (NSNumber *)currentChapterIndex;
- (void)skipToPreviousChapter;
- (void)skipToNextChapter;
- (NSData *)skipInDirection:(NSNumber *)arg1;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)stop;
- (void)pause;
- (void)shuffle;
- (void)play;
- (void)prepareToPlay;
- (NSNumber *)indexOfNowPlayingItem;
- (MPMediaItem *)nowPlayingItem;
- (void)setNowPlayingItem:(MPMediaItem *)arg1;
- (void)setShuffleMode:(NSNumber *)arg1;
- (NSNumber *)shuffleMode;
- (void)setRepeatMode:(NSNumber *)arg1;
- (NSNumber *)repeatMode;
- (NSNumber *)numberOfItems;
- (NSNumber *)playbackState;
- (void)setUseApplicationSpecificQueue:(NSNumber *)arg1;
- (void)prepareQueueForPlayback;
- (MPMediaItem *)nowPlayingItemAtIndex:(NSNumber *)arg1;
- (MPRadioStation *)queueAsRadioStation;
- (MPMediaQuery *)queueAsQuery;
- (void)appendQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1;
- (void)prependQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1;
- (void)playItem:(MPMediaItem *)arg1;
- (void)setQueueWithDescriptor:(MPMusicPlayerQueueDescriptor *)arg1;
- (void)setQueueWithRadioStation:(MPRadioStation *)arg1;
- (void)setQueueWithGeniusMixPlaylist:(MPMediaPlaylist *)arg1;
- (NSNumber *)setQueueWithSeedItems:(NSArray *)arg1;
- (NSNumber *)setQueueWithStoreIDs:(NSArray *)arg1;
- (void)setQueueWithItemCollection:(MPMediaItemCollection *)arg1;
- (void)setQueueWithQuery:(MPMediaQuery *)arg1 firstItem:(MPMediaItem *)arg2;
- (void)setQueueWithQuery:(MPMediaQuery *)arg1;
- (NSNumber *)isGeniusAvailableForSeedItems:(NSArray *)arg1;
- (NSNumber *)isGeniusAvailable;
- (void)registerForServerDiedNotifications;
- (NSNumber *)serverIsAlive;
@end

