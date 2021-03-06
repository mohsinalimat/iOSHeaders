//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityFoundation/SFTrustPolicy.h>

#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFSSLClientTrustPolicy : SFTrustPolicy <NSSecureCoding>
{
    id _sslClientTrustPolicyInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clientName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientName:(id)arg1;

@end

