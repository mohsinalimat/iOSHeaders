//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEODirectionsError-Protocol.h>

@class GEOAlert, NSString;
@protocol GEOTransitRoutingIncidentMessage;

__attribute__((visibility("hidden")))
@interface _GEODirectionsError : NSObject <GEODirectionsError>
{
    GEOAlert *_alert;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
    id <GEOTransitRoutingIncidentMessage> _routingIncidentMessage;
}

- (_Bool)hasError:(long long)arg1;
- (_Bool)_errorCode:(long long)arg1 toProblem:(out int *)arg2;
- (long long)_errorCodeForProblemDetail:(struct GEOProblemDetail)arg1;
@property(readonly, nonatomic) long long firstDirectionsErrorCode;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)description;
- (void)dealloc;
- (id)initWithWaypointIndex:(unsigned long long)arg1;
- (id)initWithResponse:(id)arg1;
- (void)_copyProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;

@end

