//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BluetoothDevice : NSObject
{
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl *_device;
    unsigned int _connectingServiceMask;
}

- (unsigned int)getConnectingServiceMask;
- (void)setConnectingServicemask:(unsigned int)arg1;
- (_Bool)setUserName:(id)arg1;
- (_Bool)isAppleAudioDevice;
- (void)setSyncGroup:(int)arg1 enabled:(_Bool)arg2;
- (id)syncGroups;
- (void)setSyncSettings:(CDStruct_8024420c)arg1;
- (CDStruct_8024420c)syncSettings;
- (void)endVoiceCommand;
- (void)startVoiceCommand;
- (void)unpair;
- (void)acceptSSP:(long long)arg1;
- (void)setPIN:(id)arg1;
- (void)disconnect;
- (void)connectWithServices:(unsigned int)arg1;
- (void)connect;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (_Bool)isServiceSupported:(unsigned int)arg1;
- (_Bool)isAccessory;
- (_Bool)magicPairedDeviceNameUpdated;
- (_Bool)setDoubleTapAction:(unsigned int)arg1;
- (unsigned int)doubleTapAction;
- (_Bool)setMicMode:(unsigned int)arg1;
- (unsigned int)micMode;
- (_Bool)setInEarDetectEnabled:(_Bool)arg1;
- (_Bool)inEarDetectEnabled;
- (int)batteryLevel;
- (_Bool)supportsBatteryLevel;
- (unsigned long long)connectedServicesCount;
- (unsigned long long)connectedServices;
- (_Bool)connected;
- (_Bool)magicPaired;
- (_Bool)cloudPaired;
- (_Bool)paired;
- (unsigned int)productId;
- (unsigned int)vendorId;
- (id)scoUID;
- (id)description;
- (unsigned int)minorClass;
- (unsigned int)majorClass;
- (int)type;
- (id)address;
- (id)name;
- (_Bool)_isNameCached;
- (void)_clearName;
- (void)setDevice:(struct BTDeviceImpl *)arg1;
- (struct BTDeviceImpl *)device;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;

@end

