//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSArray, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HMDUserManagementOperationManager : NSObject <HMFTimerDelegate>
{
    NSMutableArray *_operations;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFTimer *_saveTimer;
    NSHashTable *_observedAccessories;
}

+ (void)setSharedManager:(id)arg1;
+ (id)sharedManager;
+ (void)initialize;
@property(readonly, nonatomic) NSHashTable *observedAccessories; // @synthesize observedAccessories=_observedAccessories;
@property(readonly, nonatomic) HMFTimer *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)_reallySave;
- (void)__save;
- (void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)arg1;
- (void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)arg1;
- (void)__registerIfNeededForReachablityChangeNotifications;
- (void)_handleAccessoryIsReachable:(id)arg1;
- (void)__removeOperationAndProcessDependantOperations:(id)arg1;
- (void)__executeOperation:(id)arg1;
- (void)operationStoppedBackingOff:(id)arg1;
- (void)operationCancelled:(id)arg1;
- (void)cancelAllOperations;
- (void)_handleRemovedOperation:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)_handleAddedOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)_cleanPriorOperations:(id)arg1;
- (id)_filteredOperationsWithDependency:(id)arg1;
- (id)_filteredOperationsForAccessory:(id)arg1;
@property(readonly, nonatomic) NSArray *operations;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithOperations:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

