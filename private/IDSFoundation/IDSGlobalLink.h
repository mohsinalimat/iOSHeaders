//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSLink-Protocol.h>
#import <IDSFoundation/IDSLinkDelegate-Protocol.h>

@class IDSGlobalLinkBlocks, IDSTCPLink, IDSUDPLink, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSLink, IDSLinkDelegate, OS_dispatch_source;

@interface IDSGlobalLink : NSObject <IDSLink, IDSLinkDelegate>
{
    IDSUDPLink *_udpLink;
    IDSUDPLink *_udpLinkv6;
    IDSTCPLink *_tcpLink;
    IDSTCPLink *_tcpSSLLink;
    unsigned short _startPort;
    int _portRange;
    unsigned char _protocolVersion;
    NSString *_appName;
    id <IDSLinkDelegate> _delegate;
    id <IDSLinkDelegate> _alternateDelegate;
    CDUnknownBlockType _connectReadyHandler;
    CDUnknownBlockType _disconnectCompletionHandler;
    long long _clientType;
    _Bool _isFaceTimeCall;
    _Bool _isMultiway;
    _Bool _forceQuickRelay;
    _Bool _disallowWiFi;
    _Bool _disallowCellular;
    _Bool _preferCellularForCallSetup;
    struct IDSSimpleUInt16List _activeLinkIDList;
    BOOL _defaultLinkID;
    int _defaultSourceIfIndex;
    struct sockaddr_storage _defaultSource;
    struct sockaddr_storage _defaultDestination;
    long long _defaultStunTransport;
    id <IDSLink> _defaultLink;
    unsigned short _defaultChannelNumber;
    BOOL _linkIDCounter;
    double _lastOutgoingPacket;
    double _lastIncomingPacket;
    double _natMappingTimeout;
    double _inviteSentTime;
    double _inviteRecvTime;
    unsigned int _acceptDelayU32;
    double _allocbindStartTime;
    double _allocbindEndTime;
    double _linkConnectTime;
    double _firstClientPacketTime;
    struct IDSNAT64PrefixCache_ *_nat64PrefixCache;
    NSMutableArray *_nat64Blocks;
    NSMutableDictionary *_requestIDToInterfaces;
    NSMutableDictionary *_tokenToCandidatePairs;
    NSMutableDictionary *_linkIDToCandidatePairs;
    NSMutableDictionary *_channelToCandidatePairs;
    NSMutableDictionary *_stunRequestToID;
    NSMutableDictionary *_transcationIDToToken;
    struct IDSSimpleUInt16List _channelNumberList;
    struct IDSSimpleUInt16List _reallocChannelList;
    NSMutableDictionary *_tokenToSessionMessages;
    NSMutableDictionary *_tokenToReallocBlocks;
    NSObject<OS_dispatch_source> *_disconnectTimer;
    NSObject<OS_dispatch_source> *_activityTimer;
    NSMutableArray *_interfaceAddressArray;
    struct sockaddr_storage _commnatServer;
    double _commnatTimeout;
    NSMutableDictionary *_nonceToRequest;
    NSMutableDictionary *_nonceToCandidates;
    _Bool _isInitiator;
    int _nominateCount;
    NSMutableArray *_localCandidateList;
    NSMutableArray *_remoteCandidateList;
    NSMutableDictionary *_tokenToStunCheckPairs;
    _Bool _enableSKE;
    NSData *_skeData;
    _Bool _recvRemoteSKEData;
    _Bool _delaySessionConnected;
    _Bool _skeComplete;
    double _skeStartTime;
    NSString *_acceptedRelaySessionID;
    NSMutableArray *_nonAcceptedQRSessions;
    NSData *_softwareData;
    _Bool _remoteUsesLegacyStun;
    _Bool _delayedConnData;
    int _localConnDataCounter;
    int _remoteConnDataCounter;
    NSMutableArray *_delayedCellInterfaces;
    _Bool _hasPendingAllocation;
    NSMutableArray *_targetedAllocations;
    _Bool _useSecureControlMessage;
    NSData *_controlMessageKey;
    unsigned short _basebandPacketChannelNumber;
    struct IDSSimpleUInt16List _streamIDOptOutList;
    IDSGlobalLinkBlocks *_qraBlocks;
    NSMutableArray *_allocateTimeReportBlocks;
    _Bool _hasPendingSelfAllocation;
    NSMutableArray *_selfAllocateRequestIDs;
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    unsigned long long _headerOverhead;
    unsigned long long _state;
    unsigned char _clientUUID[16];
    unsigned long long _totalBytesSent;
    unsigned long long _totalPacketsSent;
    unsigned long long _totalBytesReceived;
    unsigned long long _totalPacketsReceived;
    unsigned long long _previousBytesSent;
    unsigned long long _previousPacketsSent;
    unsigned long long _previousBytesReceived;
    unsigned long long _previousPacketsReceived;
    double _previousReportTime;
}

