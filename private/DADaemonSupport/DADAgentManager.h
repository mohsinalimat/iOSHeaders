//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DADAgentManager : NSObject
{
    NSMutableArray *_activeAgents;
    NSMutableArray *_agentsAwaitingShutdown;
    int _disableMonitoringRequests;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort *_pmPort;
    struct __CFRunLoopSource *_pmRunLoopSource;
    CDUnknownBlockType _startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    struct __CTServerConnection *_ctServerConnection;
    int _pendingAccountSetupCount;
    NSMutableArray *_subCalHandlers;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *subCalHandlers; // @synthesize subCalHandlers=_subCalHandlers;
@property(retain, nonatomic) NSMutableArray *activeAgents; // @synthesize activeAgents=_activeAgents;
- (void).cxx_destruct;
- (void)upgradeAccountsInSimulator;
- (void)disableActiveSync;
- (void)enableActiveSync;
- (void)cleanupLaunchdSemaphore;
- (void)disableDaemon;
- (void)enableDaemon;
- (_Bool)hasActiveAccounts;
- (_Bool)hasPendingAccountSetup;
- (void)removePendingAccountSetup;
- (void)addPendingAccountSetup;
- (_Bool)_hasDataclassWeCareAbout:(id)arg1;
- (void)getStatusReportDictsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handleURLString:(id)arg1;
- (id)stateString;
- (void)reportFolderItemsSyncSuccess:(_Bool)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (_Bool)resetCertWarningsForAccountWithId:(id)arg1 andDataclasses:(long long)arg2;
- (void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (_Bool)hasEASAccountConfigured;
- (id)activeAccountBundleIDs;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(_Bool)arg4;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(_Bool)arg3 isUserRequested:(_Bool)arg4;
- (int)numDisableMonitoringRequests;
- (void)disableMonitoringAgents;
- (void)enableMonitoringAgents;
- (void)_addAccountAggdEntries;
- (void)_stopMonitoringAndSaveAgents;
- (void)agentHasStoppedMonitoring:(id)arg1;
- (void)registerForBuddy;
- (void)_loadAndStartMonitoringAgents;
- (void)_handleCellularDataUsageChangedNotification;
- (void)_registerForCTDataUsageNotificaiton;
- (void)_calDaysToSyncDidChange;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (_Bool)_systemMayNowBeReady;
- (void)clearOrphanedStores;
- (_Bool)_clearOrphanedSubscribedCalendars:(void *)arg1 eventAccountIds:(id)arg2 toDoAccountIds:(id)arg3;
- (_Bool)clearPersistMonitoringAccountID:(id)arg1 clientID:(id)arg2;
- (_Bool)removePersistMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 clientID:(id)arg3;
- (_Bool)addPersistMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 clientID:(id)arg3;
- (_Bool)resumeMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;
- (_Bool)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;
- (_Bool)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;
- (_Bool)startMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;
- (void)requestPolicyUpdateForAccount:(id)arg1;
- (id)currentPolicyKeyForAccount:(id)arg1;
- (_Bool)dadRemoveStoresForAccountWithID:(id)arg1;
- (_Bool)_removeSubscribedCalendarsForAccountWithID:(id)arg1 inStore:(void *)arg2;
- (void)_deviceDidWake;
- (void)_deviceWillSleep;
- (void)saveAndReleaseAgents;
- (void)loadAgents;
- (void)_ensureHolidaySubscribedCalendarExists;
- (id)_phoneVersion;
- (id)_accountInfoPath;
- (id)_configFileForAgent:(id)arg1;
- (void)_simulateNotificationOnWatchedFolders:(id)arg1;
- (id)accountWithAccountID:(id)arg1 andClassName:(id)arg2;
- (id)accountWithAccountID:(id)arg1;
- (id)agentWithAccountID:(id)arg1;
- (void)dealloc;
- (id)init;

@end
