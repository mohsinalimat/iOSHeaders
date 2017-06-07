//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOLogMessage, GEOLogMsgState, NSObject;
@protocol GEOLogAdaptor, OS_dispatch_queue;

@protocol GEOLogAdaptor <NSObject>
- (NSObject<OS_dispatch_queue> *)adaptorQueue;
- (_Bool)isLogFrameworkAdaptor;
- (void)flushLogs;
- (void)queueLogMessage:(GEOLogMessage *)arg1;
- (_Bool)acceptsLogMessageOfType:(int)arg1 subType:(int)arg2;

@optional
- (void)forceFlushLogs;
- (void)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)registerLogMsgState:(GEOLogMsgState *)arg1;
- (void)adaptorDidGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)adaptorDidGetAdded:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetAdded:(id <GEOLogAdaptor>)arg1;
@end

