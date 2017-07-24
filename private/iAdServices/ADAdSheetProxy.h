//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol ADAdSheetProxyDelegate, OS_dispatch_queue;

@interface ADAdSheetProxy : NSObject
{
    id <ADAdSheetProxyDelegate> _delegate;
    _Bool _serviceLaunchThrottled;
    _Bool _waitingForAdSheet;
    _Bool _openApplicationInProgress;
    double _lastLaunchTimestamp;
    long long _unexpectedTerminationCount;
    long long _interruptionCount;
    double _nextScheduledLaunch;
    NSMutableSet *_launchAssertions;
    NSObject<OS_dispatch_queue> *_proxyQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *proxyQueue; // @synthesize proxyQueue=_proxyQueue;
@property(retain, nonatomic) NSMutableSet *launchAssertions; // @synthesize launchAssertions=_launchAssertions;
@property(nonatomic) double nextScheduledLaunch; // @synthesize nextScheduledLaunch=_nextScheduledLaunch;
@property(nonatomic) long long interruptionCount; // @synthesize interruptionCount=_interruptionCount;
@property(nonatomic) long long unexpectedTerminationCount; // @synthesize unexpectedTerminationCount=_unexpectedTerminationCount;
@property(nonatomic) double lastLaunchTimestamp; // @synthesize lastLaunchTimestamp=_lastLaunchTimestamp;
@property(nonatomic) _Bool openApplicationInProgress; // @synthesize openApplicationInProgress=_openApplicationInProgress;
@property(nonatomic) _Bool waitingForAdSheet; // @synthesize waitingForAdSheet=_waitingForAdSheet;
@property(readonly, nonatomic) _Bool serviceLaunchThrottled; // @synthesize serviceLaunchThrottled=_serviceLaunchThrottled;
- (void)reportAdSheetInterruption;
- (void)reportAdSheetUnexpectedTermination;
- (void)_adSheetAvailable;
- (void)_considerLaunchingAdSheet;
- (void)considerLaunchingAdSheet;
@property(readonly, nonatomic) double remainingLaunchBackoff;
- (void)resetAdSheetThrottle;
- (void)releaseLaunchAssertion:(id)arg1;
- (void)takeLaunchAssertion:(id)arg1;
@property(nonatomic) __weak id <ADAdSheetProxyDelegate> delegate;
- (id)init;

@end

