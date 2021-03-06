//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OFReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _localWiFiRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (_Bool)connectionRequired;
- (long long)currentNetworkStatus;
- (long long)_networkStatusForFlags:(unsigned int)arg1;
- (long long)_localWiFiStatusForFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (void)dealloc;
- (id)init;

@end

