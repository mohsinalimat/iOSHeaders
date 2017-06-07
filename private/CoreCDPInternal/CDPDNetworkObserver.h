//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CDPDNetworkObserver : NSObject
{
    _Bool _networkIsReachable;
    NSLock *_clientsLock;
    NSMutableDictionary *_clientsByUUID;
    struct __SCNetworkReachability *_networkReach;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeObserverWithToken:(id)arg1;
- (id)addNetworkObserverWithEventHandler:(CDUnknownBlockType)arg1;
- (void)_networkReachabilityDidChangeWithFlags:(unsigned int)arg1;
- (void)startObservingNetwork;
- (id)init;

@end
