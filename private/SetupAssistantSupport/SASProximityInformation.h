//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistantSupport/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SASProximityInformation : NSObject <NSSecureCoding>
{
    _Bool _usesSameAccountForiTunes;
    _Bool _automaticTimeZoneEnabled;
    _Bool _restoring;
    _Bool _locationServicesOptIn;
    NSArray *_keyboards;
    NSString *_appleID;
    NSArray *_networks;
    NSArray *_networkPasswords;
    NSDictionary *_localePreferences;
    NSString *_timeZone;
    NSString *_firstName;
    NSString *_deviceModel;
    NSString *_deviceClass;
    NSString *_deviceName;
    NSString *_backupUUID;
    NSNumber *_findMyDeviceOptIn;
    NSNumber *_deviceAnalyticsOptIn;
    NSNumber *_appAnalyticsOptIn;
    NSNumber *_siriOptIn;
    NSNumber *_deviceTermsIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSNumber *deviceTermsIdentifier; // @synthesize deviceTermsIdentifier=_deviceTermsIdentifier;
@property(retain) NSNumber *siriOptIn; // @synthesize siriOptIn=_siriOptIn;
@property(retain) NSNumber *appAnalyticsOptIn; // @synthesize appAnalyticsOptIn=_appAnalyticsOptIn;
@property(retain) NSNumber *deviceAnalyticsOptIn; // @synthesize deviceAnalyticsOptIn=_deviceAnalyticsOptIn;
@property(retain) NSNumber *findMyDeviceOptIn; // @synthesize findMyDeviceOptIn=_findMyDeviceOptIn;
@property _Bool locationServicesOptIn; // @synthesize locationServicesOptIn=_locationServicesOptIn;
@property(copy) NSString *backupUUID; // @synthesize backupUUID=_backupUUID;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
@property(copy) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property _Bool automaticTimeZoneEnabled; // @synthesize automaticTimeZoneEnabled=_automaticTimeZoneEnabled;
@property(copy) NSDictionary *localePreferences; // @synthesize localePreferences=_localePreferences;
@property(copy) NSArray *networkPasswords; // @synthesize networkPasswords=_networkPasswords;
@property(copy) NSArray *networks; // @synthesize networks=_networks;
@property _Bool usesSameAccountForiTunes; // @synthesize usesSameAccountForiTunes=_usesSameAccountForiTunes;
@property(copy) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy) NSArray *keyboards; // @synthesize keyboards=_keyboards;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

