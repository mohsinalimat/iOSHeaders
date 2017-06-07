//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject
{
    _Bool _invalid;
    _Bool _interrupted;
    int _listenerResumedToken;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_xpcSetupQueue;
    NSMutableArray *_observers;
}

+ (id)sharedManager;
+ (id)hotspotInterface;
+ (id)hotspotClientInterface;
+ (id)unlockInterface;
+ (id)scannerInterface;
+ (id)scannerClientInterface;
+ (id)advertiserInterface;
+ (id)advertiserClientInterface;
+ (id)serviceManagerInterface;
+ (id)serviceManagerClientInterface;
+ (id)xpcManagerInterface;
+ (void)initialize;
@property(retain) NSMutableArray *observers; // @synthesize observers=_observers;
@property _Bool interrupted; // @synthesize interrupted=_interrupted;
@property int listenerResumedToken; // @synthesize listenerResumedToken=_listenerResumedToken;
@property(retain) NSObject<OS_dispatch_queue> *xpcSetupQueue; // @synthesize xpcSetupQueue=_xpcSetupQueue;
@property(getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)appleAccountSignedOut;
- (void)appleAccountSignedIn;
- (void)userDidSelectAppWithIndex:(id)arg1 forRecordID:(id)arg2;
- (void)userDidPerformActionWithType:(unsigned long long)arg1 andRecordID:(id)arg2;
- (void)addAirDropClientToManager:(id)arg1 withFailureHandler:(CDUnknownBlockType)arg2;
- (void)airdropTransferDataProviderForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)unlockManagerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)notifyOfInvalidation;
- (void)notifyOfResume;
- (void)notifyOfInterruption;
- (void)setupConnection;
- (void)dealloc;
- (id)init;

@end

