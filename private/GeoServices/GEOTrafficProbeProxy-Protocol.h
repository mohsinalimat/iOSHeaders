//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GEOApplicationAuditToken, NSData, NSDate, NSString;

@protocol GEOTrafficProbeProxy
- (void)reportBatchTrafficProbes:(NSData *)arg1 auditToken:(GEOApplicationAuditToken *)arg2;
- (void)reportRealtimeTrafficProbes:(NSData *)arg1 probeCount:(unsigned long long)arg2 recvTime:(NSDate *)arg3 forTripId:(NSString *)arg4 auditToken:(GEOApplicationAuditToken *)arg5;
@end

