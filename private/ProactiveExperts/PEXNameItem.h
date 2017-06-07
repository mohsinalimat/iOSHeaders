//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveExperts/PEXItem.h>

#import <ProactiveExperts/NSCopying-Protocol.h>
#import <ProactiveExperts/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface PEXNameItem : PEXItem <NSSecureCoding, NSCopying>
{
    NSString *_firstName;
    NSString *_phoneticFirstName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_lastName;
    NSString *_phoneticLastName;
    NSString *_organizationName;
    NSString *_jobTitle;
    NSString *_nickname;
    NSDictionary *_relatedNames;
    NSArray *_streetNames;
    NSArray *_cityNames;
}

+ (_Bool)supportsSecureCoding;
+ (id)nameItemWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 streetNames:(id)arg11 cityNames:(id)arg12 score:(double)arg13 source:(unsigned char)arg14 sourceIdentifier:(id)arg15;
@property(retain, nonatomic) NSArray *cityNames; // @synthesize cityNames=_cityNames;
@property(retain, nonatomic) NSArray *streetNames; // @synthesize streetNames=_streetNames;
@property(retain, nonatomic) NSDictionary *relatedNames; // @synthesize relatedNames=_relatedNames;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *phoneticLastName; // @synthesize phoneticLastName=_phoneticLastName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (_Bool)isEqualToNameItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 streetNames:(id)arg11 cityNames:(id)arg12 score:(double)arg13 source:(unsigned char)arg14 sourceIdentifier:(id)arg15;

@end
