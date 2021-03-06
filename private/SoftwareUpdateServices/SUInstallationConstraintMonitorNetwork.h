//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

#import <SoftwareUpdateServices/SUNetworkObserver-Protocol.h>

@class NSString, SUNetworkMonitor;

@interface SUInstallationConstraintMonitorNetwork : SUInstallationConstraintMonitorBase <SUNetworkObserver>
{
    SUNetworkMonitor *_queue_networkMonitor;
    _Bool _queue_hasNetwork;
}

- (void)_queue_networkDidChange;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (unsigned long long)unsatisfiedConstraints;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 networkMonitor:(id)arg3;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

