//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *unlocalizedCountryName;
@property(copy, nonatomic) NSString *unlocalizedCityName;
@property(copy, nonatomic) NSString *timezoneId;
@property(copy, nonatomic) NSString *countryName;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSString *cityName;
@property(copy, nonatomic) NSNumber *alCityId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

