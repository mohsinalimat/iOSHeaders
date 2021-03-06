//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOMapLayerDataSubscribedRegion : NSObject <NSSecureCoding>
{
    CDStruct_c3b9c2ee *_coordinates;
    int _coordinateCount;
    _Bool _isRectangle;
}

+ (_Bool)supportsSecureCoding;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithXPCCoder:(id)arg1;
- (id)initWithXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithVertices:(id)arg1;
- (id)initWithRectangleC1:(CDStruct_c3b9c2ee)arg1 c2:(CDStruct_c3b9c2ee)arg2;
- (id)initWithMapRegion:(id)arg1;
- (id)createMapRegion;

@end

