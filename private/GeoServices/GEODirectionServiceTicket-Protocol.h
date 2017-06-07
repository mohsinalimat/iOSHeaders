//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEODirectionsRequest, NSArray, NSDictionary;

@protocol GEODirectionServiceTicket <NSObject>
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) NSArray *waypoints;
@property(readonly, nonatomic) GEOComposedRoute *originalRoute;
@property(readonly, nonatomic) _Bool isReroute;
@property(readonly, nonatomic) GEODirectionsRequest *request;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEODirectionsResponse *, NSError *, id <GEODirectionsError>))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

