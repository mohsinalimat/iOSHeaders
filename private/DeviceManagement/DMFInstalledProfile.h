//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface DMFInstalledProfile : NSObject <NSSecureCoding>
{
    _Bool _isManaged;
    _Bool _isLocked;
    _Bool _hasRemovalPasscode;
    _Bool _isEncrypted;
    NSString *_UUID;
    NSString *_identifier;
    long long _profileVersion;
    NSString *_displayName;
    NSString *_organization;
    NSString *_profileDescription;
    NSArray *_signerCertificates;
    NSArray *_payloads;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(copy, nonatomic) NSArray *signerCertificates; // @synthesize signerCertificates=_signerCertificates;
@property(nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(nonatomic) _Bool hasRemovalPasscode; // @synthesize hasRemovalPasscode=_hasRemovalPasscode;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;
@property(copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(copy, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long profileVersion; // @synthesize profileVersion=_profileVersion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

