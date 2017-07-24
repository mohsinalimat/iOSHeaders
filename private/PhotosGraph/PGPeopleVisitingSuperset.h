//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet, NSDateInterval, NSMutableArray, PGGraphNode, PGPeopleVisitingVisit;

@interface PGPeopleVisitingSuperset : NSObject
{
    NSCountedSet *_numberOfMomentsByDistance;
    NSMutableArray *_visits;
    PGPeopleVisitingVisit *_currentVisit;
    PGGraphNode *_addressNode;
    NSDateInterval *_localDateInterval;
    unsigned long long _numberOfMatchingMoments;
    unsigned long long _totalNumberOfMoments;
    struct CLLocationCoordinate2D _coordinates;
}

@property(readonly) NSArray *visits; // @synthesize visits=_visits;
@property(readonly) unsigned long long totalNumberOfMoments; // @synthesize totalNumberOfMoments=_totalNumberOfMoments;
@property(readonly) unsigned long long numberOfMatchingMoments; // @synthesize numberOfMatchingMoments=_numberOfMatchingMoments;
@property(readonly) NSDateInterval *localDateInterval; // @synthesize localDateInterval=_localDateInterval;
@property(readonly) struct CLLocationCoordinate2D coordinates; // @synthesize coordinates=_coordinates;
@property(readonly) PGGraphNode *addressNode; // @synthesize addressNode=_addressNode;
- (void).cxx_destruct;
- (id)description;
- (void)resetVisitFindingSession;
- (void)closeVisitFindingSession;
- (void)registerMomentNode:(id)arg1 distance:(unsigned long long)arg2;
@property(readonly) double upperCloseRatio;
@property(readonly) double lowerCloseRatio;
@property(readonly) double upperFarRatio;
@property(readonly) double lowerFarRatio;
@property(readonly) double upperVeryFarRatio;
@property(readonly) double lowerVeryFarRatio;
- (id)initWithAddressNode:(id)arg1 localDateInterval:(id)arg2;

@end

