//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKSampleTypeQueryClientInterface-Protocol.h>

@class NSString;

@interface _HKSampleTypeQuery : HKQuery <HKSampleTypeQueryClientInterface>
{
    CDUnknownBlockType _resultsHandler;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
- (void).cxx_destruct;
- (void)client_deliverSampleTypes:(id)arg1 query:(id)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPredicate:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

