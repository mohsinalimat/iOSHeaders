//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _protocolVersion;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    unsigned int _lastSupportedMessageType;
    NSString *_localizedModelName;
    NSString *_name;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_uniqueIdentifier;
    _Bool _allowsPairing;
    _Bool _connected;
    _Bool _supportsACL;
    _Bool _supportsExtendedMotion;
    _Bool _supportsSharedQueue;
    _Bool _supportsSystemPairing;
    struct {
        unsigned int protocolVersion:1;
        unsigned int lastSupportedMessageType:1;
        unsigned int allowsPairing:1;
        unsigned int connected:1;
        unsigned int supportsACL:1;
        unsigned int supportsExtendedMotion:1;
        unsigned int supportsSharedQueue:1;
        unsigned int supportsSystemPairing:1;
    } _has;
}

@property(retain, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(nonatomic) _Bool supportsExtendedMotion; // @synthesize supportsExtendedMotion=_supportsExtendedMotion;
@property(nonatomic) _Bool supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property(nonatomic) _Bool supportsACL; // @synthesize supportsACL=_supportsACL;
@property(retain, nonatomic) NSString *systemMediaApplication; // @synthesize systemMediaApplication=_systemMediaApplication;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool allowsPairing; // @synthesize allowsPairing=_allowsPairing;
@property(nonatomic) _Bool supportsSystemPairing; // @synthesize supportsSystemPairing=_supportsSystemPairing;
@property(nonatomic) unsigned int lastSupportedMessageType; // @synthesize lastSupportedMessageType=_lastSupportedMessageType;
@property(nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *applicationBundleVersion; // @synthesize applicationBundleVersion=_applicationBundleVersion;
@property(retain, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property(retain, nonatomic) NSString *localizedModelName; // @synthesize localizedModelName=_localizedModelName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBluetoothAddress;
@property(nonatomic) _Bool hasSupportsExtendedMotion;
@property(nonatomic) _Bool hasSupportsSharedQueue;
@property(nonatomic) _Bool hasSupportsACL;
@property(readonly, nonatomic) _Bool hasSystemMediaApplication;
@property(nonatomic) _Bool hasConnected;
@property(nonatomic) _Bool hasAllowsPairing;
@property(nonatomic) _Bool hasSupportsSystemPairing;
@property(nonatomic) _Bool hasLastSupportedMessageType;
@property(nonatomic) _Bool hasProtocolVersion;
@property(readonly, nonatomic) _Bool hasApplicationBundleVersion;
@property(readonly, nonatomic) _Bool hasApplicationBundleIdentifier;
@property(readonly, nonatomic) _Bool hasSystemBuildVersion;
@property(readonly, nonatomic) _Bool hasLocalizedModelName;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
- (void)dealloc;

@end

