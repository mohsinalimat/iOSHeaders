//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SafariSafeBrowsing/NSCopying-Protocol.h>
#import <SafariSafeBrowsing/NSSecureCoding-Protocol.h>

@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding>
{
    struct LookupResult _lookupResult;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
@property(readonly, nonatomic, getter=isKnownToBeUnsafe) _Bool knownToBeUnsafe;
@property(readonly, nonatomic) _Bool URLContainsUserInfo;
@property(readonly, nonatomic, getter=isUnwantedSoftware) _Bool unwantedSoftware;
@property(readonly, nonatomic, getter=isPhishing) _Bool phishing;
@property(readonly, nonatomic, getter=isMalware) _Bool malware;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithLookupResult:(struct LookupResult)arg1;

@end

