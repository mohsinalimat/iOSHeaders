//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSData, NSDate, NSNumber, NSString, SADistance, SALocation;
@protocol SAAceSerializable;

@interface SALocalSearchMapItem : SADomainObject
{
}

+ (id)mapItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapItem;
@property(copy, nonatomic) NSString *spokenName;
@property(copy, nonatomic) NSString *spokenAddress;
@property(copy, nonatomic) NSData *resultDetourInfoData;
@property(copy, nonatomic) NSNumber *placeId;
@property(copy, nonatomic) NSData *placeData2;
@property(copy, nonatomic) NSData *placeData;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSNumber *localSearchProviderId;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property(copy, nonatomic) NSString *extSessionGuid;
@property(copy, nonatomic) NSNumber *distanceInMiles;
@property(retain, nonatomic) SADistance *distance;
@property(copy, nonatomic) NSString *directionRole;
@property(copy, nonatomic) NSString *detailType;
@property(retain, nonatomic) id <SAAceSerializable> detail;
@property(copy, nonatomic) NSArray *attributions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

