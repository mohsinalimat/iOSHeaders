//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PLRevGeoPlaceAnnotation;

@interface PLRevGeoPlace : NSObject
{
    NSMutableArray *_placeTypeInfoMap[15];
    PLRevGeoPlaceAnnotation *_placeAnnotation;
    _Bool _isHome;
}

+ (CDUnknownBlockType)sortedAdditionalPlaceInfoComparator;
@property(nonatomic) _Bool isHome; // @synthesize isHome=_isHome;
- (unsigned long long)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned long long)arg2;
- (id)description;
- (id)bestPlaceInfoForOrderType:(unsigned long long)arg1;
- (id)placeInfosForOrderType:(unsigned long long)arg1;
- (void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned long long)arg2;
- (void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned long long)arg3;
- (void)_mergeGEOMapItem:(id)arg1;
- (id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long *)arg3 outPreviousOrderType:(unsigned long long *)arg4;
- (id)_placeInfosForOrderType:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;
- (id)minimumAreaForOrderType:(unsigned long long)arg1 name:(id)arg2;
- (id)initWithGEOMapItem:(id)arg1 placeAnnotationData:(id)arg2;
- (void)dealloc;
- (id)init;

@end

