//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapLine-Protocol.h>

@class NSString;
@protocol GEOMapTransitStop;

@protocol GEOMapTransitLink <GEOMapLine>
@property(readonly, nonatomic) id <GEOMapTransitStop> stopTo;
@property(readonly, nonatomic) id <GEOMapTransitStop> stopFrom;
@property(readonly, nonatomic) unsigned int minimumTravelTime;
@property(readonly, nonatomic) NSString *internalLineName;
@property(readonly, nonatomic) unsigned long long transitLineID;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1 outClosestCoordinateOnLine:(CDStruct_c3b9c2ee *)arg2;
@end

