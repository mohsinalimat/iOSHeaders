//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol GEORouteManagerDelegate;

@interface GEORouteManager : NSObject
{
    id <GEORouteManagerDelegate> _delegate;
}

+ (void)setShouldRequestServerLatencyInfo:(_Bool)arg1;
@property(nonatomic) __weak id <GEORouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchDirectionsForTicket:(id)arg1 routeSet:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addedRoutesToRouteSet:(id)arg1;
- (void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3;
- (void)handleResponse:(id)arg1 routeSet:(id)arg2 forTicket:(id)arg3;

@end

