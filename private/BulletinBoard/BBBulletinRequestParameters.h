//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSDate, NSSet;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _publisherDestination;
    long long _maximumCount;
    NSDate *_sinceDate;
    NSSet *_enabledSectionIDs;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestParametersForDestination:(unsigned long long)arg1 withSinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4;
@property(retain, nonatomic) NSSet *enabledSectionIDs; // @synthesize enabledSectionIDs=_enabledSectionIDs;
@property(retain, nonatomic) NSDate *sinceDate; // @synthesize sinceDate=_sinceDate;
@property(readonly, nonatomic) unsigned long long publisherDestination; // @synthesize publisherDestination=_publisherDestination;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned long long maximumCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(unsigned long long)arg1 sinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4;

@end

