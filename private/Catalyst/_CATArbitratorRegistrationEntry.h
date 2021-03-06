//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CATArbitratorRegistrationEntry : NSObject
{
    id mResource;
    unsigned long long mMaxConcurrentCount;
    NSMutableArray *mPendingWaits;
    NSObject<OS_dispatch_source> *mPendingWaitsSource;
    NSObject<OS_dispatch_queue> *mPendingWaitsQueue;
    unsigned long long _currentCount;
}

@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
- (void).cxx_destruct;
- (id)makeResourceProxyIfPossibleWithoutLocking:(_Bool)arg1;
- (void)servicePendingWaitTokens;
- (void)pendingWaitsNeedServicing;
- (void)resourceProxyDidInvalidate:(id)arg1;
- (void)invalidate;
- (id)waitForResourceWithExclusive:(_Bool)arg1 group:(id)arg2;
- (id)makeResourceProxyIfPossible:(_Bool)arg1;
- (id)initWithResource:(id)arg1 maxConcurrentCount:(unsigned long long)arg2;

@end

