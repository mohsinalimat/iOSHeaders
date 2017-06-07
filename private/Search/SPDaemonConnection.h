//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPXPCConnection;
@protocol OS_dispatch_queue;

@interface SPDaemonConnection : NSObject
{
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSString *_daemonName;
    struct __CFDictionary *_runningQueries;
}

+ (id)sharedBackgroundConnection;
+ (id)sharedConnection;
@property(nonatomic) struct __CFDictionary *runningQueries; // @synthesize runningQueries=_runningQueries;
@property(retain, nonatomic) NSString *daemonName; // @synthesize daemonName=_daemonName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDaemonName:(id)arg1;
- (void)sendSFFeedbackMessage:(SEL)arg1 withFeedback:(id)arg2;
- (void)requestParsecParametersWithReply:(CDUnknownBlockType)arg1;
- (void)retrieveFirstTimeExperienceTextWithReply:(CDUnknownBlockType)arg1;
- (void)preheat;
- (void)deactivate;
- (void)activate;
- (void)cancelQuery:(id)arg1;
- (id)startQuery:(id)arg1 withResponse:(id)arg2 isStable:(_Bool)arg3;
- (id)startQuery:(id)arg1 withResponse:(id)arg2 isStable:(_Bool)arg3 queue:(id)arg4;
- (void)sendMessageForToken:(id)arg1 withResponse:(id)arg2 isStable:(_Bool)arg3;
- (id)startQuery:(id)arg1;
- (void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_sendFeedbackMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_connection;
- (void)_resetConnection;

@end

