//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VisualVoicemail/VMTranscriptionService-Protocol.h>

@class NSArray, NSError, NSRecursiveLock, NSString, VMVoicemailTranscriptionController, VMVoicemailTranscriptionTask;

@interface VVService : NSObject <VMTranscriptionService>
{
    NSRecursiveLock *_lock;
    long long _capabilities;
    int _mailboxUsage;
    double _trashCompactionAge;
    unsigned int _unreadCount;
    unsigned int _trashedCount;
    NSError *_passwordError;
    NSError *_activationError;
    NSString *_password;
    NSString *_passwordMailboxName;
    NSArray *_retryIntervals;
    int _retryIntervalIndex;
    id _carrierParameters;
    Class _notificationInterpreter;
    struct {
        unsigned int offline:1;
        unsigned int subscribed:1;
        unsigned int initialSetupRequired:1;
        unsigned int fakeInitialSetup:1;
        unsigned int launchedWithFakeInitialSetup:1;
        unsigned int mwiState:1;
        unsigned int notificationFallbackEnabled:1;
        unsigned int capabilitiesLoaded:1;
    } _serviceFlags;
    NSString *_serviceIdentifier;
    VMVoicemailTranscriptionController *_transcriptionController;
    VMVoicemailTranscriptionTask *_transcriptionTask;
    unsigned long long _numFailedAttemptsToSyncOverWifi;
    struct __CFString *_lastConnectionTypeUsed;
}

