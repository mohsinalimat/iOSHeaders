//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKDevice, NSArray, NSString, NSUUID;

@interface _HKFitnessMachine : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    unsigned long long _type;
    unsigned long long _activityType;
    HKDevice *_device;
    NSString *_brand;
    NSArray *_requestedTypes;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *requestedTypes; // @synthesize requestedTypes=_requestedTypes;
@property(readonly, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(readonly, nonatomic) HKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setRequestedTypes:(id)arg1;
- (void)_setBrand:(id)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setActivityType:(unsigned long long)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2;

@end

