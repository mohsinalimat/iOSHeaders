//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKDaemonProxy, GKPlayerInternal, GKThreadsafeDictionary, NSDictionary;

@interface GKServiceProxy : NSObject
{
    NSDictionary *_serviceLookup;
    GKThreadsafeDictionary *_pendingRequests;
    unsigned int _serviceGeneration;
    GKDaemonProxy *_baseProxy;
    GKPlayerInternal *_localPlayer;
}

@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDaemonProxy *baseProxy; // @synthesize baseProxy=_baseProxy;
@property(retain) NSDictionary *serviceLookup; // @synthesize serviceLookup=_serviceLookup;
@property unsigned int serviceGeneration; // @synthesize serviceGeneration=_serviceGeneration;
@property(retain) GKThreadsafeDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void)buildServiceLookup;
- (void)buildServiceLookupIfNeccessary;
- (void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3;
- (void)replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (id)requestIdentifierForInvocation:(id)arg1;
- (id)gameSessionServicePrivate;
- (id)gameSessionService;
- (id)analyticsServicePrivate;
- (id)analyticsService;
- (id)bulletinServicePrivate;
- (id)bulletinService;
- (id)utilityServicePrivate;
- (id)utilityService;
- (id)turnBasedServicePrivate;
- (id)turnBasedService;
- (id)multiplayerServicePrivate;
- (id)multiplayerService;
- (id)challengeServicePrivate;
- (id)challengeService;
- (id)gameStatServicePrivate;
- (id)gameStatService;
- (id)gameServicePrivate;
- (id)gameService;
- (id)friendServicePrivate;
- (id)friendService;
- (id)profileServicePrivate;
- (id)profileService;
- (id)accountServicePrivate;
- (id)accountService;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

@end

