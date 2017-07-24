//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TimingCollection, VCConnectionManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCTransportSession : NSObject
{
    _Bool _isCallActive;
    _Bool _requiresWiFi;
    _Bool _useCompressedConnectionData;
    _Bool _didRegisterForBasebandNotifications;
    unsigned int _basebandNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject *_connectionSetupPiggybackBlob;
    struct opaqueRTCReporting *_reportingAgent;
    TimingCollection *_perfTimings;
    VCConnectionManager *_connectionManager;
    CDUnknownBlockType _eventHandler;
}

@property(retain, nonatomic) NSObject *connectionSetupPiggybackBlob; // @synthesize connectionSetupPiggybackBlob=_connectionSetupPiggybackBlob;
@property(readonly, nonatomic) unsigned int basebandNotificationRegistrationToken; // @synthesize basebandNotificationRegistrationToken=_basebandNotificationRegistrationToken;
@property(retain, nonatomic) TimingCollection *perfTimings; // @synthesize perfTimings=_perfTimings;
@property(nonatomic) _Bool requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(nonatomic) _Bool useCompressedConnectionData; // @synthesize useCompressedConnectionData=_useCompressedConnectionData;
@property(readonly, nonatomic) VCConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)reportNetworkConditionsDegraded;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned int connectionSetupRTTEstimate;
@property(readonly, nonatomic) _Bool isRemoteOSPreLion;
@property(readonly, nonatomic) _Bool isHandoverSupported;
@property(readonly, nonatomic) int detailedErrorCode;
@property(nonatomic, setter=setCallActive:) _Bool isCallActive;
- (void)callEventHandlerWithEvent:(unsigned int)arg1 info:(id)arg2;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

