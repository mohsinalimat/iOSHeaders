//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSObject (LockingAdditions)
+ (void)mf_clearLocks;
- (id)mf_exclusiveLocks;
- (id)mf_lockOrdering;
- (id)mf_strictLockOrdering;
- (_Bool)_mf_ntsIsLocked;
- (void)mf_unlock;
- (_Bool)mf_tryLockWithPriority;
- (void)mf_lockWithPriority;
- (_Bool)mf_tryLock;
- (void)mf_lock;
- (void)_mf_checkToAllowLock:(id)arg1;
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;
- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;
- (void)_mf_dumpLockCallStacks:(unsigned long long)arg1 ordering:(id)arg2;
- (id)_mf_lockOrderingForType:(int)arg1;
@end

