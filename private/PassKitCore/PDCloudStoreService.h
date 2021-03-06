//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import <PassKitCore/PDCloudStoreServiceExportedInterface-Protocol.h>

@class NSString, PDCloudStoreNotificationCoordinator, PKEntitlementWhitelist;

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;
}

@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
- (void).cxx_destruct;
- (void)fetchAndStoreRecordsForPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

