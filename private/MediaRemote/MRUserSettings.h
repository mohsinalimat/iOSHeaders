//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSUserDefaults;

@interface MRUserSettings : NSObject
{
    NSUserDefaults *_userDefaults;
    _Bool _externalDevicePairingAllowed;
}

+ (id)currentSettings;
@property(nonatomic, getter=isExternalDevicePairingAllowed) _Bool externalDevicePairingAllowed; // @synthesize externalDevicePairingAllowed=_externalDevicePairingAllowed;
- (void)_removeValueForKey:(id)arg1;
- (long long)_integerValueForKey:(id)arg1 usingDefaultValue:(long long)arg2;
- (double)_doubleValueForKey:(id)arg1 usingDefaultValue:(double)arg2;
- (_Bool)_boolValueForKey:(id)arg1 usingDefaultValue:(_Bool)arg2;
@property(nonatomic) NSArray *connectedClientPIDs;
@property(readonly, nonatomic) _Bool useSystemAudioContextForAirPlayTransport;
@property(readonly, nonatomic, getter=isAirPlay2Enabled) _Bool airPlay2Enabled;
@property(readonly, nonatomic) double transactionWaitDurationOnNetworkSend;
@property(readonly, nonatomic) double transactionWaitDurationOnXpcSend;
@property(readonly, nonatomic) double transactionWaitDurationOnOutOfMemory;
@property(readonly, nonatomic) long long maxTransactionMemorySize;
@property(readonly, nonatomic) _Bool useExternalDeviceSystemPairing;
@property(readonly, nonatomic) double airPlayOutputContextInitTimeoutDuration;
@property(readonly, nonatomic) double broadcastCommandWaitDuration;
@property(readonly, nonatomic) double bluetoothDeviceResumeDuration;
@property(readonly, nonatomic) double externalDeviceSleepAssertionOnClientConnectDuration;
@property(readonly, nonatomic) double externalDeviceDisconnectSleepDuration;
@property(readonly, nonatomic) double externalDeviceDisconnectWaitDuration;
@property(readonly, nonatomic) double externalDeviceNowPlayingInfoArtworkCoalesceDuration;
@property(readonly, nonatomic) double externalDeviceNowPlayingInfoCoalesceDuration;
@property(readonly, nonatomic) double externalDeviceTimeoutDuration;
@property(readonly, nonatomic) long long externalDeviceSocketQOSLevel;
@property(readonly, nonatomic) _Bool hasExternalDeviceSocketQOSLevelSet;
@property(readonly, nonatomic) _Bool shouldLogPairingSetupCode;
@property(readonly, nonatomic) _Bool shouldInitializeTelevisionBonjourService;
@property(readonly, nonatomic) _Bool deviceSupportsExternalRemoteControl;
@property(readonly, nonatomic) _Bool useDebugAVRouteWithoutVolumeControl;
@property(readonly, nonatomic) _Bool useNoDelayOptionForExternalDeviceSockets;
@property(readonly, nonatomic) _Bool usePeerToPeerExternalDeviceConnections;
- (void)dealloc;
- (id)init;

@end

