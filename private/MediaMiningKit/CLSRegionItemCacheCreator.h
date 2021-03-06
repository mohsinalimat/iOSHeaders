//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_os_log;

@interface CLSRegionItemCacheCreator : NSObject
{
    NSArray *_queryPerformers;
    _Bool _simulatesTimeout;
    NSObject<OS_os_log> *_loggingConnection;
    double _timeoutInterval;
    unsigned long long _numberOfRetries;
}

+ (id)createPlacesForBusinessItems:(id)arg1;
+ (id)businessItemsForRegion:(id)arg1;
@property(readonly, nonatomic) NSArray *queryPerformers; // @synthesize queryPerformers=_queryPerformers;
@property(nonatomic) unsigned long long numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic, getter=isSimulatingTimeout) _Bool simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (void).cxx_destruct;
- (_Bool)createCacheForRegions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)logRequestCounterValuesFromLookupTable:(id)arg1;
- (id)incrementRequestCounterForQueryPerformer:(id)arg1 counterTable:(id)arg2;
- (void)logAggdGeoLookupFailureResultForQueryPerformer:(id)arg1;
- (void)logAggdGeoLookupCounterAndDurationForQueryPerformer:(id)arg1 lookupDuration:(id)arg2;
- (id)initWithQueryPerformers:(id)arg1;

@end

