//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDQueryControlServerInterface-Protocol.h>
#import <HealthDaemon/HDQueryServerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HDQueryControlServer : HDSubserver <HDQueryServerDelegate, HDQueryControlServerInterface>
{
    NSMutableDictionary *_queryServersByUUID;
}

- (void).cxx_destruct;
- (unsigned int)clientSDKVersionForQueryServer:(id)arg1;
- (_Bool)queryServerClientIsInBackground:(id)arg1;
- (_Bool)queryServerClientHasActiveWorkout:(id)arg1;
- (_Bool)queryServerShouldObserveInBackground:(id)arg1;
- (void)queryServerDidFinish:(id)arg1;
- (void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)readAuthorizationStatusForQueryServer:(id)arg1 type:(id)arg2 error:(id *)arg3;
- (_Bool)queryServer:(id)arg1 isAuthorizationStatusDeterminedForTypes:(id)arg2 error:(id *)arg3;
- (id)queryServer:(id)arg1 filterSamplesForReadAuthorization:(id)arg2;
- (id)_clientSourceIdentifierWithError:(id *)arg1;
- (void)_startQueryServer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_queue_hasActiveQueries;
- (void)remote_startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)remote_startHeartRateSummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startStatisticsQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startStatisticsCollectionQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startSourceQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startSampleTypesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startSampleQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startObserverQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startLocationSeriesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startLatestSummariesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startFitnessFriendsQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)remote_startDocumentQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startDateRangeQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startCurrentActivitySummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startCorrelationQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startAnchoredObjectQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startActivitySummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_startActivityStatisticsQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (id)initWithParentServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

