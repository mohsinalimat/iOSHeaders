//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilitySharedSupport/IDSServiceDelegate-Protocol.h>
#import <AccessibilitySharedSupport/MCNearbyServiceAdvertiserDelegate-Protocol.h>
#import <AccessibilitySharedSupport/MCNearbyServiceBrowserDelegate-Protocol.h>
#import <AccessibilitySharedSupport/MCSessionDelegate-Protocol.h>

@class AXSSInterDeviceSecurityHelper, IDSService, MCNearbyServiceAdvertiser, MCNearbyServiceBrowser, MCPeerID, MCSession, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol AXSSInterDeviceActionReceiver, AXSSInterDeviceConnectionListener, AXSSInterDeviceSearchObserver;

@interface AXSSInterDeviceCommunicator : NSObject <IDSServiceDelegate, MCSessionDelegate, MCNearbyServiceBrowserDelegate, MCNearbyServiceAdvertiserDelegate>
{
    id <AXSSInterDeviceConnectionListener> _connectionListener;
    id <AXSSInterDeviceActionReceiver> _actionReceiver;
    id <AXSSInterDeviceSearchObserver> _searchObserver;
    IDSService *_service;
    long long _state;
    MCPeerID *_localPeerID;
    MCSession *_session;
    MCNearbyServiceBrowser *_browser;
    MCNearbyServiceAdvertiser *_advertiser;
    NSMutableArray *_availableDevices;
    NSMutableDictionary *_deviceTypesByPeerID;
    MCPeerID *_slave;
    MCPeerID *_master;
    unsigned long long _switchEventIndex;
    NSTimer *_dummyPacketTimer;
    unsigned long long _numberOfBurstPacketsRemaining;
    AXSSInterDeviceSecurityHelper *_securityHelper;
}

@property(retain, nonatomic) AXSSInterDeviceSecurityHelper *securityHelper; // @synthesize securityHelper=_securityHelper;
@property(nonatomic) unsigned long long numberOfBurstPacketsRemaining; // @synthesize numberOfBurstPacketsRemaining=_numberOfBurstPacketsRemaining;
@property(retain, nonatomic) NSTimer *dummyPacketTimer; // @synthesize dummyPacketTimer=_dummyPacketTimer;
@property(nonatomic) unsigned long long switchEventIndex; // @synthesize switchEventIndex=_switchEventIndex;
@property(retain, nonatomic) MCPeerID *master; // @synthesize master=_master;
@property(retain, nonatomic) MCPeerID *slave; // @synthesize slave=_slave;
@property(retain, nonatomic) NSMutableDictionary *deviceTypesByPeerID; // @synthesize deviceTypesByPeerID=_deviceTypesByPeerID;
@property(retain, nonatomic) NSMutableArray *availableDevices; // @synthesize availableDevices=_availableDevices;
@property(retain, nonatomic) MCNearbyServiceAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(retain, nonatomic) MCNearbyServiceBrowser *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) MCPeerID *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic) id <AXSSInterDeviceSearchObserver> searchObserver; // @synthesize searchObserver=_searchObserver;
@property(nonatomic) id <AXSSInterDeviceActionReceiver> actionReceiver; // @synthesize actionReceiver=_actionReceiver;
@property(nonatomic) id <AXSSInterDeviceConnectionListener> connectionListener; // @synthesize connectionListener=_connectionListener;
- (void).cxx_destruct;
- (void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(CDUnknownBlockType)arg4;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)_removePeerFromAvailableDevices:(id)arg1;
- (void)_handleHighlightMessage;
- (void)_handleSelectionMessageWithPayload:(id)arg1;
- (void)_handleSwitchEventMessageWithPayload:(id)arg1 fromPeer:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_sendDummyPacket;
- (void)forwardSwitchEvent:(id)arg1;
- (void)_sendDataToSlave:(id)arg1;
- (id)_messageForSwitchEvent:(id)arg1 index:(unsigned long long)arg2;
- (void)selectSearchResult:(id)arg1 settings:(id)arg2;
- (id)_messageForSelection:(_Bool)arg1 settings:(id)arg2;
- (void)highlightSearchResult:(id)arg1;
@property(readonly, nonatomic) NSArray *searchResults;
- (void)stop;
- (void)_advertise;
- (void)_handleTimeoutAsPotentialSlave;
- (void)_cancelAdvertising;
- (void)search;
@property(readonly, nonatomic) _Bool canSearch;
@property(readonly, nonatomic) _Bool isIdle;
@property(readonly, nonatomic) _Bool isSearching;
@property(readonly, nonatomic) _Bool isForwardingSwitchEvents;
@property(readonly, nonatomic) _Bool isReceivingSwitchEvents;
- (_Bool)_setUpSessionIfNecessary;
- (void)_broadcastICloudMessage:(id)arg1;
- (void)_tearDownConnectivity;
- (void)_tearDownBrowser;
- (void)_tearDownSession;
- (void)_tearDownAdvertiser;
- (id)_stringForState:(long long)arg1;
- (id)_stateDescription;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

