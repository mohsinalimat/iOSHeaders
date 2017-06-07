//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOBaseLogAdaptor.h>

@class NSLock, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface GEOXPCClientLogAdaptor : GEOBaseLogAdaptor
{
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
    CDUnknownBlockType _xpcConnectionEstablishedCallback;
    _Bool _flushLogsFailed;
    NSMutableArray *_failedLogMessages;
    NSLock *_failedLogMessagesLock;
}

- (void)_resendFailedXPCMessages;
- (void)_handleFailedXPCMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_createAndSendXPCMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)forceFlushLogs;
- (void)flushLogs;
- (void)queueLogMessage:(id)arg1;
- (void)setupXPCRemoteAdatorsWithOptions:(id)arg1 connectionEstablishedCallback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

