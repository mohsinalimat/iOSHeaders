//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSBaseXPCClient.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface BKSProcessAssertionClient : BSBaseXPCClient
{
    NSMapTable *_assertionHandlersByIdentifier;
    NSObject<OS_dispatch_queue> *_assertionQueue;
}

+ (id)assertionQueue;
+ (id)sharedInstance;
- (void)_assertionQueue_unregisterHandlerWithIdentifier:(id)arg1 andNotify:(_Bool)arg2;
- (void)_assertionQueue_sendEvent:(id)arg1 forMessageType:(unsigned long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_connectionQueue_invalidateAllAssertions;
- (void)_connectionQueue_handleDestroy:(id)arg1;
- (void)queue_connectionWasDestroyed;
- (void)queue_handleMessage:(id)arg1;
- (id)description;
- (void)unregisterClientHandlerForAssertionIdentifier:(id)arg1;
- (void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2;
- (double)backgroundTimeRemaining:(int)arg1;
- (void)sendDestroyAssertion:(id)arg1;
- (void)sendUpdateAssertion:(id)arg1;
- (_Bool)sendCreateAssertion:(id)arg1;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;

@end

