//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CLLocation, NSNumber, NSString;

@interface PKPaymentDeviceProvisioningData : NSObject <NSSecureCoding>
{
    NSNumber *_primaryJSBLSequenceCounter;
    NSString *_deviceName;
    NSString *_phoneNumber;
    CLLocation *_location;
    NSString *_signedPhoneNumber;
    NSString *_signedPhoneNumberVersion;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *signedPhoneNumberVersion; // @synthesize signedPhoneNumberVersion=_signedPhoneNumberVersion;
@property(copy, nonatomic) NSString *signedPhoneNumber; // @synthesize signedPhoneNumber=_signedPhoneNumber;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSNumber *primaryJSBLSequenceCounter; // @synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSString *extensiveLatitude;
@property(readonly, nonatomic) __weak NSString *extensiveLongitude;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

