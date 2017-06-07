//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUNetworkReachability : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct __SCNetworkReachability *_reachabilityRef;
    long long _enableCount;
    NSString *_hostName;
    _Bool _notifierActive;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    long long _lastKnownStatus;
}

+ (long long)networkStatusForFlags:(unsigned int)arg1;
+ (void)internetReachabilityStatusWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)internetReachabilityStatusQueue;
+ (id)networkReachabilityForInternetConnection;
+ (id)networkReachabilityForDocumentResources;
+ (id)networkReachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)networkReachabilityWithHostName:(id)arg1;
+ (id)networkReachabilityWithNetworkReachabilityRef:(struct __SCNetworkReachability *)arg1 hostNameOrNil:(id)arg2;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefForInternetConnection;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefWithAddress:(const struct sockaddr_in *)arg1;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefWithHostName:(const char *)arg1;
+ (_Bool)synchronousHostLookup:(id)arg1;
@property(nonatomic) long long lastKnownStatus; // @synthesize lastKnownStatus=_lastKnownStatus;
@property(nonatomic) _Bool notifierActive; // @synthesize notifierActive=_notifierActive;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
- (void)enableNotifier;
- (void)disableNotifier;
- (void)stopNotifier;
- (void)startNotifier;
- (long long)statusFromFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (struct sockaddr_in)hostAddress;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;
- (id)init;

@end

