//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBProcessWatchdogProviding-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding>
{
    double _deviceLaunchScale;
    double _deviceResumeScale;
    double _additionalFirstPartyScale;
    _Bool _enableThirdPartyPre9;
    int _daNotificationToken;
    NSDictionary *_watchdogPolicyExceptions;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (double)_defaultFirstPartyAdditionalScale;
+ (double)_defaultResumeScale;
+ (double)_defaultLaunchScale;
+ (double)_scaleForGestaltKey:(struct __CFString *)arg1;
+ (id)defaultPolicy;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;
- (double)_queue_watchdogScalingFactorForAppInfo:(id)arg1 isResume:(_Bool)arg2;
- (void)_queue_reloadDefaultSettings;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

