//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSDateComponents, NSURL, NSURLRequest, WFLocation;

@protocol WFForecastRequestFormatter <NSObject>
+ (NSURL *)hostURLForService;
+ (NSURLRequest *)forecastRequestForLocation:(WFLocation *)arg1 date:(NSDateComponents *)arg2;
@end

