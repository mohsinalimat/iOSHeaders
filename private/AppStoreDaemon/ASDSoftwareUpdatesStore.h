//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

#import <AppStoreDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDSoftwareUpdatesStore : ASDBaseClient <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

- (void).cxx_destruct;
- (void)_setupConnection;
- (void)_call:(id)arg1 run:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updateAllWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showApplicationUpdateBulletin;
- (void)showApplicationBadgeForPendingUpdates;
- (void)removeUpdateBulletins;
- (void)reloadForSettingsFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hideApplicationBadgeForPendingUpdates;
- (_Bool)hasEntitlement;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUpdateableFirstPartyAppMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

