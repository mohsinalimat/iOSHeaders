//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSString;

@interface FPItemID : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_providerIdentifier;
    NSString *_domainIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToItemID:(id)arg1;
- (id)description;
- (id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)initWithSearchableItem:(id)arg1;

@end

