//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSLocationCacheTestObject, NSArray;
@protocol GEOMapServiceTicket, OS_dispatch_queue, OS_dispatch_source;

@interface CLSLocationCacher : NSObject
{
    id <GEOMapServiceTicket> _ticket;
    NSArray *_geoLocations;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _retryLevel;
    double _nextRetryTime;
    NSObject<OS_dispatch_queue> *_timerQueue;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CLSLocationCacheTestObject *_testObject;
}

@property(retain, nonatomic) CLSLocationCacheTestObject *testObject; // @synthesize testObject=_testObject;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)_cacheMapItems:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_heartBeat;
- (void)cachePlacemarks;
- (id)initWithLocations:(id)arg1;

@end

