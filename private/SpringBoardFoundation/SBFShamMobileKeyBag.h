//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, SBFMutableMobileKeyBagState;
@protocol OS_dispatch_queue;

@interface SBFShamMobileKeyBag : NSObject
{
    float _timeScaleFactor;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_queue_correctPasscode;
    SBFMutableMobileKeyBagState *_queue_state;
    unsigned long long _queue_escrowState;
    float _queue_escrowCountTotal;
    float _queue_escrowCountDelta;
    NSData *_queue_trialPasscode;
}

+ (id)shamKeyBagWithRecoveryRequired:(_Bool)arg1 recoveryPossible:(_Bool)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4;
+ (id)shamKeyBagWithRecoveryRequired:(_Bool)arg1 correctPasscode:(id)arg2;
- (void).cxx_destruct;
- (long long)_simplifiedLockStateForLockState:(long long)arg1;
- (void)_queue_stepSecretChangeMachine;
- (void)_queue_initializeSecretChangeMachine:(id)arg1;
- (id)extendedState;
- (id)state;
- (void)waitForUnlockWithTimeout:(float)arg1;
- (_Bool)beginRecovery:(id)arg1 error:(id *)arg2;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lock;
- (id)initWithRecoveryRequired:(_Bool)arg1 recoveryPossible:(_Bool)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4;
- (id)initWithRecoveryRequired:(_Bool)arg1 correctPasscode:(id)arg2;

@end

