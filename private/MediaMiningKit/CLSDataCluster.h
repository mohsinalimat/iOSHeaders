//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLSDataCluster : NSObject
{
    NSArray *_objects;
    double _diameter;
    id _clustroid;
    double _score;
}

+ (id)clusterWithObjects:(id)arg1;
+ (id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) id clustroid; // @synthesize clustroid=_clustroid;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)meanDate;
- (id)meanRegion:(double)arg1;
- (id)dates;
- (id)locations;

@end

