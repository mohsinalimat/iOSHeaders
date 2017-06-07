//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class HDStatisticsBuilder, HKStatisticsCollection, NSDate, NSMutableArray, NSNumber, NSString;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDDataObserver>
{
    NSNumber *_startAnchor;
    HKStatisticsCollection *_statisticsCollection;
    HDStatisticsBuilder *_statisticsBuilder;
    NSMutableArray *_addedSamples;
    NSNumber *_addedSamplesAnchor;
    _Bool _deliveredInitialResults;
    _Bool _deliversUpdates;
    unsigned long long _mergeStrategy;
    NSDate *_anchorDate;
    unsigned long long _statisticsOptions;
}

@property(readonly, nonatomic) unsigned long long statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
@property(readonly, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void).cxx_destruct;
- (_Bool)_queue_objectIsRelevant:(id)arg1;
- (void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(_Bool)arg1;
- (void)_queue_updateStatistics;
- (void)_scheduleFetchAndDeliver;
- (void)_scheduleUpdateStatistics;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_start;
- (_Bool)_shouldListenForUpdates;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

