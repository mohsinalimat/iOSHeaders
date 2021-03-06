//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKAccountInfo : NSObject <NSSecureCoding>
{
    _Bool _supportsDeviceToDeviceEncryption;
    long long _accountStatus;
    long long _accountPartition;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long accountPartition; // @synthesize accountPartition=_accountPartition;
@property(nonatomic) _Bool supportsDeviceToDeviceEncryption; // @synthesize supportsDeviceToDeviceEncryption=_supportsDeviceToDeviceEncryption;
@property(nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

