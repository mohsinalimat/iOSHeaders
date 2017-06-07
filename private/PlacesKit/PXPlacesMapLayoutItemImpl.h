//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapLayoutItem-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem>
{
    NSMutableOrderedSet *_layoutGeotaggables;
    struct CLLocationCoordinate2D _coordinate;
}

@property(retain, nonatomic) NSMutableOrderedSet *layoutGeotaggables; // @synthesize layoutGeotaggables=_layoutGeotaggables;
@property struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSOrderedSet *geotaggables;
- (_Bool)isEqualToLayoutItem:(id)arg1;
- (void)addGeotaggables:(id)arg1;
- (void)addGeotaggable:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

