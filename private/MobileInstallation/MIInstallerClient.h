//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileInstallation/MobileInstallerDelegateProtocol-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _delegatesCompleteCondMutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _delegatesCompleteCond;
    _Bool _delegatesComplete;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _appDictionaryEnumBlock;
}

+ (id)installerWithAppDictionaryEnumerator:(CDUnknownBlockType)arg1;
+ (id)installerWithProgressBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool delegatesComplete; // @synthesize delegatesComplete=_delegatesComplete;
@property(copy, nonatomic) CDUnknownBlockType appDictionaryEnumBlock; // @synthesize appDictionaryEnumBlock=_appDictionaryEnumBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)dieForTesting;
- (void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateAppDataProtectionWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listSafeHarborsOfType:(long long)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledDeveloperAppsWithMountPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installURL:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_waitForPendingDelegateMessages;
- (void)delegateMessageDeliveryComplete;
- (void)enumerateAppDictionary:(id)arg1 error:(id)arg2;
- (void)reportProgress:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_invalidateObject;

@end

