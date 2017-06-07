//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface AKAnisetteData : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_machineID;
    NSString *_oneTimePassword;
    unsigned long long _routingInfo;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long routingInfo; // @synthesize routingInfo=_routingInfo;
@property(copy, nonatomic) NSString *oneTimePassword; // @synthesize oneTimePassword=_oneTimePassword;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
