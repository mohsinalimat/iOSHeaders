//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID, SFBLEDevice, SFProximityEstimator;

@interface SFDevice : NSObject <NSSecureCoding>
{
    _Bool _autoUnlockEnabled;
    _Bool _autoUnlockWatch;
    unsigned char _deviceActionType;
    unsigned char _deviceClassCode;
    _Bool _hasProblem;
    _Bool _needsKeyboard;
    _Bool _needsSetup;
    _Bool _wakeDevice;
    _Bool _watchLocked;
    unsigned char _osVersion;
    _Bool _paired;
    unsigned int _systemPairState;
    NSArray *_batteryInfo;
    SFBLEDevice *_bleDevice;
    NSString *_contactIdentifier;
    long long _deviceType;
    long long _distance;
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    NSString *_requestSSID;
    SFProximityEstimator *_setupProximityEstimator;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFProximityEstimator *setupProximityEstimator; // @synthesize setupProximityEstimator=_setupProximityEstimator;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(nonatomic) unsigned char osVersion; // @synthesize osVersion=_osVersion;
@property(nonatomic) _Bool watchLocked; // @synthesize watchLocked=_watchLocked;
@property(nonatomic) _Bool wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property(nonatomic) unsigned int systemPairState; // @synthesize systemPairState=_systemPairState;
@property(copy, nonatomic) NSString *requestSSID; // @synthesize requestSSID=_requestSSID;
@property(nonatomic) _Bool needsSetup; // @synthesize needsSetup=_needsSetup;
@property(readonly, nonatomic) _Bool needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool hasProblem; // @synthesize hasProblem=_hasProblem;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned char deviceClassCode; // @synthesize deviceClassCode=_deviceClassCode;
@property(readonly, nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) SFBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(readonly, copy, nonatomic) NSArray *batteryInfo; // @synthesize batteryInfo=_batteryInfo;
@property(nonatomic) _Bool autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property(nonatomic) _Bool autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
- (void).cxx_destruct;
- (void)updateWithPairedPeer:(id)arg1;
- (void)updateWithBLEDevice:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

