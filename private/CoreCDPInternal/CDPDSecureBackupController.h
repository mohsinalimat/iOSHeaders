//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, CDPDSecureBackupConfiguration, NSDictionary;
@protocol CDPDSecureBackupDelegate, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

@interface CDPDSecureBackupController : NSObject
{
    _Bool _fakeNearlyDepletedRecords;
    CDPContext *_context;
    id <CDPStateUIProviderInternal> _uiProvider;
    id <CDPDSecureBackupDelegate> _delegate;
    NSDictionary *_cachedAccountInfo;
    id <CDPDSecureBackupProxy> _secureBackupProxy;
    CDPDSecureBackupConfiguration *_configuration;
}

+ (id)_sanitizedInfoDictionary:(id)arg1;
@property(retain, nonatomic) CDPDSecureBackupConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <CDPDSecureBackupProxy> secureBackupProxy; // @synthesize secureBackupProxy=_secureBackupProxy;
@property(nonatomic) _Bool fakeNearlyDepletedRecords; // @synthesize fakeNearlyDepletedRecords=_fakeNearlyDepletedRecords;
@property(retain, nonatomic) NSDictionary *cachedAccountInfo; // @synthesize cachedAccountInfo=_cachedAccountInfo;
@property(readonly, nonatomic) __weak id <CDPDSecureBackupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(retain, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)_disableRecoveryKey:(id *)arg1;
- (void)disableRecoveryKeyWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_disableSecureBackup:(id *)arg1;
- (void)disableSecureBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_recoveryInfoDictionaryFromContext:(id)arg1;
- (id)_recoverBackupDictionaryWithContext:(id)arg1 error:(id *)arg2;
- (void)recoverSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)_currentAnisetteData;
- (id)stashedPRK;
- (_Bool)_disableThenEnableWithInfo:(id)arg1 error:(id *)arg2;
- (void)_authenticatedEnableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)authenticatedEnableSecureBackupWithRecoveryKey:(id)arg1 error:(id *)arg2;
- (void)enableSecureBackupWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)supportsRecoveryKey;
- (void)checkForExistingRecordMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForExistingRecordWithPeerId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForExistingRecord:(CDUnknownBlockType)arg1;
- (void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cdpBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg1;
- (id)_dateWithSecureBackupDateString:(id)arg1;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBackupRecordDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)backupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg1;
- (void)isEligibleForCDPWithCompletion:(CDUnknownBlockType)arg1;
- (id)_accountInfo:(id *)arg1;
- (void)clearAccountInfoCache;
- (void)accountInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)synchronizeKeyValueStoreWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3;
- (id)initWithContext:(id)arg1 proxy:(id)arg2;
- (id)init;

@end

