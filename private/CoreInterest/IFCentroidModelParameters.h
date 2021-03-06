//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreInterest/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface IFCentroidModelParameters : NSObject <NSSecureCoding>
{
    long long _termWeightScheme;
    long long _idfWeightScheme;
    long long _norm;
    unsigned long long _minimumTermFrequency;
    NSDictionary *_engagementRate;
    NSDictionary *_engagementCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultParameters;
@property(copy) NSDictionary *engagementCount; // @synthesize engagementCount=_engagementCount;
@property(copy) NSDictionary *engagementRate; // @synthesize engagementRate=_engagementRate;
@property unsigned long long minimumTermFrequency; // @synthesize minimumTermFrequency=_minimumTermFrequency;
@property long long norm; // @synthesize norm=_norm;
@property long long idfWeightScheme; // @synthesize idfWeightScheme=_idfWeightScheme;
@property long long termWeightScheme; // @synthesize termWeightScheme=_termWeightScheme;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqualToParameters:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

