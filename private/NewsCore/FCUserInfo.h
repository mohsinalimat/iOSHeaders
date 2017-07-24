//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/FCTagSettingsDelegate-Protocol.h>

@class FCTagSettings, NSDate, NSNumber, NSString;

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate>
{
    _Bool _useParsecResults;
    _Bool _iCloudAccountChanged;
    FCTagSettings *_tagSettings;
    NSNumber *_totalMeteredCount;
    NSDate *_dateLastResetMeteredCount;
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (id)userInfoCKRecordFromStore:(id)arg1;
+ (id)iCloudDataKeys;
+ (id)desiredKeys;
@property(nonatomic) _Bool iCloudAccountChanged; // @synthesize iCloudAccountChanged=_iCloudAccountChanged;
@property(copy, nonatomic) NSDate *dateLastResetMeteredCount; // @synthesize dateLastResetMeteredCount=_dateLastResetMeteredCount;
@property(copy, nonatomic) NSNumber *totalMeteredCount; // @synthesize totalMeteredCount=_totalMeteredCount;
@property(readonly, nonatomic) _Bool useParsecResults; // @synthesize useParsecResults=_useParsecResults;
@property(retain, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (void).cxx_destruct;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (void)_removeiCloudDataValues;
- (void)_persistNotificationsUserID:(id)arg1;
- (void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2;
- (void)handleSyncWithUserInfoRecord:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)accessTokenRemovedForTagID:(id)arg1;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)asCKRecord;
@property(copy, nonatomic) NSNumber *monthlyMeteredCount;
@property(readonly, nonatomic) NSDate *dateLastViewedSaved;
- (void)markSavedAsViewed;
- (void)maybeUpdateOnboardingVersion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool mightNeedToUpdateOnboardingVersion;
- (void)validateIsMeteredLimitReachedWithArticleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool userHasCompletedFavoritesSetup;
@property(nonatomic) _Bool hasShownProgressivePersonalizationWelcomeBrick;
@property(readonly, nonatomic) unsigned long long progressivePersonalization;
- (void)incrementMonthlyMeteredCountByOneWithArticleID:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowDefaultForYou;
@property(copy, nonatomic) NSDate *dateLastOpened;
@property(copy, nonatomic) NSDate *userStartDate;
@property(copy, nonatomic) NSNumber *onboardingVersionNumber;
@property(readonly, copy, nonatomic) NSString *notificationsUserID;
@property(copy, nonatomic) NSString *feldsparID;
- (void)prepareForUse;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 iCloudAccountChanged:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

