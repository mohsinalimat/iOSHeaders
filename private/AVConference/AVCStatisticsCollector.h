//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VCRateControlBandwidthEstimator, VCRateControlOWRDEstimator, VCStatisticsHistory;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCStatisticsCollector : NSObject
{
    NSMutableDictionary *_statistics;
    struct tagVCStatisticsCollection *_statisticsCollection;
    NSMutableDictionary *_statisticChangeHandlerDictionary;
    VCRateControlBandwidthEstimator *_bandwidthEstimator;
    VCRateControlOWRDEstimator *_owrdEstimator;
    VCStatisticsHistory *_history;
    NSObject<OS_dispatch_queue> *_statisticsCollectorQueue;
    unsigned int _radioAccessTechnology;
    unsigned int _mode;
    unsigned int _sharedEstimatedBandwidth;
    unsigned int _sharedRemoteEstimatedBandwidth;
}

@property(readonly, nonatomic) unsigned int sharedRemoteEstimatedBandwidth; // @synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidth; // @synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void)addPacketLossInfo:(CDStruct_5cb394a5 *)arg1;
- (void)computeOWRDEstimation:(CDStruct_5cb394a5 *)arg1;
- (void)computeBWEstimation:(CDStruct_5cb394a5 *)arg1;
- (void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(CDStruct_5cb394a5 *)arg1;
- (void)computeOtherStatistics:(CDStruct_5cb394a5 *)arg1;
- (_Bool)addStatisticsHistory:(CDStruct_5cb394a5)arg1;
- (void)addEntriesFromStatistics:(CDStruct_5cb394a5)arg1;
- (void)setVCStatistics:(CDStruct_5cb394a5)arg1;
- (void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getStatistics:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)dealloc;
- (id)init;

@end

