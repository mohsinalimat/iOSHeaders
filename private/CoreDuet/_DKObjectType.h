//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying>
{
    long long _typeCode;
    Class _objectClass;
}

+ (_Bool)supportsSecureCoding;
+ (id)objectTypeFromClass:(Class)arg1;
+ (id)objectTypeWithName:(id)arg1;
+ (id)objectTypeWithTypeCode:(long long)arg1;
+ (Class)associatedObjectClass;
+ (long long)typeCodeFromName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) Class objectClass;
@property(readonly, nonatomic) long long typeCode;
- (id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2;

@end

