//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary;

@protocol _RWIClientToRelayMessageReceiver
- (void)_rpc_forwardAutomationSessionRequest:(NSDictionary *)arg1;
- (void)_rpc_getConnectedDrivers:(NSDictionary *)arg1;
- (void)_rpc_forwardDriverStateChangeRequest:(NSDictionary *)arg1;
- (void)_rpc_reportDriverDisconnected:(NSDictionary *)arg1;
- (void)_rpc_reportDriverUpdated:(NSDictionary *)arg1;
- (void)_rpc_reportDriverConnected:(NSDictionary *)arg1;
- (void)_rpc_forwardAutomaticInspectionRejection:(NSDictionary *)arg1;
- (void)_rpc_forwardAutomaticInspectionConfiguration:(NSDictionary *)arg1;
- (void)_rpc_getConnectedApplications:(NSDictionary *)arg1;
- (void)_rpc_forwardSocketSetup:(NSDictionary *)arg1;
- (void)_rpc_forwardSocketData:(NSDictionary *)arg1;
- (void)_rpc_forwardIndicateWebView:(NSDictionary *)arg1;
- (void)_rpc_forwardGetListing:(NSDictionary *)arg1;
- (void)_rpc_forwardDidClose:(NSDictionary *)arg1;
- (void)_rpc_reportIdentifier:(NSDictionary *)arg1;
@end

