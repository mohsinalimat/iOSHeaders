//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFDevicePropertiesResultObject : CATTaskResultObject
{
    NSDictionary *_errorsByPropertyKey;
    NSDictionary *_valuesByPropertyKey;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *valuesByPropertyKey; // @synthesize valuesByPropertyKey=_valuesByPropertyKey;
@property(copy, nonatomic) NSDictionary *errorsByPropertyKey; // @synthesize errorsByPropertyKey=_errorsByPropertyKey;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForPropertyKey:(id)arg1 error:(id *)arg2;
- (id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2;

@end

