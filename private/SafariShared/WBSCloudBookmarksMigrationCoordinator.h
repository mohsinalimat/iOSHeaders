//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudBookmarksUserIdentityFetcher-Protocol.h>

@class NSString, NSTimer, WBSCloudBookmarksMigrationRampEvaluator, WBSCloudBookmarksMigrationReadinessDecider;
@protocol OS_dispatch_queue, WBSCloudBookmarksDeviceEligibilityFetcher, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSCloudBookmarksMigrationCoordinatorStorage, WBSCloudTabDeviceProvider, WBSLogger, WBSSafariBookmarksSyncAgentProtocol;

@interface WBSCloudBookmarksMigrationCoordinator : NSObject <WBSCloudBookmarksUserIdentityFetcher>
{
    id <WBSCloudBookmarksMigrationCoordinatorStorage> _storage;
    id <WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
    id <WBSCloudTabDeviceProvider> _cloudTabDeviceProvider;
    id <WBSCloudBookmarksDeviceEligibilityFetcher> _windowsDeviceEligibilityFetcher;
    NSObject<OS_dispatch_queue> *_processingQueue;
    WBSCloudBookmarksMigrationRampEvaluator *_migrationRampEvaluator;
    WBSCloudBookmarksMigrationReadinessDecider *_migrationReadinessDecider;
    _Bool _readyToMigrate;
    long long _skipReason;
    NSTimer *_migrationReadinessReevaluationTimer;
    _Bool _migrationEnabled;
    _Bool _rampEnabled;
    id <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> _localDataProvider;
    id <WBSLogger> _keyActionsLogger;
}

@property(retain, nonatomic) id <WBSLogger> keyActionsLogger; // @synthesize keyActionsLogger=_keyActionsLogger;
@property(readonly, nonatomic) __weak id <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider; // @synthesize localDataProvider=_localDataProvider;
- (void).cxx_destruct;
- (void)fetchUserIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_migrationReadinessDataInvalidated:(id)arg1;
- (void)_migrationReadinessDeciderDecidedMigrationIsNoLongerPossible;
- (void)_migrationReadinessDeciderDecidedMigrationIsPossible;
- (void)_reevaluateMigrationReadiness;
- (void)noteCloudTabDevicesChanged;
- (void)_scheduleMigrationReadinessReevaluationForDate:(id)arg1;
- (void)_considerOverridingOtherMigratingDevice;
- (void)_stopWaitingForMigrationReadiness;
- (void)_startWaitingForMigrationReadiness;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)_evaluateMigrationRampInclusionForced:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_logKeyAction:(id)arg1;
@property(nonatomic, getter=isMigrationEnabled) _Bool migrationEnabled; // @synthesize migrationEnabled=_migrationEnabled;
@property(nonatomic, getter=isRampEnabled) _Bool rampEnabled; // @synthesize rampEnabled=_rampEnabled;
- (void)startCoordinatingMigration;
@property(readonly, nonatomic) id <WBSCloudBookmarksDeviceEligibilityFetcher> windowsDeviceEligibilityFetcher;
@property(readonly, nonatomic) id <WBSCloudTabDeviceProvider> cloudTabDeviceProvider;
@property(readonly, nonatomic) id <WBSSafariBookmarksSyncAgentProtocol> syncAgent;
@property(readonly, nonatomic) id <WBSCloudBookmarksMigrationCoordinatorStorage> storage;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 syncAgent:(id)arg2 localDataProvider:(id)arg3 cloudTabDeviceProvider:(id)arg4 windowsDeviceEligibilityFetcher:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

