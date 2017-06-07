//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFNetServiceBrowserDelegate-Protocol.h>

@class HMFNetService, HMFNetServiceBrowser, NSString;
@protocol OS_dispatch_queue, _HMFNetServiceMonitorDelegate;

@interface _HMFNetServiceMonitor : NSObject <HMFNetServiceBrowserDelegate, HMFLogging>
{
    _Bool _reachable;
    HMFNetService *_netService;
    id <_HMFNetServiceMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFNetServiceBrowser *_netServiceBrowser;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMFNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <_HMFNetServiceMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)notifyDelegateOfReachabilityChange:(_Bool)arg1;
- (void)setReachable:(_Bool)arg1;
@property(readonly, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
- (void)notifyDelegateOfUpdatedNetService:(id)arg1;
- (void)setNetService:(id)arg1;
@property(readonly, copy) HMFNetService *netService; // @synthesize netService=_netService;
- (id)logIdentifier;
- (id)initWithNetService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

