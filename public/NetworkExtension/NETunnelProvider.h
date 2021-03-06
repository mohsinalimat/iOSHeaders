//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEProvider.h>

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling>
{
    _Bool _reasserting;
    _Bool _onDemandEnabled;
    NEVPNProtocol *_protocolConfiguration;
    NSArray *_appRules;
}

@property _Bool onDemandEnabled; // @synthesize onDemandEnabled=_onDemandEnabled;
@property(retain) NSArray *appRules; // @synthesize appRules=_appRules;
@property(retain) NEVPNProtocol *protocolConfiguration; // @synthesize protocolConfiguration=_protocolConfiguration;
- (void).cxx_destruct;
@property(readonly) long long routingMethod;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property _Bool reasserting;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

