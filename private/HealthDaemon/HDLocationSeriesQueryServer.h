//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKLocationSeriesSample, NSObject;
@protocol OS_dispatch_queue;

@interface HDLocationSeriesQueryServer : HDQueryServer
{
    NSObject<OS_dispatch_queue> *_batchQueue;
    unsigned long long _batchCount;
    HKLocationSeriesSample *_locationSeries;
}

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end

