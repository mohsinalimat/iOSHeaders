//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherAirQualitySnippet : SAUISnippet
{
}

+ (id)airQualitySnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)airQualitySnippet;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUIImageResource *attributionImage;
@property(retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property(copy, nonatomic) NSArray *aceAirQualities;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

