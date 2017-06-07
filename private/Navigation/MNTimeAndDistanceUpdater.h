//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MNTimeAndDistanceUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject
{
    id <MNTimeAndDistanceUpdaterDelegate> _delegate;
    double _remainingTime;
    double _remainingDistance;
    double _distanceToManeuverStart;
    double _distanceToManeuverEnd;
}

@property(readonly, nonatomic) double distanceToManeuverEnd; // @synthesize distanceToManeuverEnd=_distanceToManeuverEnd;
@property(readonly, nonatomic) double distanceToManeuverStart; // @synthesize distanceToManeuverStart=_distanceToManeuverStart;
@property(readonly, nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) __weak id <MNTimeAndDistanceUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateForLocation:(id)arg1 route:(id)arg2 etaRoute:(id)arg3;

@end

