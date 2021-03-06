//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/FCNetworkReachabilityObserving-Protocol.h>
#import <NewsToday/NTTodayContext-Protocol.h>

@class NSString, NTSourceAvailabilityManager;
@protocol FCContentContext, NTHeadlineResultsSource, NTNetworkEventTracker, NTReadablePrivateDataStorage, NTWritablePrivateDataStorage, OS_dispatch_queue;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>
{
    CDUnknownBlockType _newResultsHandler;
    id <FCContentContext> _contentContext;
    id <NTNetworkEventTracker> _networkEventTracker;
    CDUnknownBlockType _sessionProvider;
    id <NTReadablePrivateDataStorage> _readablePrivateDataStorage;
    id <NTWritablePrivateDataStorage> _writablePrivateDataStorage;
    NTSourceAvailabilityManager *_sourceAvailabilityManager;
    id <NTHeadlineResultsSource> _headlineResultsSource;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <NTHeadlineResultsSource> headlineResultsSource; // @synthesize headlineResultsSource=_headlineResultsSource;
@property(retain, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager; // @synthesize sourceAvailabilityManager=_sourceAvailabilityManager;
@property(retain, nonatomic) id <NTWritablePrivateDataStorage> writablePrivateDataStorage; // @synthesize writablePrivateDataStorage=_writablePrivateDataStorage;
@property(retain, nonatomic) id <NTReadablePrivateDataStorage> readablePrivateDataStorage; // @synthesize readablePrivateDataStorage=_readablePrivateDataStorage;
@property(copy, nonatomic) CDUnknownBlockType sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) id <NTNetworkEventTracker> networkEventTracker; // @synthesize networkEventTracker=_networkEventTracker;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) CDUnknownBlockType newResultsHandler; // @synthesize newResultsHandler=_newResultsHandler;
- (void).cxx_destruct;
- (void)_setupHeadlineResultsSource;
- (void)userDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2;
- (void)userDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2;
- (void)fetchLatestHeadlinesWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)initWithContentHostDirectory:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3 sessionProvider:(CDUnknownBlockType)arg4;
- (id)initWithContentContext:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3 sessionProvider:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

