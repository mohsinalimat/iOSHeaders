//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PARRankerCentroidWeightsParameters : NSObject
{
    long long _featureType;
    long long _client;
    long long _func;
    double _weight;
}

+ (id)responseFromJSON:(id)arg1;
+ (id)defaultValue;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) long long func; // @synthesize func=_func;
@property(readonly, nonatomic) long long client; // @synthesize client=_client;
@property(readonly, nonatomic) long long featureType; // @synthesize featureType=_featureType;

@end

