//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FIAPHistoricalDataRequest : NSObject
{
    unsigned long long _requestId;
    NSString *_pluginIdentifier;
    NSString *_personHandle;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)historicalDataRequestWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *personHandle; // @synthesize personHandle=_personHandle;
@property(readonly, nonatomic) NSString *pluginIdentifier; // @synthesize pluginIdentifier=_pluginIdentifier;
@property(readonly, nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (_Bool)subsetOfHistoricalDataRequest:(id)arg1;
- (_Bool)_dateRangeIsSubsetOfHistoricalDataRequest:(id)arg1;
- (_Bool)isEqualToHistoricalDataRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setRequestId:(unsigned long long)arg1;
- (void)setPluginIdentifier:(id)arg1;
- (id)initWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end