+ (void)releaseInsomniaAssertion;
+ (void)obtainInsomniaAssertion;
+ (void)_setInsomniaStateSupressed:(_Bool)arg1;
+ (void)_acquireAssertionsForInsomniaState:(_Bool)arg1;
+ (unsigned int)_voicemailPowerAssertion;
+ (struct __CTServerConnection *)CTServerConnection;
+ (_Bool)sharedServiceIsSubscribed;
+ (_Bool)_lockedSharedServiceIsSubscribed;
+ (id)sharedService;
+ (void)_handleSIMChanged;
+ (void)_subscriptionStateChanged;
+ (_Bool)_vvmAssertionReady;
+ (_Bool)_waitingForInsomniaStateToBecomeActive;
+ (void)initialize;
+ (id)transcriptionLanguageCodes;
@property(nonatomic) struct __CFString *lastConnectionTypeUsed; // @synthesize lastConnectionTypeUsed=_lastConnectionTypeUsed;
@property(nonatomic) unsigned long long numFailedAttemptsToSyncOverWifi; // @synthesize numFailedAttemptsToSyncOverWifi=_numFailedAttemptsToSyncOverWifi;
@property(retain, nonatomic) VMVoicemailTranscriptionTask *transcriptionTask; // @synthesize transcriptionTask=_transcriptionTask;
@property(retain, nonatomic) VMVoicemailTranscriptionController *transcriptionController; // @synthesize transcriptionController=_transcriptionController;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (void)handleVVServiceDataAvailableNotification:(id)arg1;
- (struct __CFString *)dataConnectionServiceTypeOverride;
- (void)scheduleImmediateSynchronizeRetryOverCellular;
- (_Bool)lastUsedConnectionTypeWasCellular;
- (void)setLastUsedConnectionType:(struct __CFString *)arg1;
- (_Bool)shouldImmediatelyRetrySyncOverCellular;
- (void)reportSucessfulSync;
- (void)reportFailedToSyncOverWifi;
- (void)_attemptScheduledTrashCompaction:(id)arg1;
- (void)_cancelAutomatedTrashCompaction;
- (void)cancelAutomatedTrashCompaction;
- (void)_scheduleAutomatedTrashCompaction;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (id)retryIntervals;
- (void)_attemptDelayedSynchronize;
- (void)resetDelayedSynchronizationAttemptCount;
- (void)cancelDelayedSynchronize;
- (void)reportError:(id)arg1;
- (void)moveRecordsWithIdentifiersToInbox:(id)arg1;
- (void)moveRecordsWithIdentifiersToTrash:(id)arg1;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned long long)arg3;
- (_Bool)greetingAvailable;
- (void)retrieveGreeting;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)clearRemoteUIDsForDetachedMessages;
- (void)retrieveDataForRecord:(void *)arg1;
- (void)synchronize:(_Bool)arg1;
- (_Bool)isSyncInProgress;
- (_Bool)greetingFetchExistsProgressiveLoadInProgress:(_Bool *)arg1;
- (_Bool)synchronizationPending;
- (_Bool)headerChangesPending;
- (_Bool)dataForRecordPending:(void *)arg1 progressiveLoadInProgress:(_Bool *)arg2;
- (void)progressiveDataLengthsForRecord:(void *)arg1 expected:(unsigned int *)arg2 current:(unsigned int *)arg3;
- (_Bool)taskOfTypeExists:(long long)arg1;
- (_Bool)shouldScheduleAutoTrashOnMailboxUsageChange;
- (_Bool)doesClientManageTrashCompaction;
- (id)carrierParameterValueForKey:(id)arg1;
- (long long)mailboxGreetingType;
- (_Bool)passwordChangeRequiresEnteringOldPassword;
- (int)maximumPasswordLength;
- (int)minimumPasswordLength;
- (int)maximumRecordedNameDuration;
- (int)maximumGreetingDuration;
- (void)cancelPasswordRequest;
- (void)displayPasswordRequestIfNecessary;
- (void)handlePasswordRequestCancellation;
- (id)provisionalPassword;
- (void)setProvisionalPassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)passwordIgnoringSubscription:(_Bool)arg1;
- (id)password;
- (_Bool)isPasswordReady;
- (void)_handleIndicatorNotification:(struct __CFDictionary *)arg1;
- (_Bool)respectsMWINotifications;
- (void)handleNotification:(id)arg1 isMWI:(_Bool)arg2;
- (Class)notificationInterpreterClass;
- (void)_cancelIndicatorAction;
- (void)_reactToIndicator;
- (void)setMessageWaiting:(_Bool)arg1;
- (_Bool)isMessageWaiting;
- (_Bool)isInSync;
- (void)_scheduleFallbackActivityIfNecessary;
- (void)_enterFallbackMode;
- (void)_deliverFallbackNotification;
- (void)cancelNotificationFallback;
- (void)_handleSMSReady:(_Bool)arg1;
- (void)_handleSMSCAvailable;
- (void)clearActivationError;
- (id)activationError;
- (void)_contextActivationSucceeded:(id)arg1;
- (void)_setActivationError:(id)arg1;
- (void)_reportReachabilityChange:(id)arg1;
- (void)_updateOnlineStatus;
- (_Bool)isOfflineDueToRoaming;
- (_Bool)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary *)arg1;
- (struct __CFString *)connectionServiceType;
- (void)setOnline:(_Bool)arg1;
- (void)_setOnline:(_Bool)arg1 fallbackMode:(_Bool)arg2;
- (_Bool)isOnline;
- (void)updateLoggingSettings;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)resetCounts;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)setTrashedCount:(unsigned int)arg1;
- (unsigned int)trashedCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (unsigned int)unreadCount;
- (void)setMailboxUsage:(int)arg1;
- (int)mailboxUsage;
- (_Bool)sharedSubscriptionRequiresSetup;
- (void)setMailboxRequiresSetup:(_Bool)arg1;
- (_Bool)mailboxRequiresSetup;
- (id)mailboxName;
- (void)kill;
- (void)setSubscribed:(_Bool)arg1;
- (_Bool)isVVMAvailableOverWiFi;
- (_Bool)isSubscribed;
- (long long)capabilities;
- (void)retranscribeAllVoicemails;
- (void)dealloc;
- (id)init;
- (void)_callStatusChanged;
- (void)_carrierBundleChanged;
- (void)_dataAvailabilityChanged;
- (void)_dataRoamingStatusChanged;
- (_Bool)doTrashCompaction;
- (_Bool)shouldTrashCompactRecord:(void *)arg1;
- (double)trashCompactionAge;
- (void)handleAFPreferencesDidChangeNotification:(id)arg1;
- (_Bool)isSupportedTranscriptionLanguageCode:(id)arg1;
- (void)reportTranscriptionRatedAccurate:(_Bool)arg1 forRecord:(const void *)arg2;
- (void)reportTranscriptionProblemForRecord:(const void *)arg1;
- (void)processTranscriptForRecord:(const void *)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isTranscriptionAvailable) _Bool transcriptionAvailable;
- (void)unloadTranscriptionService;
- (void)loadTranscriptionService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

