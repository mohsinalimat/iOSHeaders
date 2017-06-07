//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEONavdClientInfo, GEOPlannedDestination, NSUUID;

@protocol GEONavdXPCInterface <NSObject>
- (void)forceCacheRefresh;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(GEOPlannedDestination *)arg2 fromClient:(GEONavdClientInfo *)arg3;
- (void)stopMonitoringDestination:(GEOPlannedDestination *)arg1 forClient:(GEONavdClientInfo *)arg2 uuid:(NSUUID *)arg3;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(GEOPlannedDestination *)arg1 client:(GEONavdClientInfo *)arg2;
- (void)requestRefreshForPlannedDestination:(GEOPlannedDestination *)arg1 client:(GEONavdClientInfo *)arg2;
- (void)startMonitoringDestination:(GEOPlannedDestination *)arg1 forClient:(GEONavdClientInfo *)arg2 uuid:(NSUUID *)arg3;
- (void)statusWithCallback:(void (^)(NSDictionary *))arg1;
@end

