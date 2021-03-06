//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneLibrary/SSDownloadManagerObserver-Protocol.h>
#import <ToneLibrary/SSPurchaseManagerDelegate-Protocol.h>
#import <ToneLibrary/TLToneStoreDownloadController-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSString, SSDownloadManager, SSPurchaseManager;
@protocol OS_dispatch_queue;

@interface TLToneStoreDownloadStoreServicesController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    NSString *_storeAccountName;
    NSMutableDictionary *_toneStoreDownloadsByStoreDownloadPersistentIdentifiers;
    SSDownloadManager *_storeDownloadManager;
    SSPurchaseManager *_storePurchaseManager;
}

- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)_handleToneManagerContentsDidChangeNotification:(id)arg1;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)redownloadAllTones;
- (void)_openToneStoreWithStoreItemKind:(id)arg1;
- (void)openRingtoneStore;
- (void)openAlertToneStore;
- (void)_notifyObserversOfStartedToneStoreDownloads:(id)arg1 progressedToneStoreDownload:(id)arg2 finishedToneStoreDownloads:(id)arg3;
- (void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
- (void)_notifyObserversOfUpdatedStoreAccountName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_updateStoreAccountName;
@property(readonly, nonatomic) NSString *storeAccountName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

