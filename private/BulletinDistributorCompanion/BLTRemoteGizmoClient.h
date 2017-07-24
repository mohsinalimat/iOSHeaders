//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTRemoteObject.h>

#import <BulletinDistributorCompanion/BLTBulletinSendQueueDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTGizmoClient-Protocol.h>

@class BLTBulletinSendQueuePassthrough, NSString;
@protocol BLTCompanionServer;

@interface BLTRemoteGizmoClient : BLTRemoteObject <BLTBulletinSendQueueDelegate, BLTGizmoClient>
{
    BLTBulletinSendQueuePassthrough *_bulletinSendQueue;
    id <BLTCompanionServer> _server;
}

@property(nonatomic) __weak id <BLTCompanionServer> server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)queuePendingRequests;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)handleWillSendLightsAndSirensRequest:(id)arg1;
- (void)handleShouldSuppressLightsAndSirensNowRequest:(id)arg1;
- (void)handleHandlePairedDeviceReady:(id)arg1;
- (void)handleDidPlayLightsAndSirensReply:(id)arg1;
- (void)handleRemoveBulletinRequest:(id)arg1;
- (void)handleSupplementaryActionRequest:(id)arg1;
- (void)handleDismissActionRequest:(id)arg1;
- (void)handleSnoozeActionRequest:(id)arg1;
- (void)handleAcknowledgeActionRequest:(id)arg1;
- (void)_pingPairedDeviceWithRetry:(unsigned long long)arg1;
- (void)_pingPairedDevice;
- (void)setLastKnownConnectionStatus:(unsigned long long)arg1;
- (void)updateBulletinList:(id)arg1;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3 withTimeout:(id)arg4;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 withTimeout:(id)arg4;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)addBulletinSummary:(id)arg1;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2 updateType:(unsigned long long)arg3 withTimeout:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2 updateType:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2;
- (void)_handleSyncStateChanged:(id)arg1;
- (void)registerProtobufHandlers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

