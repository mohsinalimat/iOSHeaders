//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class NSDictionary;

@interface HDCorrelationQueryServer : HDQueryServer
{
    long long _behaviorVersion;
    _Bool _suspended;
    NSDictionary *_dataFilters;
}

@property(readonly, nonatomic) NSDictionary *dataFilters; // @synthesize dataFilters=_dataFilters;
- (void).cxx_destruct;
- (_Bool)_queue_validateConfiguration:(id *)arg1;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end

