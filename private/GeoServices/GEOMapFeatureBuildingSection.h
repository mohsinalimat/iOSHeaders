//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOMapFeatureBuildingSection : NSObject
{
    CDStruct_c3b9c2ee *_coordinates;
    unsigned long long _coordinateCount;
    double _baseHeight;
    double _height;
    CDStruct_8e575d68 *_feature;
    unsigned long long _sectionIndex;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(readonly, nonatomic) unsigned long long coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_8e575d68 *)arg1 sectionIndex:(unsigned long long)arg2;

@end

