//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRReachabilityMonitor;

@protocol BRReachabilityObserver <NSObject>
- (void)reachabilityMonitor:(BRReachabilityMonitor *)arg1 didChangeReachabilityStatusTo:(_Bool)arg2;

@optional
- (void)reachabilityMonitor:(BRReachabilityMonitor *)arg1 didChangeReachabilityFlagsTo:(unsigned int)arg2;
@end

