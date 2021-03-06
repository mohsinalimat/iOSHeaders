//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKStatisticsCollectionQueryClientInterface-Protocol.h>

@class HKStatisticsCollection, NSDate, NSDateComponents, NSMutableArray, NSNumber, NSString;

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface>
{
    NSDate *_anchorDate;
    unsigned long long _options;
    NSDateComponents *_intervalComponents;
    NSMutableArray *_results;
    _Bool _hasReceivedInitialResults;
    CDUnknownBlockType _initialResultsHandler;
    CDUnknownBlockType _statisticsUpdateHandler;
    NSNumber *_lastAnchor;
    HKStatisticsCollection *_statisticsCollection;
    unsigned long long _mergeStrategy;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
@property(nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(retain) HKStatisticsCollection *statisticsCollection; // @synthesize statisticsCollection=_statisticsCollection;
@property(retain) NSNumber *lastAnchor; // @synthesize lastAnchor=_lastAnchor;
@property(copy, nonatomic) CDUnknownBlockType statisticsUpdateHandler; // @synthesize statisticsUpdateHandler=_statisticsUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType initialResultsHandler; // @synthesize initialResultsHandler=_initialResultsHandler;
@property(readonly, copy) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void).cxx_destruct;
- (void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3;
- (void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3;
- (void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(_Bool)arg2 isFinal:(_Bool)arg3 anchor:(id)arg4 query:(id)arg5;
- (void)queue_deliverError:(id)arg1;
- (void)queue_validate;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

