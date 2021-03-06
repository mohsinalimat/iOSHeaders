//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRoute, GEOETARoute, MNCommuteDestination, MNLocation, NSDictionary;

@protocol MNCommuteDestinationObserver <NSObject>

@optional
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeScores:(NSDictionary *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeScore:(long long)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeLastLocation:(MNLocation *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRemainingDistance:(double)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRemainingTime:(double)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeETARoute:(GEOETARoute *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeLastMatchedLocation:(MNLocation *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRoute:(GEOComposedRoute *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeInvalid:(_Bool)arg2;
@end

