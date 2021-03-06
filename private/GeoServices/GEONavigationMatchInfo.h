//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEONavigationMatchInfo : NSObject
{
    double routeMatchScore;
    double distanceFromRoute;
    double maxDistance;
    double distanceMatchScore;
    double distanceWeight;
    double courseDelta;
    double maxCourseDelta;
    double courseMatchScore;
    double courseWeight;
    double roadWidthOnRoute;
    double distanceFromRoad;
    double roadCourseDelta;
    double distanceFromNearestJunction;
}

@property(nonatomic) double distanceFromNearestJunction; // @synthesize distanceFromNearestJunction;
@property(nonatomic) double roadCourseDelta; // @synthesize roadCourseDelta;
@property(nonatomic) double distanceFromRoad; // @synthesize distanceFromRoad;
@property(nonatomic) double roadWidthOnRoute; // @synthesize roadWidthOnRoute;
@property(nonatomic) double courseWeight; // @synthesize courseWeight;
@property(nonatomic) double courseMatchScore; // @synthesize courseMatchScore;
@property(nonatomic) double maxCourseDelta; // @synthesize maxCourseDelta;
@property(nonatomic) double courseDelta; // @synthesize courseDelta;
@property(nonatomic) double distanceWeight; // @synthesize distanceWeight;
@property(nonatomic) double distanceMatchScore; // @synthesize distanceMatchScore;
@property(nonatomic) double maxDistance; // @synthesize maxDistance;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute;
@property(nonatomic) double routeMatchScore; // @synthesize routeMatchScore;
- (id)description;

@end

