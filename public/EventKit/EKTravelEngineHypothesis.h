//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface EKTravelEngineHypothesis : NSObject <NSSecureCoding>
{
    _Bool _supportsLiveTraffic;
    int _transportType;
    NSDate *_conservativeDepartureDate;
    double _conservativeTravelTime;
    NSDate *_suggestedDepartureDate;
    double _estimatedTravelTime;
    NSDate *_aggressiveDepartureDate;
    double _aggressiveTravelTime;
    NSString *_routeName;
    unsigned long long _currentTrafficDensity;
    NSString *_trafficDensityDescription;
    long long _travelState;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long travelState; // @synthesize travelState=_travelState;
@property(retain, nonatomic) NSString *trafficDensityDescription; // @synthesize trafficDensityDescription=_trafficDensityDescription;
@property(nonatomic) unsigned long long currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
@property(nonatomic) _Bool supportsLiveTraffic; // @synthesize supportsLiveTraffic=_supportsLiveTraffic;
@property(retain, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(nonatomic) double aggressiveTravelTime; // @synthesize aggressiveTravelTime=_aggressiveTravelTime;
@property(retain, nonatomic) NSDate *aggressiveDepartureDate; // @synthesize aggressiveDepartureDate=_aggressiveDepartureDate;
@property(nonatomic) double estimatedTravelTime; // @synthesize estimatedTravelTime=_estimatedTravelTime;
@property(retain, nonatomic) NSDate *suggestedDepartureDate; // @synthesize suggestedDepartureDate=_suggestedDepartureDate;
@property(nonatomic) double conservativeTravelTime; // @synthesize conservativeTravelTime=_conservativeTravelTime;
@property(retain, nonatomic) NSDate *conservativeDepartureDate; // @synthesize conservativeDepartureDate=_conservativeDepartureDate;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) double effectiveTravelTime;
@property(readonly, nonatomic) NSDate *effectiveDepartureDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKGEORouteHypothesis:(id)arg1;
- (id)initWithSyntheticGEORouteHypothesis:(id)arg1;
- (id)initWithGEORouteHypothesis:(id)arg1;
- (id)init;

@end

