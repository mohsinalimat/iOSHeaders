//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class NSNumber;

@interface HDObserverQueryServer : HDQueryServer
{
    _Bool _deliverOnUnlock;
    NSNumber *_anchor;
}

@property(readonly, nonatomic) NSNumber *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) _Bool deliverOnUnlock; // @synthesize deliverOnUnlock=_deliverOnUnlock;
- (void).cxx_destruct;
- (void)_deliverDataWasUpdatedWithAnchor:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_shouldListenForUpdates;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_stop;
- (void)_queue_start;

@end

