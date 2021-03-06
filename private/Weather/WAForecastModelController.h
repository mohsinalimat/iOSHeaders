//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, WFServiceConnection;
@protocol OS_dispatch_queue;

@interface WAForecastModelController : NSObject
{
    NSOperationQueue *_forecastOperationQueue;
    NSObject<OS_dispatch_queue> *_incomingRequestQueue;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableSet *_updatingCities;
    NSMutableDictionary *_completionHandlersForCity;
    WFServiceConnection *_connection;
    struct ct_green_tea_logger_s *_greenTeaLogger;
    NSString *_trackingParameter;
}

@property(copy) NSString *trackingParameter; // @synthesize trackingParameter=_trackingParameter;
@property(nonatomic) struct ct_green_tea_logger_s *greenTeaLogger; // @synthesize greenTeaLogger=_greenTeaLogger;
@property(retain, nonatomic) WFServiceConnection *connection; // @synthesize connection=_connection;
@property(retain) NSMutableDictionary *completionHandlersForCity; // @synthesize completionHandlersForCity=_completionHandlersForCity;
@property(retain) NSMutableSet *updatingCities; // @synthesize updatingCities=_updatingCities;
@property(retain) NSObject<OS_dispatch_queue> *completionHandlerQueue; // @synthesize completionHandlerQueue=_completionHandlerQueue;
@property(retain) NSObject<OS_dispatch_queue> *incomingRequestQueue; // @synthesize incomingRequestQueue=_incomingRequestQueue;
@property(retain) NSOperationQueue *forecastOperationQueue; // @synthesize forecastOperationQueue=_forecastOperationQueue;
- (void).cxx_destruct;
- (id)_commaSeparatedUpdatingCitiesNames;
- (void)_handleForecastOperationCompletion:(id)arg1;
- (void)cancelAllFetchRequests;
- (id)_queue_executeFetchForCity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)fetchForecastForCities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)fetchForecastForCity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isCityBeingUpdated:(id)arg1;
- (void)dealloc;
- (id)init;

@end

