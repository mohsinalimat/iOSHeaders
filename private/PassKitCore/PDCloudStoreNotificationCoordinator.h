//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PDCloudStoreManagerDelegate-Protocol.h>
#import <PassKitCore/PDPushNotificationConsumer-Protocol.h>

@class CKServerChangeToken, NSHashTable, NSSet, NSString, PDCloudStoreManager, PDPushNotificationManager;
@protocol OS_dispatch_queue;

@interface PDCloudStoreNotificationCoordinator : NSObject <PDPushNotificationConsumer, PDCloudStoreManagerDelegate>
{
    NSHashTable *_observers;
    PDPushNotificationManager *_pushNotificationManager;
    PDCloudStoreManager *_cloudStoreManager;
    CKServerChangeToken *_currentServerChangeToken;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_pushTopics;
}

- (void).cxx_destruct;
- (void)applyPushNotificationToken:(id)arg1;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)pushNotificationTopics;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)allItemsOfClassType:(Class)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)fetchAndStoreChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)cloudStoreManager:(id)arg1 createdZoneWithName:(id)arg2;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cloudStoreInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
