//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOETARoute, GEORouteIncident, NSArray, NSData, NSDate;

@interface MNTrafficIncidentAlert : NSObject
{
    NSData *_alertID;
    NSData *_etaResponseID;
    unsigned long long _alertType;
    GEOETARoute *_oldETARoute;
    GEOComposedRoute *_originalRoute;
    GEOComposedRoute *_alternateRoute;
    CDStruct_3f2a7a20 _startValidCoordinateRange;
    CDStruct_3f2a7a20 _endValidCoordinateRange;
    CDStruct_3f2a7a20 _incidentCoordinate;
    CDStruct_3f2a7a20 _alternateEndValidCoordinateRange;
    NSDate *_alertDate;
    double _distanceToIncident;
    NSDate *_eta;
    _Bool _isAutomaticReroute;
}

+ (id)trafficIncidentAlertForDetails:(id)arg1;
@property(readonly, nonatomic) _Bool isAutomaticReroute; // @synthesize isAutomaticReroute=_isAutomaticReroute;
@property(readonly, nonatomic) NSDate *alertDate; // @synthesize alertDate=_alertDate;
@property(readonly, nonatomic) CDStruct_3f2a7a20 alternateEndValidCoordinateRange; // @synthesize alternateEndValidCoordinateRange=_alternateEndValidCoordinateRange;
@property(readonly, nonatomic) CDStruct_3f2a7a20 incidentCoordinate; // @synthesize incidentCoordinate=_incidentCoordinate;
@property(readonly, nonatomic) CDStruct_3f2a7a20 endValidCoordinateRange; // @synthesize endValidCoordinateRange=_endValidCoordinateRange;
@property(readonly, nonatomic) CDStruct_3f2a7a20 startValidCoordinateRange; // @synthesize startValidCoordinateRange=_startValidCoordinateRange;
@property(readonly, nonatomic) GEOComposedRoute *alternateRoute; // @synthesize alternateRoute=_alternateRoute;
@property(readonly, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(readonly, nonatomic) GEOETARoute *oldETARoute; // @synthesize oldETARoute=_oldETARoute;
@property(retain, nonatomic) NSDate *eta; // @synthesize eta=_eta;
@property(nonatomic) double distanceToIncident; // @synthesize distanceToIncident=_distanceToIncident;
@property(readonly, nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
@property(readonly, nonatomic) NSData *etaResponseID; // @synthesize etaResponseID=_etaResponseID;
@property(readonly, nonatomic) NSData *alertID; // @synthesize alertID=_alertID;
- (void).cxx_destruct;
- (id)_dynamicStringValues;
- (CDStruct_2c43369c)_divergenceCoordinate;
- (CDStruct_3f2a7a20)_routeCoordinateAtDuration:(double)arg1 beforeRouteCoordinate:(CDStruct_3f2a7a20)arg2;
- (void)_findRouteDivergence;
@property(readonly, nonatomic) unsigned long long secondsSaved;
- (void)updateAlertIDWithAlert:(id)arg1;
- (void)updateLocation:(id)arg1;
- (_Bool)isSimilarTo:(id)arg1;
@property(readonly, nonatomic) double alertDisplayDuration;
@property(readonly, nonatomic) double newEstimatedTime;
@property(readonly, nonatomic) double oldEstimatedTime;
@property(readonly, nonatomic) GEORouteIncident *oldETARouteIncident;
@property(readonly, nonatomic) NSArray *spokenTexts;
@property(readonly, nonatomic) NSArray *alertDescriptions;
@property(readonly, nonatomic) NSArray *alertTitles;
- (id)initWithTrafficIncidentAlertDetails:(id)arg1;
- (id)initWithRoute:(id)arg1 etaRoute:(id)arg2 etaResponse:(id)arg3;

@end

