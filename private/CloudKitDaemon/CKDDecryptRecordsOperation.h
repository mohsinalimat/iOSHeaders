//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDDecryptRecordsOperation : CKDDatabaseOperation
{
    _Bool _forcePCSDecrypt;
    _Bool _started;
    _Bool _markedToFinish;
    NSMutableArray *_outstandingDecryptions;
    NSObject<OS_dispatch_group> *_recordDecryptGroup;
    NSObject<OS_dispatch_queue> *_recordDecryptQueue;
    unsigned long long _maxUnwrapAttempts;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(nonatomic) unsigned long long maxUnwrapAttempts; // @synthesize maxUnwrapAttempts=_maxUnwrapAttempts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordDecryptQueue; // @synthesize recordDecryptQueue=_recordDecryptQueue;
@property(getter=isMarkedToFinish) _Bool markedToFinish; // @synthesize markedToFinish=_markedToFinish;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup; // @synthesize recordDecryptGroup=_recordDecryptGroup;
@property(retain, nonatomic) NSMutableArray *outstandingDecryptions; // @synthesize outstandingDecryptions=_outstandingDecryptions;
@property(nonatomic) _Bool forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
- (void).cxx_destruct;
- (void)main;
- (void)_finishDecryptOperation;
- (void)finishDecryption;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapPackageAssets:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapAssetKey:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)_handleProtectionDataForRecordInfo:(id)arg1;
- (void)_handleShareProtectionDataForRecordInfo:(id)arg1;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingChainPCS:(id)arg2;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingSharePCS:(id)arg2;
- (void)_handleZoneProtectionDataForRecordInfo:(id)arg1;
- (void)_decryptRecordInfo:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_decryptRecordInfo:(id)arg1;
- (void)_clearProtectionDataForRecordInfo:(id)arg1;
- (_Bool)operationShouldBeFlowControlled;
- (_Bool)shouldCheckAppVersion;
- (void)_recordInfoWasDecrypted:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)decryptRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

