//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

#import <SoftwareUpdateServices/SUKeybagInterfaceObserver-Protocol.h>

@class BSTimer, NSString, SUKeybagInterface;

@interface SUInstallationConstraintMonitorForBatteryDiskAndKeybag : SUInstallationConstraintMonitorBase <SUKeybagInterfaceObserver>
{
    SUKeybagInterface *_queue_keybag;
    BSTimer *_queue_timer;
    unsigned long long _queue_deltaSpaceNeeded;
    _Bool _queue_diskSatisfied;
    _Bool _queue_keybagSatisfied;
    _Bool _queue_passcodeSatisfied;
    _Bool _queue_batterySatisfied;
}

- (_Bool)_queue_evaluateKeybag;
- (_Bool)_queue_evaluatePasscodeLocked;
- (_Bool)_queue_evaluateDisk;
- (_Bool)_queue_evaluateBattery;
- (void)_queue_pollSatisfied;
- (void)keybagInterface:(id)arg1 passcodeLockedStateDidChange:(_Bool)arg2;
- (void)keybagInterface:(id)arg1 hasPasscodeSetDidChange:(_Bool)arg2;
- (void)refreshConstraints;
- (unsigned long long)unsatisfiedConstraints;
@property(readonly, nonatomic) unsigned long long deltaSpaceNeeded;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 pollDuration:(double)arg3 keybag:(id)arg4;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

