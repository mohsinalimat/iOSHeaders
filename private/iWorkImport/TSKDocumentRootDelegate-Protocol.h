//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKAccessControllerDelegate-Protocol.h>

@class NSObject, NSString, NSURL, SFUCryptoKey, TSKDocumentRoot, TSKSharingState, TSPDocumentRevision, TSPObjectContext;
@protocol NSFilePresenter, OS_dispatch_queue, TSKCachedDocumentInfo;

@protocol TSKDocumentRootDelegate <TSKAccessControllerDelegate>
@property(readonly, nonatomic) NSURL *fileURL;

@optional
@property(readonly, nonatomic) id <TSKCachedDocumentInfo> tskCachedDocumentInfo;
@property(readonly, retain, nonatomic) SFUCryptoKey *encryptionKey;
@property(readonly, nonatomic) id <NSFilePresenter> cloudFilePresenter;
- (void)documentRootDidRollbackOfflineCommands:(TSKDocumentRoot *)arg1;
- (void)sharingStateRefreshed:(TSKSharingState *)arg1 isUserInitiated:(_Bool)arg2 isContinuingActivity:(_Bool)arg3 completionBlock:(void (^)(void))arg4;
- (void)refreshSharingStateWithReason:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(TSKSharingState *, NSError *))arg3;
- (void)refreshSharingStateWithReason:(NSString *)arg1 isUserInitiated:(_Bool)arg2 refreshPrivacy:(_Bool)arg3 migrateIfNecessary:(_Bool)arg4 queue:(NSObject<OS_dispatch_queue> *)arg5 completionBlock:(void (^)(TSKSharingState *, NSError *))arg6;
- (void)documentRoot:(TSKDocumentRoot *)arg1 didUpdateDocumentRevision:(TSPDocumentRevision *)arg2;
- (TSKSharingState *)sharingStateForContext:(TSPObjectContext *)arg1;
@end

