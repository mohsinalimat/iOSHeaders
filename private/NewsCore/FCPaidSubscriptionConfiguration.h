//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NTPBPaidSubscriptionConfig;

@interface FCPaidSubscriptionConfiguration : NSObject
{
    NTPBPaidSubscriptionConfig *_paidSubscriptionConfig;
    long long _maximumGroupSize;
    long long _maximumTimesHeadlineInGroup;
}

@property(readonly, nonatomic) long long maximumTimesHeadlineInGroup; // @synthesize maximumTimesHeadlineInGroup=_maximumTimesHeadlineInGroup;
@property(readonly, nonatomic) long long maximumGroupSize; // @synthesize maximumGroupSize=_maximumGroupSize;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPBPaidSubscriptionConfig:(id)arg1;

@end

