//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOPointUtility : NSObject
{
}

+ (id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(_Bool)arg3;
+ (id)zilchData:(id)arg1 fromPointIndex:(unsigned long long)arg2;
+ (id)unpackBasicPoints:(id)arg1;
+ (id)unpackZilchPoints:(id)arg1;
+ (id)unpackPoints:(id)arg1 usesZilch:(_Bool)arg2;
+ (CDStruct_c3b9c2ee)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(_Bool)arg3;
+ (unsigned long long)pointCount:(id)arg1 usesZilch:(_Bool)arg2;
+ (void *)controlPoints:(id)arg1 usesZilch:(_Bool)arg2;
+ (_Bool)zilchPointsSupported;

@end

