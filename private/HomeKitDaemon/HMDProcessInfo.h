//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDApplicationInfo, NSHashTable;
@protocol OS_dispatch_queue;

@interface HMDProcessInfo : NSObject
{
    _Bool _viewService;
    int _pid;
    unsigned long long _state;
    HMDApplicationInfo *_appInfo;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSHashTable *_connectionProxies;
}

@property(readonly, nonatomic) NSHashTable *connectionProxies; // @synthesize connectionProxies=_connectionProxies;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) __weak HMDApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, nonatomic, getter=isViewService) _Bool viewService; // @synthesize viewService=_viewService;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)activeRequestIdentifiers;
- (void)initiateRefresh;
- (void)removeConnectionProxy:(id)arg1;
- (void)addConnectionProxy:(id)arg1;
@property(readonly, nonatomic) unsigned long long proxyCount;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic, getter=isTerminated) _Bool terminated;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
@property(readonly, nonatomic, getter=isBackgrounded) _Bool background;
@property(readonly, nonatomic, getter=isBackgroundUpgradedToForeground) _Bool backgroundUpgradedToForeground;
@property(readonly, nonatomic, getter=isForegrounded) _Bool foreground;
- (id)description;
- (id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3;
- (id)init;

@end

