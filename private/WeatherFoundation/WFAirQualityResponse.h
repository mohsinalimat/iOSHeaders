//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSData, WFAirQualityConditions;

@interface WFAirQualityResponse : WFResponse <NSSecureCoding>
{
    _Bool _responseWasFromCache;
    WFAirQualityConditions *_airQualityConditions;
    NSData *_rawAPIData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *rawAPIData; // @synthesize rawAPIData=_rawAPIData;
@property(nonatomic) _Bool responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;
@property(retain) WFAirQualityConditions *airQualityConditions; // @synthesize airQualityConditions=_airQualityConditions;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

