//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@protocol FCNetworkReachabilityRequirementObserving;

@protocol FCNetworkReachabilityRequirement <NSObject>
@property(nonatomic) __weak id <FCNetworkReachabilityRequirementObserving> observer;
@property(readonly, nonatomic) long long offlineReason;
@property(readonly, nonatomic, getter=isSatisfied) _Bool satisfied;
@end

