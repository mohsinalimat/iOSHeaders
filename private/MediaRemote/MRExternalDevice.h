//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MRExternalClientConnectionDelegate-Protocol.h>

@class MRExternalClientConnection, MRExternalDeviceTransport, MRSupportedProtocolMessages, NSInputStream, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDevice : NSObject <MRExternalClientConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    void *_customOrigin;
    unsigned int _cachedServerDisconnectError;
    _Bool _disconnecting;
    _Bool _wantsNowPlayingNotifications;
    _Bool _wantsNowPlayingArtworkNotifications;
    _Bool _wantsVolumeNotifications;
    _Bool _isUsingSystemPairing;
    _Bool _isCallingClientCallback;
    unsigned int _connectionState;
    MRExternalDeviceTransport *_transport;
    MRExternalClientConnection *_connection;
    void *_deviceInfo;
    MRSupportedProtocolMessages *_supportedMessages;
    struct __CFData *_nowPlayingArtwork;
    struct __CFDictionary *_nowPlayingInfo;
    void *_nowPlayingItem;
    void *_playerPath;
    CDUnknownBlockType _pairingCallback;
    NSObject<OS_dispatch_queue> *_pairingCallbackQueue;
    CDUnknownBlockType _connectionStateCallback;
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;
    CDUnknownBlockType _nameCallback;
    NSObject<OS_dispatch_queue> *_nameCallbackQueue;
    CDUnknownBlockType _pairingAllowedCallback;
    NSObject<OS_dispatch_queue> *_pairingAllowedCallbackQueue;
    CDUnknownBlockType _customDataCallback;
    NSObject<OS_dispatch_queue> *_customDataCallbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // @synthesize customDataCallbackQueue=_customDataCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType customDataCallback; // @synthesize customDataCallback=_customDataCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue; // @synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingAllowedCallback; // @synthesize pairingAllowedCallback=_pairingAllowedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // @synthesize nameCallbackQueue=_nameCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType nameCallback; // @synthesize nameCallback=_nameCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(readonly, nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingCallbackQueue; // @synthesize pairingCallbackQueue=_pairingCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingCallback; // @synthesize pairingCallback=_pairingCallback;
@property(nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property(nonatomic) void *nowPlayingItem; // @synthesize nowPlayingItem=_nowPlayingItem;
@property(nonatomic) struct __CFDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(nonatomic) struct __CFData *nowPlayingArtwork; // @synthesize nowPlayingArtwork=_nowPlayingArtwork;
@property(nonatomic) _Bool isCallingClientCallback; // @synthesize isCallingClientCallback=_isCallingClientCallback;
@property(nonatomic) _Bool isUsingSystemPairing; // @synthesize isUsingSystemPairing=_isUsingSystemPairing;
@property(nonatomic) _Bool wantsVolumeNotifications; // @synthesize wantsVolumeNotifications=_wantsVolumeNotifications;
@property(nonatomic) _Bool wantsNowPlayingArtworkNotifications; // @synthesize wantsNowPlayingArtworkNotifications=_wantsNowPlayingArtworkNotifications;
@property(nonatomic) _Bool wantsNowPlayingNotifications; // @synthesize wantsNowPlayingNotifications=_wantsNowPlayingNotifications;
@property(retain, nonatomic) MRSupportedProtocolMessages *supportedMessages; // @synthesize supportedMessages=_supportedMessages;
@property(readonly, nonatomic) void *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) MRExternalClientConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) MRExternalDeviceTransport *transport; // @synthesize transport=_transport;
- (void)_contentItemUpdatedNotification:(id)arg1;
- (void *)_createPlaybackQueue:(_Bool)arg1;
- (void)_updateNowPlayingInfoForPlayerPath:(void *)arg1;
- (void)_handleGenericMessage:(id)arg1;
- (void)_handleSetConnectionStateMessage:(id)arg1;
- (void)_handleDeviceInfoChange:(void *)arg1 oldDevice:(void *)arg2;
- (void)_handleDeviceInfoUpdateMessage:(id)arg1;
- (void)_handleTransactionMessage:(id)arg1;
- (void)_handleSetVolumeControlAvailabilityMessage:(id)arg1;
- (void)_handleSetArtworkMessage:(id)arg1;
- (void)_handleNotificationMessageLegacy:(id)arg1;
- (void)_handleNotificationMessageModern:(id)arg1;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1;
- (void)_handleSetNowPlayingClientMessage:(id)arg1;
- (void)_handleSetStateMessageLegacy:(id)arg1;
- (void)_handleSetStateMessageModern:(id)arg1;
- (void)_handleSetStateMessage:(id)arg1;
- (void)_handleCryptoPairingMessage:(id)arg1;
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(void *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_callCientCustomDataCallback:(id)arg1 name:(id)arg2;
- (void)_callClientAllowsPairingCallback;
- (void)_callClientNameCallback;
- (void)_callClientPairingCallback:(CDUnknownBlockType)arg1;
- (void)_callClientConnectionStateCallback:(unsigned int)arg1 error:(id)arg2;
- (void)_registerOriginCallbacks;
- (void)_cleanUp;
- (void)_tearDownCustomOrigin;
- (id)_openSecuritySession;
- (id)_loadDeviceInfo;
- (id)_setupCustomOrigin;
- (id)_initializeConnection;
- (void)_transportDeviceInfoDidChangeNotification:(id)arg1;
- (void)_localDeviceInfoDidChangeNotification:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 withReplyQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendClientUpdatesConfigMessage;
- (id)currentClientUpdatesConfigMessage;
- (id)errorForCurrentState;
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)unpair;
- (void)disconnect:(id)arg1;
- (void)connect;
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;
@property(nonatomic) void *customOrigin;
- (void)setDeviceInfo:(void *)arg1;
- (void)setName:(id)arg1;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *hostName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

