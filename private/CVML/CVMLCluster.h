//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface CVMLCluster : NSObject
{
    _Bool _shouldUpdateRepresentative;
    NSArray *_objects;
    unsigned long long _clusterId;
    unsigned long long _totalObjectCount;
    NSArray *_suggestedIdsForRepresentative;
    NSDictionary *_representativenessById;
}

@property(retain) NSDictionary *representativenessById; // @synthesize representativenessById=_representativenessById;
@property(retain) NSArray *suggestedIdsForRepresentative; // @synthesize suggestedIdsForRepresentative=_suggestedIdsForRepresentative;
@property _Bool shouldUpdateRepresentative; // @synthesize shouldUpdateRepresentative=_shouldUpdateRepresentative;
@property unsigned long long totalObjectCount; // @synthesize totalObjectCount=_totalObjectCount;
@property unsigned long long clusterId; // @synthesize clusterId=_clusterId;
@property(retain) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)description;

@end

