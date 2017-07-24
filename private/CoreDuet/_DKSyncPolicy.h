//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _DKSyncPolicy : NSObject
{
    _Bool _syncDisabled;
    _Bool _forceSync;
    unsigned long long _assetThresholdInBytes;
    unsigned long long _firstSyncPeriodInDays;
    unsigned long long _minSyncsPerDay;
    unsigned long long _maxSyncsPerDay;
    unsigned long long _numChangesTriggeringSync;
    unsigned long long _singleDeviceSyncIntervalInDays;
    NSArray *_streamNamesWithAdditionsTriggeringSync;
    NSArray *_streamNamesWithDeletionsTriggeringSync;
    unsigned long long _syncTimeoutInSeconds;
    unsigned long long _policyDownloadIntervalInDays;
}

+ (id)configurationPlist;
+ (id)syncPolicyConfigPath;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)policyFromDictionary:(id)arg1;
+ (id)forceSyncPolicy;
+ (id)policy;
+ (id)userDefaults;
@property(nonatomic) unsigned long long policyDownloadIntervalInDays; // @synthesize policyDownloadIntervalInDays=_policyDownloadIntervalInDays;
@property(nonatomic) _Bool forceSync; // @synthesize forceSync=_forceSync;
@property(nonatomic) unsigned long long syncTimeoutInSeconds; // @synthesize syncTimeoutInSeconds=_syncTimeoutInSeconds;
@property(retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync; // @synthesize streamNamesWithDeletionsTriggeringSync=_streamNamesWithDeletionsTriggeringSync;
@property(retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync; // @synthesize streamNamesWithAdditionsTriggeringSync=_streamNamesWithAdditionsTriggeringSync;
@property(nonatomic) unsigned long long singleDeviceSyncIntervalInDays; // @synthesize singleDeviceSyncIntervalInDays=_singleDeviceSyncIntervalInDays;
@property(nonatomic) unsigned long long numChangesTriggeringSync; // @synthesize numChangesTriggeringSync=_numChangesTriggeringSync;
@property(nonatomic) unsigned long long maxSyncsPerDay; // @synthesize maxSyncsPerDay=_maxSyncsPerDay;
@property(nonatomic) unsigned long long minSyncsPerDay; // @synthesize minSyncsPerDay=_minSyncsPerDay;
@property(nonatomic) unsigned long long firstSyncPeriodInDays; // @synthesize firstSyncPeriodInDays=_firstSyncPeriodInDays;
@property(nonatomic) unsigned long long assetThresholdInBytes; // @synthesize assetThresholdInBytes=_assetThresholdInBytes;
@property(nonatomic) _Bool syncDisabled; // @synthesize syncDisabled=_syncDisabled;
- (void).cxx_destruct;
- (id)description;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1;
- (id)queryStartDateFromLastDaySyncDates:(id)arg1 lastSyncDate:(id)arg2 isSingleDevice:(_Bool)arg3 isTriggeredSync:(_Bool)arg4;
- (id)initWithSyncDisabled:(id)arg1 assetThresholdInBytes:(id)arg2 firstSyncPeriodInDays:(id)arg3 minSyncsPerDay:(id)arg4 maxSyncsPerDay:(id)arg5 numChangesTriggeringSync:(id)arg6 policyDownloadIntervalInDays:(id)arg7 singleDeviceSyncIntervalInDays:(id)arg8 streamNamesWithAdditionsTriggeringSync:(id)arg9 streamNamesWithDeletionsTriggeringSync:(id)arg10 syncTimeoutInSeconds:(id)arg11;

@end

