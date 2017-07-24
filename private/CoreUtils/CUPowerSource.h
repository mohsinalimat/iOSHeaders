//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CUPowerSource : NSObject <NSSecureCoding>
{
    struct OpaqueIOPSPowerSourceID *_psID;
    _Bool _charging;
    _Bool _present;
    NSString *_accessoryID;
    double _chargeLevel;
    long long _familyCode;
    NSString *_groupID;
    NSString *_name;
    NSString *_partID;
    long long _productID;
    long long _sourceID;
    NSString *_state;
    NSString *_transportType;
    NSString *_type;
    long long _vendorID;
    long long _adapterFamilyCode;
    NSString *_adapterName;
    NSDictionary *_ioKitDescription;
    NSDictionary *_ioKitAdapterDescription;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(copy, nonatomic) NSDictionary *ioKitAdapterDescription; // @synthesize ioKitAdapterDescription=_ioKitAdapterDescription;
@property(copy, nonatomic) NSDictionary *ioKitDescription; // @synthesize ioKitDescription=_ioKitDescription;
@property(copy, nonatomic) NSString *adapterName; // @synthesize adapterName=_adapterName;
@property(nonatomic) long long adapterFamilyCode; // @synthesize adapterFamilyCode=_adapterFamilyCode;
@property(nonatomic) long long vendorID; // @synthesize vendorID=_vendorID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic) long long sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) long long productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *partID; // @synthesize partID=_partID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long familyCode; // @synthesize familyCode=_familyCode;
@property(nonatomic) double chargeLevel; // @synthesize chargeLevel=_chargeLevel;
@property(nonatomic) _Bool charging; // @synthesize charging=_charging;
@property(copy, nonatomic) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
- (void).cxx_destruct;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (void)invalidate;
- (int)publish;
- (id)detailedDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

