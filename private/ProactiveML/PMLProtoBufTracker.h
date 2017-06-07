//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLEvaluationTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLinRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLogRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLMultiLabelEvaluationTrackerProtocol-Protocol.h>

@class AWDProactiveModelFittingModelInfo, NSString;
@protocol PMLTrackerAdapterProtocol;

@interface PMLProtoBufTracker : NSObject <PMLLogRegTrackerProtocol, PMLLinRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol>
{
    AWDProactiveModelFittingModelInfo *_modelInfo;
    unsigned long long _quantizationNumberOfBuckets;
    id <PMLTrackerAdapterProtocol> _adapter;
}

+ (id)parsecTrackerForPlanId:(struct NSString *)arg1;
+ (id)awdTrackerForPlanId:(struct NSString *)arg1;
+ (id)trackerForPlanId:(struct NSString *)arg1;
@property(readonly) id <PMLTrackerAdapterProtocol> adapter; // @synthesize adapter=_adapter;
- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (void)trackPrecisionAtK:(id)arg1;
- (void)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (void)trackObjectiveFeatures:(id)arg1 featureMatrix:(id)arg2 minibatchSize:(unsigned long long)arg3 support:(float)arg4;
- (id)trackGradient:(id)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 serverIteration:(unsigned long long)arg4;
- (id)trackWeights:(id)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3;
- (id)init;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 quantizationBuckets:(unsigned long long)arg3;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
