//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface SUKeybagInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    _Bool _queue_hasPasscodeSet;
    _Bool _queue_isPasscodeLocked;
    NSHashTable *_queue_observers;
    int _stateChangedNotifyToken;
}

+ (id)sharedInstance;
- (void)_queue_setIsPasscodeLocked:(_Bool)arg1;
- (void)_queue_setHasPasscodeSet:(_Bool)arg1;
- (_Bool)_queue_hasPasscodeSetFromLockState:(int)arg1;
- (_Bool)_queue_isPasscodeLockedFromLockState:(int)arg1;
- (int)_queue_fetchKeybagState;
- (void)_queue_refreshState;
- (id)createPreventLockAssertionWithDuration:(double)arg1;
- (_Bool)disableKeybagStash;
- (_Bool)persistKeybagStash;
- (_Bool)createInstallationKeybagForDescriptor:(id)arg1 withSecret:(id)arg2 forUnattendedInstall:(_Bool)arg3;
- (int)installationKeybagStateForDescriptor:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) _Bool isPasscodeLocked;
@property(readonly, nonatomic) _Bool hasPasscodeSet;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

