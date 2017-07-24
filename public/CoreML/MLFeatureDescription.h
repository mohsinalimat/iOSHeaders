//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface MLFeatureDescription : NSObject <NSCopying>
{
    _Bool _optional;
    NSString *_name;
    long long _type;
    NSDictionary *_valueContraints;
}

+ (id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(_Bool)arg3 constraints:(id)arg4;
@property(retain) NSDictionary *valueContraints; // @synthesize valueContraints=_valueContraints;
@property(readonly, nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)allowsValuesWithDescription:(id)arg1;
- (id)dictionaryConstraint;
- (id)imageConstraint;
- (id)multiArrayConstraint;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (_Bool)isAllowedValue:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 optional:(_Bool)arg3 contraints:(id)arg4;
- (id)debugQuickLookObject;

@end

