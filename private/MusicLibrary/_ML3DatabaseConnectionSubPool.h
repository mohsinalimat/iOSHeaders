//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _ML3DatabaseConnectionSubPool : NSObject
{
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    int _connectionsProfilingLevel;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
    _Bool _useReadOnlyConnections;
    _Bool _useDistantConnections;
    NSString *_databasePath;
    unsigned long long _maxConcurrentConnections;
    unsigned long long _connectionsJournalingMode;
}

@property(nonatomic) unsigned long long connectionsJournalingMode; // @synthesize connectionsJournalingMode=_connectionsJournalingMode;
@property(nonatomic) _Bool useDistantConnections; // @synthesize useDistantConnections=_useDistantConnections;
@property(nonatomic) _Bool useReadOnlyConnections; // @synthesize useReadOnlyConnections=_useReadOnlyConnections;
@property(readonly, nonatomic) unsigned long long maxConcurrentConnections; // @synthesize maxConcurrentConnections=_maxConcurrentConnections;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (void)_handleDatabaseDeletion;
- (void)closeConnectionsAndWaitForBusyConnections:(_Bool)arg1;
- (void)checkInConnection:(id)arg1;
- (id)checkoutConnection:(_Bool *)arg1;
@property(nonatomic) int connectionsProfilingLevel;
- (void)dealloc;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxConcurrentConnections:(unsigned long long)arg2;

@end

