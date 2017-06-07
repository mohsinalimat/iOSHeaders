//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMapAccessRestrictions-Protocol.h>

@class GEOMapAccess, NSString;

@interface GEORoadMatcher : NSObject <GEOMapAccessRestrictions>
{
    GEOMapAccess *_map;
    _Bool _useRawLocations;
}

@property(nonatomic) _Bool useRawLocations; // @synthesize useRawLocations=_useRawLocations;
- (id)_bestSegmentForTile:(id)arg1 location:(id)arg2 transportType:(int)arg3;
- (id)_tilesAround:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (id)matchLocation:(id)arg1 forTransportType:(int)arg2;
@property(readonly, nonatomic) _Bool allowsNetworkTileLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

