//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTTTestServiceServerExportedInterface-Protocol.h>
#import <BulletinDistributorCompanion/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCListener;

@interface BLTTestServiceServer : NSObject <NSXPCListenerDelegate, BLTTTestServiceServerExportedInterface>
{
    NSMutableArray *_clientConnections;
    NSXPCListener *_listener;
}

+ (id)sharedTestServer;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
- (void).cxx_destruct;
- (void)removeSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)overriddenSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)originalSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)settingOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disableStandaloneTestModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSectionInfoSentCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_removeClientConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

