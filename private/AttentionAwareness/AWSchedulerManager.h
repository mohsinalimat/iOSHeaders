//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol AWScheduler, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWSchedulerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_semaphores;
    NSXPCConnection *_connection;
    id <AWScheduler> _scheduler;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)interruptOperationsWithError:(id)arg1;
- (void)removeSemaphore:(id)arg1;
- (id)createSemaphore;
- (id)scheduler;
- (id)init;

@end