@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
- (void).cxx_destruct;
- (void)_convergeQRSessionWithCandidatePair:(id)arg1;
- (unsigned long long)_cellularRATForExtIPv4:(unsigned int)arg1;
- (void)_setupRelayConnectionIfNecessary;
- (unsigned char)_newRelayLinkType:(unsigned char)arg1 localInterface:(unsigned char)arg2 remoteInterface:(unsigned char)arg3;
- (id)_linkTypeListToString:(unsigned char)arg1;
- (id)_interfaceTypeListToString:(unsigned char)arg1;
- (id)_linkTypeMaskToString:(unsigned char)arg1;
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_3b17df7f *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)updateStreamIDFilter:(id)arg1 optOut:(_Bool)arg2;
- (void)currentCellularSignalStrength:(int *)arg1 signalStrength:(int *)arg2 signalGrade:(int *)arg3;
- (void)stopKeepAlive:(id)arg1;
- (void)updateProtocolQualityOfService:(BOOL)arg1 isGood:(_Bool)arg2;
- (void)dropIPPackets:(BOOL)arg1 payloadArray:(id)arg2;
- (void)setPacketNotificationFilter:(BOOL)arg1 uniqueTag:(unsigned int)arg2 isEnabled:(_Bool)arg3;
- (void)setDefaultUnderlyingLink:(BOOL)arg1;
- (void)sendSKEData:(id)arg1;
- (void)setAcceptedRelaySession:(id)arg1 options:(id)arg2;
- (void)_requestNonUDPRelayAllocation:(long long)arg1 relaySessionID:(id)arg2;
- (void)_sendSKEDataWithSelectedCandidatePair;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;
- (unsigned long long)sendPacketBuffer:(CDStruct_3b17df7f *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (unsigned long long)_sendOnePacketBuffer:(CDStruct_3b17df7f *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)_reportAWDSessionSetupFailure:(long long)arg1 stunTransport:(long long)arg2 localRAT:(unsigned long long)arg3 resultCode:(long long)arg4;
- (void)_reportSessionSetupTime;
- (_Bool)remoteHostAwake;
- (id)copyLinkStatsDict;
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead; // @synthesize headerOverhead=_headerOverhead;
- (void)handleCellularRATChange;
- (void)_processDelayedCellularInterfaces;
- (void)handleNetworkAddressChanges:(_Bool)arg1 hasIPv6AddressChange:(_Bool)arg2;
- (void)_setupRelayConnectionForNetworkAddressChanges;
- (void)_processNewRemoteCandidates:(id)arg1;
- (void)_processRemovedRemoteCandidates:(id)arg1;
- (void)_processNewLocalAddressList:(id)arg1;
- (void)_processRemovedLocalAddressList:(id)arg1;
- (_Bool)_processBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (_Bool)_processBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processRemoteLinkUUID:(id)arg1 candidatePair:(id)arg2;
- (void)_sendBindingRequest:(id)arg1 stunMessage:(id)arg2;
- (void)_nominateCandidatePair:(id)arg1;
- (void)_updateNominatedCandidatePair:(id)arg1;
- (void)_startStunCheck:(id)arg1;
- (void)_processRemoteCandidates:(id)arg1;
- (id)_selectInterfaceForAllocation:(id)arg1 stunTransport:(long long)arg2;
- (_Bool)_isLocalAddressUsed:(const struct sockaddr *)arg1;
- (_Bool)_isReachableInterface:(id)arg1 interfaceIPVersion:(unsigned long long)arg2;
- (void)_startExtIPDiscovery:(long long)arg1;
- (_Bool)_requestSelfAllocationForInterfaceAddress:(id)arg1;
- (void)_sendAllocbindRequestForExtIPWithSessionID:(id)arg1 sessionToken:(id)arg2 sessionKey:(id)arg3 serverAddress:(struct sockaddr *)arg4 relayProviderType:(long long)arg5 startTime:(double)arg6;
- (_Bool)_IsExtIPDiscoveryNeeded:(struct sockaddr *)arg1 candidatePairList:(id)arg2;
- (void)_processXORMappedAddress:(id)arg1 arrivalTime:(double)arg2;
- (void)_handleSelfAllocationTimeout:(id)arg1;
- (_Bool)_isExtIPDiscoveryDone;
- (void)_reportAWDExtIPDetectionTime:(struct sockaddr *)arg1 startTime:(double)arg2 arrivalTime:(double)arg3 localRAT:(unsigned long long)arg4 resultCode:(long long)arg5;
- (void)_getCommNATServerAddress;
- (float)_getCommNATTimeoutValue;
- (void)_sendCommnatRequest:(id)arg1 candidate:(id)arg2;
- (void)_processCommnatResponse:(CDStruct_3b17df7f *)arg1 arrivalTime:(double)arg2;
- (_Bool)_addCandidate:(id)arg1 isRemoteCandidate:(_Bool)arg2;
- (void)_addStunCheckPair:(id)arg1 isRemoteCandidate:(_Bool)arg2;
- (void)_stopActivityTimer;
- (void)_startActivityTimer;
- (void)_handleActivityTimer;
- (void)_stopDisconnectTimer;
- (void)_startDisconnectTimer;
- (void)_handleDisconnectTimer;
- (void)_sendConnectionDataWithRemovedAddressList:(id)arg1;
- (void)_processCommandNominate:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandConnectionData:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandHeartbeat:(id)arg1 candidatePairToken:(id)arg2 arrivalTime:(double)arg3;
- (void)_processCommandDisconnected:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandConnected:(id)arg1 candidatePairToken:(id)arg2;
- (void)_notifyQRSessionConnected:(id)arg1;
- (_Bool)_processIncomingIndicationData:(char *)arg1 length:(int)arg2 candidatePairToken:(id)arg3 arrivalTime:(double)arg4;
- (void)_sendCommandMessage:(long long)arg1 options:(id)arg2 candidatePairToken:(id)arg3;
- (_Bool)_skipCommandMessage:(long long)arg1 candidatePair:(id)arg2 timeNow:(double)arg3;
- (id)_createCommandData:(long long)arg1 options:(id)arg2 candidatePair:(id)arg3;
- (void)_removeSessionCommandMessage:(long long)arg1 candidatePairToken:(id)arg2;
- (void)_saveCommandMessage:(long long)arg1 stunMessage:(id)arg2 candidatePairToken:(id)arg3;
- (id)_commandMessage:(long long)arg1 candidatePairToken:(id)arg2;
- (void)_sendEchoRequest:(id)arg1 stunMessage:(id)arg2;
- (void)_sendUnallocbindRequest:(id)arg1 stunMessage:(id)arg2;
- (void)_sendAllocbindRequest:(id)arg1 stunMessage:(id)arg2 isRealloc:(_Bool)arg3;
- (_Bool)_sendStunMessage:(id)arg1 sourceIfIndex:(int)arg2 source:(struct sockaddr *)arg3 destination:(struct sockaddr *)arg4 stunTransport:(long long)arg5;
- (double)_startTimeForStunRequest:(id)arg1;
- (void)_removeStunRequest:(id)arg1;
- (void)_saveStunRequest:(id)arg1 token:(id)arg2;
- (void)_processReallocChannelData:(CDStruct_3b17df7f *)arg1 channelNumber:(unsigned short)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 arrivalTime:(double)arg5;
- (void)_processDataOnReallocChannel:(unsigned short)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3;
- (_Bool)_processStunPacket:(CDStruct_3b17df7f *)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 arrivalTime:(double)arg4;
- (_Bool)_processStunErrorResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (_Bool)_processGoAwayIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (_Bool)_processDataIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (_Bool)_processReallocIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (_Bool)_processEchoResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (_Bool)_processUnallocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (_Bool)_processAllocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (long long)_stunErrorTypeToGlobalLinkError:(long long)arg1;
- (void)_reportAWDAllocateTime;
- (void)_notifyLinkDisconnectedWithError:(long long)arg1;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;
- (void)_notifyCandidatePairDisconnected:(id)arg1;
- (void)_notifyCandidatePairConnected:(id)arg1;
- (unsigned int)_calculateLocalMTU:(_Bool)arg1 isCellular:(_Bool)arg2 isRelay:(_Bool)arg3;
- (void)_setChannelToCandidatePair:(id)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3 channelNumber:(unsigned short)arg4;
- (void)_sendSessionDisconnectedCommand;
- (void)_removePacketNotificationFilter;
- (void)_discardSelfAllocateCandidatePairs;
- (void)_discardNonAcceptedCandidatePairs;
- (void)_discardAllCandidatePairs;
- (void)_discardCandidatePairsWithOption:(_Bool)arg1;
- (_Bool)_hasConnectedRelayCandidatePair;
- (_Bool)_hasConnectingRelayCandidatePair;
- (id)_nextConnectedCandidatePair;
- (_Bool)_hasConnectedCandidatePair;
- (void)_selectDefaultCandidatePair;
- (void)_selectBetterDefaultCandidatePair:(id)arg1;
- (_Bool)_isBetterCandidatePair:(id)arg1 newCandidatePair:(id)arg2;
- (void)_updateDefaultCandidatePair:(id)arg1;
- (void)_reportAWDClientTimerEvent:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned int)arg4 duration:(unsigned long long)arg5 resultCode:(long long)arg6;
- (void)_reportAWDActiveLinkRTT:(float)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned long long)arg4;
- (void)_reportAWDReallocIndicationResult:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned long long)arg4;
- (void)_reportAWDStunMessageEvent:(long long)arg1 sharedSession:(_Bool)arg2 duration:(float)arg3 relayProviderType:(long long)arg4 transport:(long long)arg5 localRAT:(unsigned long long)arg6 resultCode:(long long)arg7;
- (void)disconnectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connectWithSessionInfo:(id)arg1 interfaceAddress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addQRAAWDBlock:(id)arg1 allocateRequestTime:(double)arg2 inferredExternalIP:(unsigned int)arg3 stunTransport:(long long)arg4 relayProviderType:(long long)arg5;
- (long long)_stunTransportWithSessionInfo:(id)arg1;
- (unsigned int)_getLinkInformation:(long long)arg1 linkOK:(_Bool *)arg2;
- (_Bool)hasReachableInterface:(unsigned long long)arg1;
- (unsigned long long)defaultLinkType;
- (void)startWithOptions:(id)arg1;
- (void)_parseClientUUID:(id)arg1;
- (id)_addSocketAndInterfaceAddress:(unsigned long long)arg1 wantsWiFi:(_Bool)arg2 wantsCellular:(_Bool)arg3;
- (void)_getNAT64PrefixForInterface:(int)arg1 interfaceName:(id)arg2;
- (id)_delayProcessingCellularInterfaces:(id)arg1;
- (id)_createInterfaceAddressArray:(unsigned long long)arg1 wantsWiFi:(_Bool)arg2 wantsCellular:(_Bool)arg3;
- (void)_callDisconnectCompletionHandler:(id)arg1;
- (id)_getLink:(int)arg1 stunTransport:(long long)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

