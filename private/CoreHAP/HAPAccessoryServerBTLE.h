//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

@class CBPeripheral, HAPAccessoryServerBrowserBTLE, NSNumber;

@interface HAPAccessoryServerBTLE : HAPAccessoryServer
{
    _Bool _stateChanged;
    unsigned char _connectReason;
    _Bool _notifyingCharacteristicUpdated;
    unsigned char _connectionIdleTime;
    NSNumber *_stateNumber;
    CBPeripheral *_peripheral;
    unsigned long long _hapBLEProtocolVersion;
    unsigned long long _resumeSessionID;
    HAPAccessoryServerBrowserBTLE *_browser;
}

+ (id)hapUUIDFromBTLEUUID:(id)arg1;
@property(nonatomic) unsigned char connectionIdleTime; // @synthesize connectionIdleTime=_connectionIdleTime;
@property(readonly, nonatomic) __weak HAPAccessoryServerBrowserBTLE *browser; // @synthesize browser=_browser;
@property(readonly, nonatomic) unsigned long long resumeSessionID; // @synthesize resumeSessionID=_resumeSessionID;
@property(readonly, nonatomic) unsigned long long hapBLEProtocolVersion; // @synthesize hapBLEProtocolVersion=_hapBLEProtocolVersion;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(nonatomic) _Bool notifyingCharacteristicUpdated; // @synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated;
@property(nonatomic) unsigned char connectReason; // @synthesize connectReason=_connectReason;
@property(nonatomic) _Bool stateChanged; // @synthesize stateChanged=_stateChanged;
- (void).cxx_destruct;
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (_Bool)updatePeripheralIdentifier:(id *)arg1;
- (void)updatePeripheral:(id)arg1;
- (_Bool)updateResumeSessionID:(unsigned long long)arg1;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (void)notifyDelegateUdpatedStateNumber;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
- (long long)linkType;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(_Bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13;

@end

