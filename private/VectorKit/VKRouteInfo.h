//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, VKRouteEtaDescription;

@interface VKRouteInfo : NSObject
{
    GEOComposedRoute *_route;
    VKRouteEtaDescription *_etaDescription;
}

@property(retain, nonatomic) VKRouteEtaDescription *etaDescription; // @synthesize etaDescription=_etaDescription;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) _Bool hasRouteEta;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2;

@end

