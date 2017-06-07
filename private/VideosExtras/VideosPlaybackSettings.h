//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaItem, NSDate;

@interface VideosPlaybackSettings : NSObject
{
    int _videosPreferencesNotifyToken;
    _Bool _videosPreferenecsNotifyTokenIsValid;
    struct VideosPlaybackSettingsOverridenSettings _overriddenSettings;
    _Bool _cellularDataEnabled;
    unsigned long long _networkStatus;
    unsigned long long _playbackQuality;
    NSDate *_lastRunDate;
    MPMediaItem *_item;
}

+ (id)sharedSettings;
@property(retain, nonatomic) MPMediaItem *item; // @synthesize item=_item;
@property(copy, nonatomic) NSDate *lastRunDate; // @synthesize lastRunDate=_lastRunDate;
@property(nonatomic) unsigned long long playbackQuality; // @synthesize playbackQuality=_playbackQuality;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(nonatomic, getter=isCellularDataEnabled) _Bool cellularDataEnabled; // @synthesize cellularDataEnabled=_cellularDataEnabled;
- (void).cxx_destruct;
- (unsigned long long)_qualityForString:(id)arg1;
- (void)_populateNetworkValue;
- (void)_populateLastRunFromSettings;
- (void)_populateSettings;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)_registerObserverForSettingsChange;
- (_Bool)playbackSettingsOverriddenForMediaItem:(id)arg1;
- (unsigned long long)playbackQualityForMediaItem:(id)arg1 withNetworkStatus:(unsigned long long)arg2;
- (unsigned long long)playbackQualityForMediaItem:(id)arg1;
- (void)overridePlaybackSettings:(unsigned long long)arg1 forMediaItem:(id)arg2 withNetworkStatus:(unsigned long long)arg3;
- (void)overridePlaybackSettings:(unsigned long long)arg1 forMediaItem:(id)arg2;
- (_Bool)clearsCurrentSessionWithMediaItem:(id)arg1;
- (void)clearsCurrentSession;
- (void)setFirstRunRentalImport:(_Bool)arg1;
- (void)populateLastRunDate;
- (_Bool)firstRunRentalImport;
- (unsigned long long)networkStatusForNetworkType:(long long)arg1;
- (_Bool)networkHasConditionsForPlayback:(unsigned long long)arg1;
- (_Bool)hasNetworkConditionsForPlayback;
- (_Bool)hasANetworkConnection;
@property(readonly, nonatomic, getter=areCloudPurchasesEnabled) _Bool cloudPurchasesEnabled;
- (void)dealloc;
- (id)init;

@end

