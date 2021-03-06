//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSyncService-Protocol.h>
#import <MobileTimer/MTSyncServiceDelegate-Protocol.h>
#import <MobileTimer/PSYSyncCoordinatorDelegate-Protocol.h>

@class MTSyncStateOperation, NSString, PSYServiceSyncSession, PSYSyncCoordinator;
@protocol MTSyncService, NAScheduler;

@interface MTPairedSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, MTSyncServiceDelegate, MTSyncService>
{
    unsigned long long _state;
    NSString *_serviceName;
    id <MTSyncService> _syncService;
    PSYSyncCoordinator *_syncCoordinator;
    PSYServiceSyncSession *_session;
    MTSyncStateOperation *_pendingOperation;
    id <NAScheduler> _serializer;
}

@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTSyncStateOperation *pendingOperation; // @synthesize pendingOperation=_pendingOperation;
@property(retain, nonatomic) PSYServiceSyncSession *session; // @synthesize session=_session;
@property(retain, nonatomic) PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(nonatomic) __weak id <MTSyncService> syncService; // @synthesize syncService=_syncService;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)_queue_beginSyncSession;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)supportsMigrationSync;
- (void)service:(id)arg1 didScheduleRetryOfSyncOperation:(id)arg2 forError:(id)arg3;
- (void)service:(id)arg1 didFailSyncOperation:(id)arg2 withError:(id)arg3;
- (_Bool)_isCompletedOperationForOutstandingSession:(id)arg1;
- (void)service:(id)arg1 didCompleteSyncOperation:(id)arg2;
- (void)service:(id)arg1 didBeginSyncOperation:(id)arg2;
- (void)service:(id)arg1 didRequestSyncOperation:(id)arg2;
- (void)performSyncOperation:(id)arg1;
- (void)_queue_completeSession;
- (void)_queue_completePendingSession;
- (void)teardown;
- (void)stop;
- (void)start;
- (void)setup;
- (_Bool)shouldSync;
- (id)initWithServiceName:(id)arg1 syncService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

