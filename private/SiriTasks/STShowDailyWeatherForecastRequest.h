//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray, STCity, STWeatherAttributes;

@interface STShowDailyWeatherForecastRequest : AFSiriRequest
{
    STWeatherAttributes *_currentAttributes;
    NSArray *_dailyAttributes;
    STCity *_city;
    long long _startWeekday;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)startWeekday;
- (id)city;
- (id)dailyAttributes;
- (id)currentAttributes;
- (id)createResponse;
- (id)_initWithCurrentAttributes:(id)arg1 dailyAttributes:(id)arg2 city:(id)arg3 startWeekday:(long long)arg4;

@end

