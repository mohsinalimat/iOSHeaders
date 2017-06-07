//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOLogAdaptor-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface GEOBaseLogAdaptor : NSObject <GEOLogAdaptor>
{
    NSMutableArray *_supportedLogMessageTypes;
    NSMutableArray *_supportedLogMessageSubTypes;
    NSObject<OS_dispatch_queue> *_adaptorQueue;
}

- (id)adaptorQueue;
- (_Bool)isLogFrameworkAdaptor;
- (void)flushLogs;
- (void)queueLogMessage:(id)arg1;
- (_Bool)acceptsLogMessageOfType:(int)arg1 subType:(int)arg2;
- (void)removeSupportForLogMessageType:(int)arg1 subType:(int)arg2;
- (void)addSupportForLogMessageType:(int)arg1 subType:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

