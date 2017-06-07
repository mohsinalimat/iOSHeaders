//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUApplicationDefaults.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface MusicDefaults : MPUApplicationDefaults
{
    _Bool _internalInstall;
}

+ (id)sharedDefaults;
@property(nonatomic, getter=isInternalInstall) _Bool internalInstall; // @synthesize internalInstall=_internalInstall;
- (void)ensureInvertedDefaultPlaybackSpeedHackIsInPlace;
- (void)beginObservingDefaultsChanges;
@property(nonatomic) float popularityIndicatorThreshold;
@property(retain, nonatomic) NSString *versionOfOSWhenNotNowWelcomeScreenWasShown;
@property(nonatomic) long long versionOfNotNowWhenUserLastSawWelcomeScreen;
@property(readonly, nonatomic) _Bool hasSetVersionOfNotNowOption;
@property(retain, nonatomic) NSString *versionOfOSWhenNoThanksWelcomeScreenWasShown;
@property(nonatomic) long long versionOfNoThanksWhenUserLastSawWelcomeScreen;
@property(readonly, nonatomic) _Bool hasSetVersionOfNoThanksOption;
@property(retain, nonatomic) NSString *versionOfOSWhenFormerFreeTrialWelcomeScreenWasShown;
@property(nonatomic) long long versionOfFormerFreeTrialWhenUserLastSawWelcomeScreen;
@property(nonatomic) long long shuffleType;
@property(copy, nonatomic) NSString *selectedPlaylistsOverviewFilter;
@property(copy, nonatomic) NSString *selectedLibraryViewIdentifier;
@property(nonatomic) _Bool searchShouldDefaultToMyMusic;
@property(nonatomic) long long repeatType;
@property(nonatomic) long long playbackSpeed;
@property(nonatomic) _Bool playlistsOverviewShowsOnlyOfflinePlaylists;
@property(retain, nonatomic) NSDate *lastMyMusicSearchDate;
@property(nonatomic) unsigned long long lastModifiedPlaylistID;
@property(copy, nonatomic) NSDictionary *lastKnownTabConfigurations;
@property(nonatomic) _Bool lastKnownSupportsConnect;
@property(retain, nonatomic) NSNumber *lastKnownStoreAccountUniqueIdentifier;
@property(nonatomic) _Bool lastKnownHasActiveSubscription;
@property(readonly, nonatomic, getter=isSoundCheckEnabled) _Bool soundCheckEnabled;
@property(readonly, nonatomic, getter=isSortByArtistEnabled) _Bool sortByArtistEnabled;
@property(nonatomic, getter=isShowCloudMediaEnabled) _Bool showCloudMediaEnabled;
@property(readonly, nonatomic, getter=isShakeToShuffleEnabled) _Bool shakeToShuffleEnabled;
@property(readonly, nonatomic, getter=isPinningEnabled) _Bool pinningEnabled;
@property(nonatomic, getter=isGeniusUserEnabled) _Bool geniusUserEnabled;
@property(readonly, nonatomic, getter=isGroupByAlbumArtistEnabled) _Bool groupByAlbumArtistEnabled;
@property(readonly, nonatomic, getter=isActivityContinuationEnabled) _Bool activityContinuationEnabled;
@property(nonatomic) _Bool hasUserRequestedSubscriptionHidden;
@property(readonly, nonatomic) int eqPreset;
@property(retain, nonatomic) NSDate *dateWhenUserLastSawWelcomeScreen;
@property(copy, nonatomic) NSArray *tabBarOrdering;
- (void)migrateTabBarOrderingIfNeeded;

@end

