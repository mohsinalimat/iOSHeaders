//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet
{
}

+ (id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapItemSnippet;
@property(copy, nonatomic) NSNumber *userCurrentLocation;
@property(retain, nonatomic) SALocation *searchRegionCenter;
@property(nonatomic) _Bool searchAlongRoute;
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property(copy, nonatomic) NSArray *providerCommand;
@property(copy, nonatomic) NSArray *items;
@property(nonatomic) _Bool chainResultSet;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

