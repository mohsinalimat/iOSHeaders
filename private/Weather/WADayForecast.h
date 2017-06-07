//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/NSCopying-Protocol.h>

@class WFTemperature;

@interface WADayForecast : NSObject <NSCopying>
{
    WFTemperature *_high;
    WFTemperature *_low;
    unsigned long long _icon;
    unsigned long long _dayOfWeek;
    unsigned long long _dayNumber;
}

+ (id)dayForecastForLocation:(id)arg1 conditions:(id)arg2;
@property(nonatomic) unsigned long long dayNumber; // @synthesize dayNumber=_dayNumber;
@property(nonatomic) unsigned long long dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) unsigned long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) WFTemperature *low; // @synthesize low=_low;
@property(copy, nonatomic) WFTemperature *high; // @synthesize high=_high;
- (void).cxx_destruct;
- (long long)compareDayNumberToDayForecast:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

